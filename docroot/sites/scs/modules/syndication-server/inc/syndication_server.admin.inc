<?php

/**
 * Admin settings page form
 * @param - FID?
 * @return FAPI array
 */

function syndication_server_admin_config_form($form) {
  
  // $form['title'] = array(
  //   '#type' => 'textfield',
  //   '#title' => t('Title'),
  //   '#description' => t('The title you enter here appears on the page.'),
  //   '#size' => 40,
  //   '#maxlength' => 255,
  // );

  $debug_mode = variable_get('syndication_server_debug', 0);
  $form['ssdebug'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Debug Mode'), 
    '#collapsible' => TRUE,
    '#collapsed' => !$debug_mode, 
    '#description' => t('Enabling this mode will skip the validation of the client URL to the API key. This allows for debugging with REST clients and/or in local development environments only using a public key.'),
  );
  $form['ssdebug']['syndication_server_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Debug Mode.'),
    '#default_value' => $debug_mode,
  );
  
  
  
  return system_settings_form($form);
}



/**
 * Displays a list of all current and active client API keys 
 * 
 * 
 **/
 
function syndication_server_admin_clients_list() {
  ctools_include('syndication_server.utility', 'syndication_server', 'inc');
  
  $content = "";
  $keys = _syndication_server_get_all_keys();
  
  $content .= l('Create New Key', 'admin/config/syndication-server/clients/new', array('attributes' => array('class'=>'button')));
  
  $vars = array(
    'header' => array(
      'Domain', 'Keys', 'Status', 'Operations'
    ),
    'rows' => array(),
    'attributes' => array(),
    'caption' => '',
    'colgroups' => array(),
    'sticky' => 0,
    'empty' => '',
  );
  
  foreach($keys as $k => $ar) {
    
    $key_html = "<p><strong>Client Public:</strong> " . $ar['client_public'] . "</p>";
    $key_html .= "<p><strong>Client Secret:</strong> " . $ar['client_secret'] . "</p>";
    $key_html .= "<p><strong>Server Public:</strong> " . $ar['server_public'] . "</p>";
    $key_html .= "<p><strong>Server Secret:</strong> " . $ar['server_secret'] . "</p>";
    
    $vars['rows'][] = array('data'=>array(
      $ar['client_domain'],
      $key_html,
      ($ar['status']) ? t('Enabled') : t('Disabled'),
      l('delete', 'admin/config/syndication-server/clients/delete/'.$k, array('query'=>array('destination'=>'admin/config/syndication-server/clients')))
    ));
    
  }
  
  $content .= theme_table($vars);
  
  return $content;
}



/**
 * syndication_server_admin_clients_new
 * A page for creating new Client API Keys
 * 
 **/
 
function syndication_server_admin_clients_new() {
  $content = "";
  ctools_include('syndication_server.utility', 'syndication_server', 'inc');
  
  
  
  
  $content .= drupal_render(drupal_get_form('syndication_server_admin_clients_new_form'));
  
  
  
  return $content;
}


/**
 * syndication_server_admin_clients_new_form
 * The create new syndication client api key form function 
 * 
 **/
 
function syndication_server_admin_clients_new_form($form, $form_state) {
  
  $form['client_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Client URL'),
    '#description' => t('The full domain name of the client. eg: client.' . $_SERVER['HTTP_HOST']. ". with no trailing slash"),
    '#size' => 40,
    '#maxlength' => 255,
    '#required' => TRUE,
  );
  
  if(isset($_COOKIE['ss_save_new_key'])) {
    $form['new_key_info'] = array(
      '#type' => 'item',
      '#title' => 'Generated Key Information',
      '#markup' => _syndication_server_gen_new_key_success(),
    );
  }

  $form['save_key'] = array(
    '#type' => 'submit',
    '#value' => t('Generate New Key'),
  );
  

    
  return $form;
}

/**
 * syndication_server_admin_clients_new_form_validate
 * Implementation of hook_form_validate
 * 
 **/

function syndication_server_admin_clients_new_form_validate($f, $fs) {
  ctools_include('syndication_server.utility', 'syndication_server', 'inc');
  
  $domain = check_plain(trim($f['client_url']['#value']));

  setcookie('ss_save_new_key', 'client.doane.local', time() + (60*60*24) );

  $domain = _syndication_server_prepare_domain_name($domain);
  
  // Check if domain already exists....
  $count = db_select('ss_client_keys', 'ss')
            ->fields('ss')
            ->condition('client_domain', $domain, "=")
            ->countQuery()
            ->execute()  
            ->fetchField();
  
  if($count) {
    form_set_error('client_url','Client Domain Already Exists');
  }  
  
  
}

/**
 * Implementation of hook_form_submit
 * Generates and saves a new API key to the db
 *  
 **/

function syndication_server_admin_clients_new_form_submit($f, $fs) {
  ctools_include('syndication_server.utility', 'syndication_server', 'inc');
  $domain = check_plain(trim($f['client_url']['#value']));

  // remove http stuff
  $domain = _syndication_server_prepare_domain_name($domain);
  
  // Generate the keys
  $keys = syndication_server_generate_api_keys($domain);
  
  // Save keys
  $saved = syndication_server_save_api_keys($domain,  $keys['client_public'], $keys['client_secret'], $keys['server_public'], $keys['server_secret']);
  
  if($saved) {
    drupal_set_message('API Keys saved successfully');
    setcookie('ss_save_new_key', $domain, time() + (60*60*24));
  } else {
    drupal_set_message('API Keys failed to save. Please try again', 'error');
  }
  
  
}


/**
 * Save API KEY
 * Generates and returns secret and public keys
 * @param $client_url
 *    The fully qualified domain name of the client site
 * @return array
 *    An indexed array of keys
 *    'client_public' => Client public key
 *    'client_secret' => client secret key
 *    'server_public' => Server Public key
 *    'server_secret' => Server secret key
 **/

function syndication_server_generate_api_keys($client_url) {
  $salt = drupal_get_hash_salt();
  
  // Client public is a randomly generated hash
  $client_public = sha1(uniqid() . time() . $salt);
  
  // Client secret is sha1'd server domain + md5'd client_public + salt
  $client_secret = sha1($client_url) . "-" . md5($client_public . $salt);
  
  // Server Public is a randomly generated hash
  $server_public = sha1($client_url . uniqid() . time());
  
  // Server secret is sha1'd server domain + md5'd $server_public
  $server_secret = sha1($_SERVER['HTTP_HOST']) . md5($server_public);
  
  return array(
    'client_public' => $client_public,
    'client_secret' => $client_secret,
    'server_public' => $server_public,
    'server_secret' => $server_secret,
  );
  
}


/**
 * Syndication server save API keys
 * 
 * @param $domain
 *    The client domain url
 * @param $client_public
 *    The client public key
 * @param $client_secret
 *    The client secret key
 * @param $server_public
 *    The server public key
 * @param $server_secret
 *    The server secret key
 * 
 * @return boolean | true if success
 * 
 **/

function syndication_server_save_api_keys($domain, $client_public, $client_secret, $server_public, $server_secret) {
  
  $fields = array(
    'client_domain' => $domain,
    'client_secret' => $client_secret,
    'client_public' => $client_public,
    'server_public' => $server_public,
    'server_secret' => $server_secret,
    'status'        => 1,
    );
  
  return drupal_write_record('ss_client_keys', $fields);
  
}





/**
 * Handles the showing of a new key on the generate page
 * 
 * @return HTML
 *    Html with the new key information
 * 
 **/

function _syndication_server_gen_new_key_success() {
  $output = '';
  
  // Check for cookie key
  if(empty($_COOKIE['ss_save_new_key'])) {
    return;
  }
  
  $keys = _get_keys_by_domain($_COOKIE['ss_save_new_key']);
  
  $output .= "<p><strong>Client Domain:</strong> " . $keys['client_domain'] . "</p>";
  $output .= "<p><strong>Client Public:</strong> " . $keys['client_public'] . "</p>";
  $output .= "<p><strong>Client Secret:</strong> " . $keys['client_secret'] . "</p>";
  $output .= "<p><strong>Server Public:</strong> " . $keys['server_public'] . "</p>";
  $output .= "<p><strong>Server Secret:</strong> " . $keys['server_secret'] . "</p>";
  
  $output .= "<hr />";
  $output .= "<p>" . t('Copy and paste the CLIENT PUBLIC KEY and the SERVER SECRET KEY into the syndication client settings page.') . "</p>";

  // Unset key and return
  setcookie('ss_save_new_key','',time() - 3600);
  unset($_COOKIE['ss_save_new_key']);
  return $output;
}




/**
 * Syndication Server Confirm Delete of a key
 * 
 **/

function syndication_server_admin_clients_delete_confirm($form, $form_state) {
  
  $form = confirm_form($form, 'Are you sure you want to delete this API key', null);
  $a5 = arg(5);

  // Not a number
  if(!is_numeric($a5)) {
    drupal_goto('admin/config/syndication-server/clients');
  }

  $form['kid'] = array(
    '#type' => 'hidden',
    '#value' => $a5,
  );
  
  return $form;
}


/**
 * syndication_server_admin_clients_delete_confirm
 * 
 **/

function syndication_server_admin_clients_delete_confirm_submit($f, $fs) {
  
  $kid = check_plain($fs['values']['kid']);
  
  db_delete('ss_client_keys')
      ->condition('kid', $kid)
      ->execute();
  
  drupal_set_message('API Key deleted successfully');
  
}







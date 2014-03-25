<?php


/**
 * Syndication Client Administrative Functions
 * Developed @ImageX Media
 * Authors:
 *          Shea McKinney - sherakama
 *
 * This module provides the adminstrative interfaces for the syndication client
 *
 *
 * @todo:::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 *
 * Create references status page to show missing references
 *
 * ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 *
 */

/**
 * Implements hook_form().
 */
function syndication_client_admin_config_form($form, &$form_state) {

  $form['syndication_process_on_cron'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable syndication on cron run.'),
    '#default_value' => variable_get('syndication_process_on_cron', 0),
  );
  $form['syndication_cron_sync_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Limit'),
    '#description' => t('The maximum number of nodes to process in one cron run'),
    '#default_value' => variable_get('syndication_cron_sync_limit', 100),
    '#size' => 5,
    '#maxlength' => 3
  );
  $form['syndication_cron_interval'] = array(
    '#type' => 'textfield',
    '#title' => t('Interval'),
    '#description' => t('Set the time between cron runs (enter value in seconds).'),
    '#default_value' => variable_get('syndication_cron_interval', 60*60),
    '#size' => 6,
    '#maxlength' => 6
  );
  $form['syndication_last_server_request'] = array(
    '#type' => 'textfield',
    '#title' => t('Last Successful Sync Run'),
    '#description' => t('[Advanced Only] - This is the last timestamp that ran'),
    '#default_value' => variable_get('syndication_last_server_request', 0),
  );
  $form['syndication_fallback_time'] = array(
    '#type' => 'textfield',
    '#title' => t('Fallback Sync Time'),
    '#description' => t('[Advanced Only] - This is the fallback timestamp'),
    '#default_value' => variable_get('syndication_fallback_time', 0),
  );


  $form['#submit'][] = 'syndication_client_admin_config_form_submit';

  return system_settings_form($form);
}

/**
 * Syndication client admin config settings form custom submit actions
 * @param $form
 * @param $form_state
 *
 */

function syndication_client_admin_config_form_submit($form, $form_state)
{
  // Reset the offset if the form is saved because the limit of items to process
  // Could have changed and I am too lazy to figure out if it did. No harm in
  // setting it to 0 tho.
  variable_set('syndication_client_node_sync_offset', 0);
  drupal_set_message("Reset the index offset for sync", 'status');
}


/**
 * Admin settings page form
 * @param - FID?
 * @return FAPI array
 */

function syndication_client_admin_api_form($f) {
  $form = array();
  $keys = variable_get('syndication_client_keys', array());

  // The Path To the Syndication Server
  $form['syndication_client_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Client domain name'),
    '#description' => t('Enter the full domain name of this site. eg: http://' .$_SERVER['SERVER_NAME']),
    '#size' => 40,
    '#maxlength' => 255,
    '#required' => TRUE,
    '#default_value' => variable_get('syndication_client_domain', 'http://'.$_SERVER['SERVER_NAME']),
  );

  // The Path To the Syndication Server
  $form['syndication_server_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Syndication Server URL'),
    '#description' => t('Enter the full path to the syndication server without including the last slash.'),
    '#size' => 40,
    '#maxlength' => 255,
    '#required' => TRUE,
    '#default_value' => variable_get('syndication_server_url',''),
  );

  // The public key from the syndication server
  $form['syndication_client_public_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Syndication Client Public Key'),
    '#description' => t('Enter the public key generated from the syndication server.'),
    '#size' => 40,
    '#maxlength' => 255,
    '#default_value' => !empty($keys['client_public']) ? $keys['client_public'] : '',
    '#required' => TRUE,
  );

  // The private key from the syndication server
  $form['syndication_server_secret_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Syndication Server Secret Key'),
    '#description' => t('Enter the Secret key generated from the syndication server.'),
    '#size' => 40,
    '#maxlength' => 255,
    '#default_value' => !empty($keys['server_secret']) ? $keys['server_secret'] : '',
    '#required' => TRUE,
  );


  $form['save'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
    '#weight' => 50
  );

  $form['#validate'][] = "syndication_client_admin_api_form_validate";
  $form['#submit'][] = "syndication_client_admin_api_form_submit";

  return $form;
}


/**
 * Validate function for the syndication client settings page
 *
 **/

function syndication_client_admin_api_form_validate($f, $fs) {
  $values = $fs['values'];

  // Server URL
  $domain = $values['syndication_server_url'];
  if(substr($domain,0, 4) !== "http") {
    form_set_error('syndication_server_url', 'Please include the full URL to the server. eg: http://example.com');
  }

  // Client Domain Name
  $domain = $values['syndication_client_domain'];
  if(substr($domain,0, 4) !== "http") {
    form_set_error('syndication_client_domain', 'Please include the full URL to the server. eg: http://example.com');
  }
}


/**
 * Submit function for the syndication client settings form
 *
 **/

function syndication_client_admin_api_form_submit($f, $fs) {
  $values = $fs['values'];

  // SERVER URL
  $domain = $values['syndication_server_url'];
  if(substr($domain, 0, -1) == "/") {
    $domain = rtrim($values['syndication_server_url'],'/');
  }

  variable_set('syndication_server_url', $domain);

  $client_domain = trim($values['syndication_client_domain']);
  variable_set('syndication_client_domain', $client_domain);



  // KEYS
  $keys = array(
    'client_public' => $values['syndication_client_public_key'],
    'server_secret' => $values['syndication_server_secret_key'],
    );

  variable_set('syndication_client_keys', $keys);

  drupal_set_message('Syndication Client Configuration Settings Saved Successfully');

}




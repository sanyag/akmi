<?php

function ecard_admin_form($form, &$form_state) {
  $form = array();
  $form['ecard_debug'] = array(
    '#type' => 'radios',
    '#title' => 'Debug Mode',
    '#options' => array(1 => t('On'), 0 => t('Off')),
    '#default_value' => variable_get('ecard_debug', 0),
    '#description' => t('If debug mode is turned on, no emails will be sent by the eCard system.'),
  );
  $form['ecard_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Cron Send Limit'),
    '#default_value' => variable_get('ecard_limit', 50),
    '#description' => t('The number of e-mails to send per cron run.'),
  );
  $form['template'] = array(
    '#type' => 'fieldset',
    '#title' => t('Global Template Options'),
    '#description' => t('Edit the global header and footer that is used for all eCards.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['template']['ecard_global_header'] = array(
    '#title' => t('Header'),
    '#type' => 'textarea',
    '#description' => t('Enter the email header.<br/>Available tokens are [campaign:title] and [template:style].<br/><b>Note: The body tag has to have the ID email-body!</b>'),
    '#default_value' => variable_get('ecard_global_header', ""),
  );
  $form['template']['ecard_global_footer'] = array(
    '#title' => t('Footer'),
    '#type' => 'textarea',
    '#description' => t('Enter the email footer.'),
    '#default_value' => variable_get('ecard_global_footer', ""),
  );

  $form['administration'] = array(
    '#type' => 'fieldset',
    '#title' => t('Email Opt-Out & Dictonary'),
    '#description' => t('Manage the list of email addresses that should not receive eCards and a ist of words and phrases that will trigger a review process.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['administration']['ecard_emails'] = array(
    '#title' => t('Blocked Email Addresses'),
    '#type' => 'textarea',
    '#description' => t('Enter one email address per line.'),
    '#default_value' => variable_get('ecard_emails', ""),
  );
  $form['administration']['ecard_keywords'] = array(
    '#title' => t('Words and Phrases'),
    '#type' => 'textarea',
    '#description' => t('Enter one word/phrase per line.'),
    '#default_value' => variable_get('ecard_keywords', ""),
  );

  $form['third'] = array(
    '#type' => 'fieldset',
    '#title' => t('Third Party Keys'),
    '#description' => t('Manage the third party keys used in the system.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['third']['ecard_ga'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Analytics Tracking Code'),
    '#default_value' => variable_get('ecard_ga', ""),
    '#description' => t('In order to differentiate eCard traffic on Google Analytics, use the mobile GA tracking code in this field. To create this, take the standard tracking code (for example, UA-11111-1) and replace "UA" with "MO" (producing "MO-11111-1").'),
  );
  $form['third']['ecard_cs'] = array(
    '#type' => 'textfield',
    '#title' => t('Cloud Sponge Domain Key'),
    '#default_value' => variable_get('ecard_cs', ""),
  );
  $form['#submit'][] = 'ecard_admin_form_debug_alert_check';
  array_unshift($form['#submit'], 'ecard_admin_form_word_filter_trim');

  return system_settings_form($form);
}

function ecard_admin_form_word_filter_trim($form, &$form_state) {
  $form_state['values']['ecard_keywords'] = rtrim($form_state['values']['ecard_keywords']);
  $form_state['values']['ecard_emails'] = rtrim($form_state['values']['ecard_emails']);
}

function ecard_admin_form_debug_alert_check($form, &$form_state) {
  $warning = 'Debug mode is on; no eCards will be sent.';
  $messages = drupal_get_messages('warning');
  //dsm($messages);
  //dsm($form_state);
  if ($form_state['values']['ecard_debug'] == 0) {
    if (!empty($messages['warning'])) {
      foreach($messages['warning'] as $key => $message) {
        if (strcmp($message, $warning) == 0 ) {
          unset($messages[$key]);
        }
      }
    }
  }
}


function ecard_admin_layout_settings($form, &$form_state, $ct) {
  $form = array();

  $form[$ct->type . '_ecard_template_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use this content type as a eCard Layout.'),
    '#default_value' => variable_get($ct->type . '_ecard_template_enabled', NULL),
  );
  $form[$ct->type . '_ecard_template_css'] = array(
    '#title' => t('CSS'),
    '#type' => 'textarea',
    '#description' => t('Add the CSS code that should be added to eCards that use this layout.'),
    '#default_value' => variable_get($ct->type . '_ecard_template_css', ""),
    '#rows' => 10,
    '#states' => array(
      'visible' => array(
        ':input[name="' . $ct->type . '_ecard_template_enabled"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form[$ct->type . '_ecard_template_html'] = array(
    '#title' => t('HTML'),
    '#type' => 'textarea',
    '#description' => t('Add the HTML code for this layout. Enter the HTML code that is to be placed wthin the < body > tag.<br/>
      <b>Footer Token:</b>: [template:footer] (places the HTML in the Footer HTML field below).
      <b>Layout Tokens</b>: [layout:field_name] or [layout:field_name:0] for multivalue fields.
      <br/><b>Campaign Tokens</b>: [campaign:field_name] or [campaign:field_name:0] for multivalue fields.
      <br/><b>Message Tokens</b>: [message:sender_name], [message:sender_email], [message:receiver_name] and [message:text]'
    ),
    '#default_value' => variable_get($ct->type . '_ecard_template_html', "<body></body>"),
    '#rows' => 20,
    '#states' => array(
      'visible' => array(
        ':input[name="' . $ct->type . '_ecard_template_enabled"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form[$ct->type . '_ecard_template_footer_html'] = array(
    '#title' => t('Footer HTML'),
    '#type' => 'textarea',
    '#description' => t('Add the Footer HTML code for this layout. Enter the HTML code that is to be placed wthin the footer area of the < body > tag.<br/>' .
      //<b>Layout Tokens</b>: [layout:field_name] or [layout:field_name:0] for multivalue fields.
      '<br/><b>Campaign Tokens</b>: [campaign:field_name] or [campaign:field_name:0] for multivalue fields.'
      //<br/><b>Message Tokens</b>: [message:sender_name], [message:sender_email], [message:receiver_name] and [message:text]'
    ),
    '#default_value' => variable_get($ct->type . '_ecard_template_footer_html', ""),
    '#rows' => 20,
    '#states' => array(
      'visible' => array(
        ':input[name="' . $ct->type . '_ecard_template_enabled"]' => array('checked' => TRUE),
      ),
    ),
  );
  return system_settings_form($form);
}

/**
 * First Step
 */
function ecard_admin_create($form, &$form_state, $campaign, $template) {

  $form_state['ecard_template'] = $template;
  $form_state['ecard_campaign'] = $campaign;

  $dates = field_get_items('node', $campaign, 'field_campaign_date');
  if(!empty($dates) && time() >= $dates[0]['value']) {
    drupal_set_message('We\'re sorry, but the campaign \'' . $campaign->title . '\' is closed.', 'warning');
    drupal_goto('node/' . $campaign->nid);
  }

//print '<pre>';print_r($form_state);die();
  if (!empty($form_state['step_num'])) {
    switch ($form_state['step_num']) {
      case '2':
        return ecard_admin_create_recipients($form, $form_state);
        break;

      case '3':
        return ecard_admin_create_confirm($form, $form_state);
        break;
    }
  }
  //dpm($form_state['ecard_campaign']);
  $default_greeting = field_get_items('node', $campaign, 'field_campaign_default_greeting');

  $form = array();

  $form['header'] = array(
    '#markup' => '<h2>' . t('Step 1: Add Your Message') . '</h2>',
  );

  $form['sender_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Your Name'),
    '#required' => TRUE,
    '#default_value' => isset($form_state['values']['sender_name']) ? $form_state['values']['sender_name'] : '',
  );
  $form['sender_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Your Email'),
    '#required' => TRUE,
    '#default_value' => isset($form_state['values']['sender_email']) ? $form_state['values']['sender_email'] : '',
  );


  $form['sender_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Your Message'),
    '#description' => t('Add your personal message or use our default greeting.'),
    '#default_value' => isset($form_state['values']['sender_message']) ? $form_state['values']['sender_message'] :$default_greeting[0]['value'],
    '#required' => TRUE,
  );

  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel'),
    '#limit_validation_errors' => array(),
    '#submit' => array('ecard_admin_cancel'),
    '#attributes' => array('class' => array('btn')),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Next >>'),
    '#submit' => array('ecard_admin_create_next_submit'),
    '#validate' => array('ecard_admin_create_next_validate'),
    '#attributes' => array('class' => array('btn')),
  );

  $link = l(
    t('Preview'),
    'ecard-send/preview/' . $campaign->nid . '/' . $template->nid,
    array(
      'attributes' => array(
        'class' => 'colorbox-load btn',
      ),
      'query' => array(
        'width' => '800',
        'height' => '600',
        'iframe' => 'true'
      )
    )
  );

  $form['preview'] = array(
    '#markup' => $link,
  );

  if (!isset($_COOKIE['ecard_var']) && empty($form_state['step_num'])) {
    global $user;
    $ecard_var = NULL;
    if ($user->uid > 0) {
      $ecard_var = md5($user->name . time());
    } else {
      $ecard_var = md5(time());
    }

    $ret = setcookie('ecard_var', $ecard_var, time()+3600);
  }

  return $form;
}


function ecard_admin_create_next_validate($form, &$form_state) {
  if(!valid_email_address($form_state['values']['sender_email'])){
    form_set_error('sender_email', 'Please enter a valid email address.');
  }
  $check_tags = strip_tags($form_state['values']['sender_message']);
  if (strcmp($form_state['values']['sender_message'], $check_tags) != 0) {
    form_set_error('sender_message', 'No HTML tags are allowed in the message.');
  }
}

function ecard_admin_create_next_submit($form, &$form_state) {
  $form_state['ecard_var'] = $_COOKIE['ecard_var'];
  $form_state['step_values'][1] = $form_state['values'];

  if (!empty($form_state['step_values'][2])) {
    $form_state['values'] = $form_state['step_values'][2];
  }

  $form_state['step_num'] = 2;
  $form_state['rebuild'] = TRUE;
}

/**
 * Second Step
 */
function ecard_admin_create_recipients($form, $form_state) {

  $form['header'] = array(
    '#markup' => '<h2>' . t('Step 2: Add Recipients') . '</h2>',
  );

  if (empty($form_state['rec_count'])) {
    $form_state['rec_count'] = 0;
  }

  $after_contact_js = '
    function(array_of_contacts) {
      var contact_display_string = [],
          textarea = null,
          contact = null,
          returnMe = null,
          email = null,
          strpos = null,
          fname = null,
          lname = null,
          currentValue = null;

      textarea = window.document.getElementById("edit-import");

      if (textarea) {

        for (var i = 0; i < array_of_contacts.length; i++) {
          contact = array_of_contacts[i];
          returnMe = contact.fullName()+" ";

          //  Three cases:
          //  1. No name. get the front of the email address and set as name.
          //  2. First and last names reversed ("comma case"). swap, remove comma.
          //  3. Normal. Do nothing.
          if (!contact.first_name && !contact.last_name) {
            email = contact.selectedEmail();
            fname = email.split("@");
            returnMe = fname[0]+" ";
          } else if ((strpos = returnMe.indexOf(",")) >= 0) {
            lname = returnMe.split(",");
            returnMe = "";
            for (var x = 1; x < lname.length; x++) {
              returnMe += lname[x];
            }
            returnMe += lname[0]+" ";
          }
          var mail_string = "<" + contact.selectedEmail() + ">";
          returnMe += mail_string;
          contact_display_string.push(returnMe);
        }
        textarea.value = contact_display_string.join(", ");
      }
    }
  ';

  $before_launch_js = '
    function() {
      var textarea = window.document.getElementById("edit-import");
      var hidden = window.document.getElementsByName("contacts_hidden");
      if (hidden[0]) {
        hidden[0].value = textarea.value;
      }
    }
  ';

  $before_close_js = '
    function() {
      var tt = window.document.getElementById("edit-import");
      var hidden = window.document.getElementsByName("contacts_hidden");
      if (hidden[0].value.match(/\S/)) {
        tt.value += ", ";
        tt.value += hidden[0].value;
      }
    }
  ';

  $form['contacts_hidden'] = array(
    '#type' => 'hidden',
    '#default_value' => ' ',
  );


  $form['#attached']['library'][] = array('system', 'ui.button');
  $form['#attached']['js'] = array(
    'https://api.cloudsponge.com/address_books.js' => array('type' => 'external'),
    'var csPageOptions = { domain_key:"' . variable_get('ecard_cs', "") . '", textarea_id:"edit-import", beforeLaunch:' . $before_launch_js . ', beforeClosing:' . $before_close_js . ', afterSubmitContacts:' . $after_contact_js . '}' => array('type' => 'inline'),
    '(function ($) { $(document).ready(function(){ $("#ecard-admin-create .form-radios").buttonset(); }); })(jQuery);' => array('type' => 'inline'),
  );


  $form['input_type'] = array(
    '#type' => 'radios',
    '#options' => array(
      'manual' => t('Enter recipients manually'),
      'import' => t('Import recipients from your address book'),
    ),
    '#default_value' => isset($form_state['values']['input_type']) ? $form_state['values']['input_type'] : 'manual',
  );

  $form['import'] = array(
    '#title' => t('Import'),
    '#type' => 'textarea',
    '#default_value' => isset($form_state['values']['import']) ? $form_state['values']['import'] : '',
    '#description' => '<a class="cs_import btn btn-small">Add from Address Book</a> <p>Please use this button to start the import process. After you have imported the contacts from your address book you can add additional contacts in this field. Please separate contacts by using a comma and use the following syntax: John Doe &lt;email@example.com&gt;</p>',
    '#states' => array(
      'visible' => array(
        ':input[name="input_type"]' => array('value' => 'import'),
      ),
    ),
  );

  $form['recipients'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="recipient-container">',
    '#suffix' => '</div>',
    '#collapsible' => FALSE,
    '#tree' => TRUE,
    '#states' => array(
      'visible' => array(
        ':input[name="input_type"]' => array('value' => 'manual'),
      ),
    ),
  );

  for ($i = 0; $i <= $form_state['rec_count']; $i++) {
    $form['recipients']['recipient_' . $i] = array(
      '#type' => 'fieldset',
      // '#title' => t('Recipient #' . ($i+1)),
      '#collapsible' => FALSE,
      '#attributes' => array(
        'class' => array(
          'recipient-row',
          'rounded-box',
        ),
        'id' => array(
          'recipient-id-' . $i,
        ),
      ),
    );

    $form['recipients']['recipient_' . $i]['name'] = array(
      '#type' => 'textfield',
      '#title' => t('Name'),
      '#default_value' => isset($form_state['values']['recipients']['recipient_' . $i]['name']) ? $form_state['values']['recipients']['recipient_' . $i]['name'] : '',
    );
    $form['recipients']['recipient_' . $i]['email'] = array(
      '#type' => 'textfield',
      '#title' => t('Email'),
      '#default_value' => isset($form_state['values']['recipients']['recipient_' . $i]['name']) ? $form_state['values']['recipients']['recipient_' . $i]['email'] : '',
    );
  }


  $form['add_rec'] = array(
    '#type' => 'submit',
    '#value' => t('Add another recipient'),
    '#submit' => array('ecard_admin_add_recipient'),
    '#ajax' => array(
      'callback' => 'ecard_admin_recipient_callback',
      'wrapper' => 'recipient-container',
    ),
    '#prefix' => '<div id="add-recipient-btn">',
    '#suffix' => '</div>',
    '#attributes' => array('class' => array('btn', 'btn-small')),
    '#states' => array(
      'visible' => array(
        ':input[name="input_type"]' => array('value' => 'manual'),
      ),
    ),
  );

  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel'),
    '#limit_validation_errors' => array(),
    '#submit' => array('ecard_admin_cancel'),
    '#attributes' => array('class' => array('btn')),
  );
  $form['back'] = array(
    '#type' => 'submit',
    '#value' => t('<< Back'),
    //'#limit_validation_errors' => array(),
    '#submit' => array('ecard_admin_create_recipients_back'),
    '#attributes' => array('class' => array('btn')),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Next >>'),
    '#submit' => array('ecard_admin_create_recipients_next'),
    '#validate' => array('ecard_admin_create_recipients_validate'),
    '#attributes' => array('class' => array('btn')),
  );

  $link = l(
    t('Preview'),
    'ecard-send/preview/' . $form_state['ecard_campaign']->nid . '/' . $form_state['ecard_template']->nid,
    array(
      'attributes' => array(
        'class' => 'colorbox-load btn',
      ),
      'query' => array(
        'width' => '800',
        'height' => '600',
        'iframe' => 'true'
      )
    )
  );
  $form['preview'] = array(
    '#markup' => $link,
  );

  $form['sender_name'] = array('#type' => 'hidden', '#value' => $form_state['step_values'][1]['sender_name']);
  $form['sender_message'] = array('#type' => 'hidden', '#value' => $form_state['step_values'][1]['sender_message']);
  $form['sender_email'] = array('#type' => 'hidden', '#value' => $form_state['step_values'][1]['sender_email']);
  return $form;
}

function ecard_admin_create_recipients_validate($form, &$form_state) {
  if (!isset($_COOKIE['ecard_var'])) {
    drupal_set_message("You must restart the eCard from step 1", "warning");
    drupal_goto(substr(request_uri(), 1));
  }

//  if ($form_state['values']['input_type'] == 'import') {
    $no_import_recipients = TRUE;
    if (empty($form_state['values']['import'])) {
      //form_set_error('import', 'Please use the \'Add from Address Book\' button to import your contacts.');
    }
    else {
      $err = array();
      $import = explode(',', $form_state['values']['import']);
      foreach ($import as $row) {
        $row = trim($row);
        $parts = explode('<', $row);
        if (count($parts) < 2) {
          $err[] = t('Please correct the syntax for %line. It should be NAME &lt;EMAIL&gt;.', array('%line' => $row));
        }
        else if (count($parts) > 2) {
          $err[] = t('Please seperate recipients with a comma: %line.', array('%line' => $row));
        }
        else {
          if (empty($parts[0])) {
            $err[] = t('Please add a name for this entry: %line.', array('%line' => $row));
          }
          if (empty($parts[1]) || !valid_email_address(trim($parts[1], "<>"))){
            $err[] = t('Please provide a valid email address for this entry: %line.', array('%line' => $row));
          }
        }
      }
      if(!empty($err)){
        form_set_error('import', theme('item_list', array('items' => $err)));
      }
      $no_import_recipients = FALSE;
    }
//  }
//  else {
    $vals = $form_state['values']['recipients'];
    $no_recipients = TRUE;
    while($recipient = current($vals)) {
      if (empty($recipient['name']) && empty($recipient['email'])) {
        unset($form_state['values']['recipients'][key($vals)]);
        next($vals);
        continue;
      }
      if (empty($recipient['name'])) {
        form_set_error('recipients][' . key($vals) . '][name', 'The name of the recipient cannot be empty.');
      }
      if (empty($recipient['email']) || !valid_email_address($recipient['email'])) {
        form_set_error('recipients][' . key($vals) . '][email', 'Please enter a valid email address');
      }
      $no_recipients = FALSE;
      next($vals);
    }
    if ($no_recipients && $no_import_recipients) {
      if ($form_state['values']['input_type'] == 'import') {
        form_set_error('import', 'You must enter at least one recipient.');
      }
      else {
        form_set_error('recipients', 'You must enter at least one recipient.');
      }
    }
//  }
}

function ecard_admin_add_recipient($form, &$form_state) {
  if($form_state['rec_count'] < 49) {
    $form_state['rec_count']++;
  }
  $form_state['rebuild'] = TRUE;
}

function ecard_admin_recipient_callback($form, &$form_state) {
  return $form['recipients'];
}

function ecard_admin_create_recipients_next($form, &$form_state) {
  $form_state['step_values'][2] = $form_state['values'];

  if (!empty($form_state['step_values'][3])) {
    $form_state['values'] = $form_state['step_values'][3];
  }

  $form_state['step_num'] = 3;
  $form_state['rebuild'] = TRUE;
}

function ecard_admin_create_recipients_back($form, &$form_state) {
  $form_state['step_values'][2] = $form_state['values'];
  $form_state['values'] = $form_state['step_values'][1];
  $form_state['step_num'] = 1;
  $form_state['rebuild'] = TRUE;
}

function ecard_admin_recipient_remove_duplicates(&$recipients, $explode_string, $explode2) {
  $import = explode($explode_string, $recipients);

  $rec_array = array();
  foreach ($import as $row) {
    if (!empty($row)) {
      $rec_array[] = explode($explode2, $row);
    }
  }

  $length = count($rec_array);
  while($rec = current($rec_array)) {
    if ($length > 1) {
      for($i = key($rec_array)+1; $i < $length; $i++) {
        if (isset($rec_array[$i][1])) {
          if (strcasecmp($rec[1], $rec_array[$i][1])===0) {
            unset($rec_array[$i]);
          }
        }
      }
    }
    $rec_array[key($rec_array)] = implode($explode2, $rec);
    next($rec_array);
  }
  //dpm($rec_array);
  $recipients = implode($explode_string, $rec_array);
}

/**
 * Third Step
 */
function ecard_admin_create_confirm($form, &$form_state) {

  $form = array();
  $values = $form_state;


  $form['header'] = array(
    '#markup' => '<h2>' . t('Step 3: Confirm eCard') . '</h2>',
  );

  $rec_list = array();
  $rec = array();
  $recipients = '';
  //if ($form_state['step_values'][2]['input_type'] == 'import') {
    $rec_list = explode(',', $form_state['step_values'][2]['import']);
    foreach ($rec_list as $r) {
      if ($r != ''){
        $recipients .= htmlentities(trim($r)) . '<br/>';
      }
    }
  //}
  //else {
    $rec_list = $form_state['step_values'][2]['recipients'];
    foreach($rec_list as $r) {
        $rec[] = $r['name'] . " &lt;" . $r['email'] . "&gt;";
    }
    $recipients .= implode("<br/>", $rec);
    ecard_admin_recipient_remove_duplicates($recipients, '<br/>', '&lt;');
  //}


  $form['to'] = array(
    '#markup' => '<div id="ecard-preview-to"><span class="label">To:</span><br/>' . $recipients . '</div>',
  );
  $form['from'] = array(
    '#markup' => '<div id="ecard-preview-from"><span class="label">From:</span><br/>' . $form_state['step_values'][1]['sender_name'] . " &lt;" . $form_state['step_values'][1]['sender_email'] . "&gt;</div>",
  );

   $form['from_summary'] = array(
    '#markup' => '<div id="ecard-preview-text"><span class="label">Message:</span><br/>' . filter_xss(nl2br($form_state['step_values'][1]['sender_message']), array('br')) . '</div>',
  );


  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel'),
    '#limit_validation_errors' => array(),
    '#submit' => array('ecard_admin_cancel'),
    '#attributes' => array('class' => array('btn')),
  );
  $form['back'] = array(
    '#type' => 'submit',
    '#value' => t('<< Back'),
    '#submit' => array('ecard_admin_create_confirm_back'),
    '#limit_validation_errors' => array(),
    '#attributes' => array('class' => array('btn')),
  );
  $link = l(
    t('Preview'),
    'ecard-send/preview/' . $form_state['ecard_campaign']->nid . '/' . $form_state['ecard_template']->nid,
    array(
      'attributes' => array(
        'class' => 'colorbox-load btn',
      ),
      'query' => array(
        'width' => '800',
        'height' => '600',
        'iframe' => 'true'
      )
    )
  );
  $form['preview'] = array(
    '#markup' => $link,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send eCard'),
    '#submit' => array('ecard_admin_create_confirm_submit'),
    '#attributes' => array('class' => array('btn')),
  );

  $form['sender_name'] = array('#type' => 'hidden', '#value' => $form_state['step_values'][1]['sender_name']);
  $form['sender_message'] = array('#type' => 'hidden', '#value' => $form_state['step_values'][1]['sender_message']);
  $form['sender_email'] = array('#type' => 'hidden', '#value' => $form_state['step_values'][1]['sender_email']);

  return $form;
}

function ecard_admin_create_confirm_back($form, &$form_state) {
  $form_state['values'] = $form_state['step_values'][2];
  $form_state['step_num'] = 2;
  $form_state['rebuild'] = TRUE;
}

function ecard_admin_create_confirm_submit($form, &$form_state) {

  if (!isset($_COOKIE['ecard_var']) || empty($_COOKIE['ecard_var']) || ($_COOKIE['ecard_var'] != $form_state['ecard_var'])) {
    drupal_set_message('using the browser\'s Back button to submit the eCard form is prohibited on this system. Try creating a new eCard.', 'warning');
    drupal_goto('node/' . $form_state['ecard_campaign']->nid);
  }

  $dates = field_get_items('node', $form_state['ecard_campaign'], 'field_campaign_date');
  if(!empty($dates) && time() >= $dates[0]['value']) {
    drupal_set_message('We\'re sorry, but the campaign \'' . $campaign->title . '\' is closed.', 'warning');
    drupal_goto('node/' . $campaign->nid);
  }

  $step_values = $form_state['step_values'];
  $step_values[3] = $form_state['values'];

  $rec_list = array();
  //if ($step_values[2]['input_type'] == 'import') {
    $recipients = explode(',', $step_values[2]['import']);
    foreach($recipients as $r) {
      $rec_list[] = trim($r);
    }
  //}
  //else {
    $recipients = $step_values[2]['recipients'];
    foreach($recipients as $r) {
      $rec_list[] = $r['name'] . ' <' . $r['email'] . '>';
    }
  //}
  $rec_list_string = implode("\r\n", $rec_list);
  //print $rec_list_string;die();
  ecard_admin_recipient_remove_duplicates($rec_list_string, "\r\n", "<");

  $entity = entity_create('submission', array());
  $entity->type = "submission_request";
  $entity->created = time();
  $entity->field_sr_name = array(LANGUAGE_NONE => array(0 => array('value' => $step_values[1]['sender_name'])));
  $entity->field_sr_email = array(LANGUAGE_NONE => array(0 => array('email' => $step_values[1]['sender_email'])));
  $entity->field_sr_body = array(LANGUAGE_NONE => array(0 => array('value' => $step_values[1]['sender_message'], 'format' => 'filtered_html')));
  $entity->field_sr_recipients = array(LANGUAGE_NONE => array(0 => array('value' => $rec_list_string)));
  $entity->field_sr_keep = array(LANGUAGE_NONE => array(0 => array('value' => 0)));
  $entity->field_sr_template = array(LANGUAGE_NONE => array(0 => array('target_id' => $form_state['ecard_template']->nid, 'target_type' => $form_state['ecard_template']->type)));
  $entity->field_sr_campaign = array(LANGUAGE_NONE => array(0 => array('target_id' => $form_state['ecard_campaign']->nid, 'target_type' => $form_state['ecard_campaign']->type)));
  $entity->field_sr_status = array(LANGUAGE_NONE => array(0 => array('value' => 1)));

  $notice = '';
  // Check for bad words in message
  if ($badWords = _ecard_admin_word_filter($step_values[1]['sender_message'])) {
    $notice .= '<p>System: This message has been flagged because the following words/phrases have been detected in the message.</p>' . theme('item_list', array('items' => $badWords));
  }
  // Check for bad words in recipients
  if ($badMail = _ecard_admin_word_filter($rec_list_string)) {
    $notice .= '<p>System: This message has been flagged because the following words/phrases have been detected in the recipient list.</p>' . theme('item_list', array('items' => $badMail));
  }
  // Check for bad words in sender name
  if ($badSendName = _ecard_admin_word_filter($step_values[1]['sender_name'])) {
    $notice .= '<p>System: This message has been flagged because the following words/phrases have been detected in the sender name.</p>' . theme('item_list', array('items' => $badSendName));
  }
  // Check for bad words in sender email
  if ($badSendMail = _ecard_admin_word_filter($step_values[1]['sender_email'])) {
    $notice .= '<p>System: This message has been flagged because the following words/phrases have been detected in the sender email.</p>' . theme('item_list', array('items' => $badSendMail));
  }

  if (!empty($notice)) {
    $entity->field_sr_status = array(LANGUAGE_NONE => array(0 => array('value' => 0)));
    $entity->field_sr_notice = array(LANGUAGE_NONE => array(0 => array('value' => $notice, 'format' => 'filtered_html')));
  }
  $entity->save();
  drupal_set_message('Your eCard has been queued for delivery.');

  if (!empty($notice)) {
    _ecard_admin_report_flagged_submission($notice, $entity->id);
  }

  if (isset($_COOKIE['ecard_var'])) {
    $ck = array('frmh' => $_COOKIE['ecard_var']);
    setcookie('ecard_var', '', time() - 3600);
  }
  $options = array('query' => $ck);
  $url = 'node/' . $form_state['ecard_campaign']->nid;
  drupal_goto($url, $options);
}

function ecard_admin_cancel($form, &$form_state) {
  global $user;
  if (isset($_COOKIE['ecard_var'])) {
    setcookie('ecard_var', '', time() - 3600);
  }
  drupal_goto('node/' . $form_state['ecard_campaign']->nid);
}

/**
 * Send admin message
 */
function _ecard_admin_report_flagged_submission($notice, $entity_id) {
  global $language, $base_url;
  $url = $base_url . '/submission/submission_request/' . $entity_id;
  $queue_url = $base_url . '/admin/content/submission-queue';
  $admin = variable_get('site_mail', '');
  $params = array();
  $params['message'] = $notice;
  $params['message'] .= "<p>Click " . l('here', $url) . " to see the eCard or " . l('here', $queue_url) . " to go to the submission queue.</p>";
  $message = drupal_mail('ecard_admin', 'flagged_message', $admin, $language, $params, $admin);
}

/**
 * Preview callback
 */
function ecard_admin_preview($campaign, $template) {
  // $script = "<script type='text/​javascript'>jQuery(function($) { jQuery('body').addClass('test'); });</script>";
  $structure = variable_get('ecard_global_header', "");
  $structure .= variable_get($template->type . '_ecard_template_html', '');
  $structure .= variable_get('ecard_global_footer', "");

  $css = variable_get($template->type . '_ecard_template_css', '');
  $structure = str_replace('[template:style]', $css, $structure);

  $footer = variable_get($template->type . '_ecard_template_footer_html', '');
  $structure = str_replace('[template:footer]', $footer, $structure);

  $structure = _ecard_admin_token_replace($structure, 'layout', $template);
  $structure = _ecard_admin_token_replace($structure, 'campaign', $campaign);
  $structure = html_entity_decode($structure);

  $script = "<script type='text/javascript'>
    var source = document.getElementById('email-body').innerHTML;
    var message = window.parent.document.getElementsByName('sender_message')[0].value;
    var name = window.parent.document.getElementsByName('sender_name')[0].value;
    var email = window.parent.document.getElementsByName('sender_email')[0].value;

    message = message.replace(/\\n/g, '<br>');
    source = source.replace('[message:receiver_name]', 'NAME');
    source = source.replace('[message:text]', message);
    source = source.replace('[message:sender_name]', name);
    source = source.replace('[message:sender_email]', email);

    document.getElementById('email-body').innerHTML = source;
  </script>";
  print $structure . $script;
}




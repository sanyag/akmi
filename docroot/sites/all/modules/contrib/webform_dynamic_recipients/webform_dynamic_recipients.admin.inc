<?php

/***
 * @file
 * Implements the admin interface for Webform Dynamic Recipients
 */

/**
 * Modify the webform component editor for "selects" components. Add a "dynamic recipients" field.
 */
function webform_dynamic_recipients_edit_form(&$form, &$form_state, $form_id) {

  $nid = $form['nid']['#value'];
  $cid = $form['cid']['#value'];

  // Only interested in "select" fields
  if ('select' === $form['type']['#value']) {

    // Get the existing value for our field, if any
    $existing_dynamic_recipients = db_select('webform_dynamic_recipients', 'r')
      ->fields('r', array('recipients'))
      ->condition('nid', $nid, '=')
      ->condition('cid', $cid, '=')
      ->execute()->fetchAssoc();

    if (count($existing_dynamic_recipients) === 0) {
      $existing_dynamic_recipients = '';
    }
    else {
      $existing_dynamic_recipients = $existing_dynamic_recipients['recipients'];
    }

    // Add our custom field to the edit form
    $insert_position = array_search('items', array_keys($form['extra'])) + 1;
    $new_form_extra = array_slice($form['extra'], 0, $insert_position);
    $new_form_extra['webform_dynamic_recipients'] = array(
      '#title' => t('Dynamic Recipients'),
      '#type' => 'textarea',
      '#description' => t('Key-value pairs MUST be specified as "safe_key|Recipient Email Address". safe_key values correspond to safe_key values above.'),
      '#required' => TRUE,
      '#default_value' => $existing_dynamic_recipients,
    );
    // Wedge our field in after the option list
    $new_form_extra = array_merge($new_form_extra, array_slice($form['extra'], $insert_position));
    $form['extra'] = $new_form_extra;

    // Add a submit handler to store our data
    $form['#submit'][] = 'webform_dynamic_recipients_edit_form_submit';

  }
}

/**
 * Submit handler for the webform component editor. Updates webform_dynamic_recipients table.
 */
function webform_dynamic_recipients_edit_form_submit(&$form, &$form_state) {

  $nid = $form_state['values']['nid'];
  $cid = $form_state['values']['cid'];

  // Update the table of dynamic recipients for each form
  $dynamic_recipients = $form_state['values']['extra']['webform_dynamic_recipients'];
  db_merge('webform_dynamic_recipients')->key(array('nid' => $nid, 'cid' => $cid))->fields(array('nid' => $nid, 'cid' => $cid, 'recipients' => $dynamic_recipients))->execute();

}

/**
 * Adds a description to the Address field on the email form, letting users know what placeholder address to use
 */
function webform_dynamic_recipients_email_form(&$form, &$form_state, $form_id) {

  // Just in case Webform decides to add a description at some later date
  if (!array_key_exists('#description', $form['add']['email_custom'])) {
    $form['add']['email_custom']['#description'] = '';
  }
  else {
    $form['add']['email_custom']['#description'] .= ' ';
  }

  // Get the dynamic recipients for all components on this form
  $nid = $form['#node']->nid;
  $existing_dynamic_recipients = db_select('webform_dynamic_recipients', 'r')->fields('r', array('cid', 'recipients'))->condition('nid', $nid, '=')->execute();

  foreach ($existing_dynamic_recipients as $component) {
    $cid = $component->cid;
    $field_name = $form['#node']->webform['components'][$cid]['form_key'];

    $form['add']['email_custom']['#description'] .= t("To send emails based on the value of @field, use @address.", array('@field' => $field_name, '@address' => "{$field_name}@dynamic.recipient")) . ' ';
  }
}
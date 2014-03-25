<?php
/**
 * @file
 * ak_speech_quotes.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_speech_quotes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech_quote|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech_quote';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'classes' => array(),
  );
  $export['node|speech_quote|default'] = $ds_layout;

  return $export;
}

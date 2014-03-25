<?php
/**
 * @file
 * ak_museum_speech.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_museum_speech_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ak_museum_speech_node_info() {
  $items = array(
    'speech' => array(
      'name' => t('Speech'),
      'base' => 'node_content',
      'description' => t('A speech given at an event; can include a transcript of the speech.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

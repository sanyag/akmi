<?php
/**
 * @file
 * ak_speech_themes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_speech_themes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
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
 * Implements hook_views_api().
 */
function ak_speech_themes_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ak_speech_themes_node_info() {
  $items = array(
    'speech_theme' => array(
      'name' => t('Speech Theme'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

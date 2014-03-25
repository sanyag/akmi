<?php
/**
 * @file
 * ak_catalouge.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_catalouge_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
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
function ak_catalouge_node_info() {
  $items = array(
    'catalouge' => array(
      'name' => t('Catalogue'),
      'base' => 'node_content',
      'description' => t('Describes and links to a catalogue that can be downloaded or viewed online.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

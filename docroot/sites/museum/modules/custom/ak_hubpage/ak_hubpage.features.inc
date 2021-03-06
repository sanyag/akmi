<?php
/**
 * @file
 * ak_hubpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_hubpage_ctools_plugin_api() {
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
 * Implements hook_views_api().
 */
function ak_hubpage_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ak_hubpage_node_info() {
  $items = array(
    'hub_page' => array(
      'name' => t('Hub Page'),
      'base' => 'node_content',
      'description' => t('A generic hub page; solely used within the hierarchy of "Areas of Activity" pages from an Agency or Geography.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hub_page_tile' => array(
      'name' => t('Hub Page Tile'),
      'base' => 'node_content',
      'description' => t('This content type is used to add a tile to a hub page. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

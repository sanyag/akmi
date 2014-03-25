<?php
/**
 * @file
 * ak_hub_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_hub_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
 * Implements hook_views_api().
 */
function ak_hub_page_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ak_hub_page_node_info() {
  $items = array(
    'agency' => array(
      'name' => t('Agency'),
      'base' => 'node_content',
      'description' => t('Hub Page for an AKDN Agency. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'focus_area' => array(
      'name' => t('Thematic Area'),
      'base' => 'node_content',
      'description' => t('A hub page for a Thematic Area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'geography' => array(
      'name' => t('Geography'),
      'base' => 'node_content',
      'description' => t('A hub page for a geographic region or country.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

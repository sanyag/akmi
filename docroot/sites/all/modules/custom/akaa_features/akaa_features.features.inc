<?php
/**
 * @file
 * akaa_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akaa_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
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
function akaa_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function akaa_features_node_info() {
  $items = array(
    'architecture_project' => array(
      'name' => t('Architecture Project'),
      'base' => 'node_content',
      'description' => t('A notable project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'award_cycle' => array(
      'name' => t('Award Cycle'),
      'base' => 'node_content',
      'description' => t('An award cycle for the Aga Khan Award for Architecture.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

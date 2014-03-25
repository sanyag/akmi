<?php
/**
 * @file
 * ak_press_centre.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_press_centre_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ak_press_centre_views_api() {
  return array("version" => "3.0");
}

<?php
/**
 * @file
 * akaa_maps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akaa_maps_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function akaa_maps_views_api() {
  return array("version" => "3.0");
}

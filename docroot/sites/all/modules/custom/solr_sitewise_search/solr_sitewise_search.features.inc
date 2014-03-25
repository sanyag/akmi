<?php
/**
 * @file
 * solr_sitewise_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function solr_sitewise_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function solr_sitewise_search_views_api() {
  return array("version" => "3.0");
}

<?php
/**
 * @file
 * akdn_file_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function akdn_file_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

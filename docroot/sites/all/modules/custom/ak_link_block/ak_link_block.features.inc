<?php
/**
 * @file
 * ak_link_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_link_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "3");
  }
}

<?php
/**
 * @file
 * ak_link_block.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function ak_link_block_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 3;
  $bean_type->name = 'link_block';
  $bean_type->label = 'Link Block';
  $bean_type->options = '';
  $export['link_block'] = $bean_type;

  return $export;
}

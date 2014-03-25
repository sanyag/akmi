<?php
/**
 * @file
 * ak_common.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ak_common_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_only_short';
  $strongarm->value = 'j M Y';
  $export['date_format_date_only_short'] = $strongarm;

  return $export;
}

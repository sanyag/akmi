<?php
/**
 * @file
 * ak_slideshow.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function ak_slideshow_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured_content_image';
  $ds_view_mode->label = 'Featured Content Image';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['featured_content_image'] = $ds_view_mode;

  return $export;
}

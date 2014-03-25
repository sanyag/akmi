<?php
/**
 * @file
 * ak_hubpage.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_hubpage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'body',
      ),
      'left' => array(
        0 => 'field_hub_page_image',
      ),
    ),
    'fields' => array(
      'body' => 'right',
      'field_hub_page_image' => 'left',
    ),
    'classes' => array(),
  );
  $export['node|hub_page|full'] = $ds_layout;

  return $export;
}

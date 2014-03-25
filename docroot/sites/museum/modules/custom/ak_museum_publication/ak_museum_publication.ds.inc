<?php
/**
 * @file
 * ak_museum_publication.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_museum_publication_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'type' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
    ),
  );
  $export['node|publication|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_museum_publication_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'type',
        2 => 'body',
      ),
      'right' => array(
        0 => 'field_image',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'type' => 'left',
      'body' => 'left',
      'field_image' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'ds_width_120px' => 'ds_width_120px',
      ),
      'right' => array(
        'ds_width_65' => 'ds_width_65',
      ),
    ),
  );
  $export['node|publication|search_result'] = $ds_layout;

  return $export;
}

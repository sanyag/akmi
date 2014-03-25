<?php
/**
 * @file
 * ak_event.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_event_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'short_title_as_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'image_colorbox_link',
        1 => 'field_short_title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'image_colorbox_link' => 'ds_content',
      'field_short_title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'image_colorbox_link',
        1 => 'group_body_wrapper',
        2 => 'body',
      ),
      'event_meta' => array(
        0 => 'field_event_date',
        1 => 'group_meta_info',
        2 => 'field_event_location',
        3 => 'field_tags',
      ),
    ),
    'fields' => array(
      'image_colorbox_link' => 'ds_content',
      'group_body_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'field_event_date' => 'event_meta',
      'group_meta_info' => 'event_meta',
      'field_event_location' => 'event_meta',
      'field_tags' => 'event_meta',
    ),
    'classes' => array(),
    'hide_page_title' => '2',
    'page_option_title' => '%node:title_field',
  );
  $export['node|event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_event_image',
      ),
      'right' => array(
        0 => 'short_title_as_link',
        1 => 'field_event_date',
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_event_image' => 'left',
      'short_title_as_link' => 'right',
      'field_event_date' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|event|teaser'] = $ds_layout;

  return $export;
}

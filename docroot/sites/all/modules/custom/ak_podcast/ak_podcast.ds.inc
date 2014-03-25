<?php
/**
 * @file
 * ak_podcast.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_podcast_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|podcast|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'podcast';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'short_title_as_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|podcast|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_podcast_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|podcast|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'podcast';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_podcast_image',
        1 => 'body',
        2 => 'field_podcast_video',
        3 => 'field_podcast_audio',
      ),
    ),
    'fields' => array(
      'field_podcast_image' => 'ds_content',
      'body' => 'ds_content',
      'field_podcast_video' => 'ds_content',
      'field_podcast_audio' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|podcast|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|podcast|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'podcast';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'image_colorbox_link',
        1 => 'body',
      ),
      'media' => array(
        0 => 'field_podcast_video',
        1 => 'field_podcast_audio',
      ),
    ),
    'fields' => array(
      'image_colorbox_link' => 'ds_content',
      'body' => 'ds_content',
      'field_podcast_video' => 'media',
      'field_podcast_audio' => 'media',
    ),
    'classes' => array(),
    'hide_page_title' => '2',
    'page_option_title' => '%node:title_field',
  );
  $export['node|podcast|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|podcast|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'podcast';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_podcast_image',
      ),
      'right' => array(
        0 => 'short_title_as_link',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_podcast_image' => 'left',
      'short_title_as_link' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|podcast|teaser'] = $ds_layout;

  return $export;
}

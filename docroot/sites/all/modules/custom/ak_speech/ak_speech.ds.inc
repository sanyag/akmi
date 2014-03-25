<?php
/**
 * @file
 * ak_speech.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_speech_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|speech|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'speech';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'short_title_as_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|speech|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_speech_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_speech_image',
        1 => 'group_meta_info',
        2 => 'field_publish_date',
        3 => 'body',
        4 => 'field_speech_location',
        5 => 'field_tags',
        6 => 'field_speech_speaker',
      ),
    ),
    'fields' => array(
      'field_speech_image' => 'ds_content',
      'group_meta_info' => 'ds_content',
      'field_publish_date' => 'ds_content',
      'body' => 'ds_content',
      'field_speech_location' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_speech_speaker' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|speech|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'image_colorbox_link',
        1 => 'field_speech_audio',
        2 => 'field_speech_video',
        3 => 'body',
      ),
      'right_sidebar' => array(
        0 => 'group_meta_info',
        1 => 'links',
        2 => 'group_press_releases',
        3 => 'field_speech_speaker',
        4 => 'field_speech_event',
        5 => 'field_speech_location',
        6 => 'field_publish_date',
        7 => 'pdf_link',
      ),
    ),
    'fields' => array(
      'image_colorbox_link' => 'ds_content',
      'field_speech_audio' => 'ds_content',
      'field_speech_video' => 'ds_content',
      'body' => 'ds_content',
      'group_meta_info' => 'right_sidebar',
      'links' => 'right_sidebar',
      'group_press_releases' => 'right_sidebar',
      'field_speech_speaker' => 'right_sidebar',
      'field_speech_event' => 'right_sidebar',
      'field_speech_location' => 'right_sidebar',
      'field_publish_date' => 'right_sidebar',
      'pdf_link' => 'right_sidebar',
    ),
    'classes' => array(),
    'hide_page_title' => '2',
    'page_option_title' => '%node:title_field',
  );
  $export['node|speech|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speech|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speech';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_speech_image',
      ),
      'right' => array(
        0 => 'field_speech_speaker',
        1 => 'short_title_as_link',
        2 => 'field_publish_date',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_speech_image' => 'left',
      'field_speech_speaker' => 'right',
      'short_title_as_link' => 'right',
      'field_publish_date' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|speech|teaser'] = $ds_layout;

  return $export;
}

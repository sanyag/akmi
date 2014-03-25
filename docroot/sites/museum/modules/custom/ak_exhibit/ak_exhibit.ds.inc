<?php
/**
 * @file
 * ak_exhibit.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_exhibit_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibit|featured_exhibit';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibit';
  $ds_fieldsetting->view_mode = 'featured_exhibit';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|exhibit|featured_exhibit'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibit|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibit';
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
  $export['node|exhibit|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|exhibit|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'exhibit';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|exhibit|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_exhibit_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibit|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibit';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'body',
        1 => 'field_exhibit_location',
        2 => 'field_exhibit_dates',
        3 => 'field_exhibit_prior',
      ),
      'footer' => array(
        0 => 'field_tags',
      ),
    ),
    'fields' => array(
      'body' => 'right',
      'field_exhibit_location' => 'right',
      'field_exhibit_dates' => 'right',
      'field_exhibit_prior' => 'right',
      'field_tags' => 'footer',
    ),
    'classes' => array(
      'left' => array(
        'ds_width_auto' => 'ds_width_auto',
        'ds_padding_right' => 'ds_padding_right',
      ),
      'right' => array(
        'ds_float_none' => 'ds_float_none',
      ),
    ),
  );
  $export['node|exhibit|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibit|featured_exhibit';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibit';
  $ds_layout->view_mode = 'featured_exhibit';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'field_exhibit_dates',
        2 => 'field_exhibit_location',
        3 => 'body',
      ),
      'left' => array(
        0 => 'field_exhibit_img',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_exhibit_img' => 'left',
      'field_exhibit_dates' => 'right',
      'field_exhibit_location' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'ds_width_auto' => 'ds_width_auto',
        'ds_padding_right' => 'ds_padding_right',
      ),
      'right' => array(
        '' => '',
        'ds_float_none' => 'ds_float_none',
      ),
    ),
  );
  $export['node|exhibit|featured_exhibit'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibit|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibit';
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
  $export['node|exhibit|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|exhibit|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'exhibit';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_exhibit_img',
      ),
      'right' => array(
        0 => 'title',
        1 => 'field_exhibit_dates',
        2 => 'field_exhibit_location',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_exhibit_img' => 'left',
      'title' => 'right',
      'field_exhibit_dates' => 'right',
      'field_exhibit_location' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'ds_width_auto' => 'ds_width_auto',
        'ds_padding_right' => 'ds_padding_right',
      ),
      'right' => array(
        '' => '',
        'ds_float_none' => 'ds_float_none',
      ),
    ),
  );
  $export['node|exhibit|teaser'] = $ds_layout;

  return $export;
}

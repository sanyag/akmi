<?php
/**
 * @file
 * ak_artefact.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_artefact_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|artefact|artefact_search';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'artefact';
  $ds_fieldsetting->view_mode = 'artefact_search';
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
  );
  $export['node|artefact|artefact_search'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|artefact|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'artefact';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'solr_related_items' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|artefact|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|artefact|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'artefact';
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
  $export['node|artefact|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_artefact_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|artefact|artefact_search';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'artefact';
  $ds_layout->view_mode = 'artefact_search';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_attribution',
        2 => 'field_classification',
        3 => 'field_region',
        4 => 'field_date',
      ),
      'right' => array(
        0 => 'field_artefact_images',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_attribution' => 'left',
      'field_classification' => 'left',
      'field_region' => 'left',
      'field_date' => 'left',
      'field_artefact_images' => 'right',
    ),
    'limit' => array(
      'field_artefact_images' => '1',
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
  $export['node|artefact|artefact_search'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|artefact|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'artefact';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'footer' => array(
        0 => 'body',
        1 => 'solr_related_items',
      ),
      'left' => array(
        0 => 'field_artefact_images',
      ),
      'right' => array(
        0 => 'field_classification',
        1 => 'field_region',
        2 => 'field_date',
        3 => 'field_dynasty',
        4 => 'field_artefact_culture',
        5 => 'field_artefact_materials',
        6 => 'field_artefact_dimensions',
        7 => 'field_artefact_accession',
      ),
    ),
    'fields' => array(
      'body' => 'footer',
      'field_artefact_images' => 'left',
      'field_classification' => 'right',
      'field_region' => 'right',
      'field_date' => 'right',
      'field_dynasty' => 'right',
      'field_artefact_culture' => 'right',
      'field_artefact_materials' => 'right',
      'field_artefact_dimensions' => 'right',
      'field_artefact_accession' => 'right',
      'solr_related_items' => 'footer',
    ),
    'classes' => array(
      'left' => array(
        'ds_width_auto' => 'ds_width_auto',
      ),
      'right' => array(
        'ds_width_auto' => 'ds_width_auto',
        'ds_float_none' => 'ds_float_none',
      ),
    ),
  );
  $export['node|artefact|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|artefact|featured_artefact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'artefact';
  $ds_layout->view_mode = 'featured_artefact';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_artefact_images',
        1 => 'body',
        2 => 'title_field',
      ),
    ),
    'fields' => array(
      'field_artefact_images' => 'ds_content',
      'body' => 'ds_content',
      'title_field' => 'ds_content',
    ),
    'limit' => array(
      'field_artefact_images' => '1',
    ),
    'classes' => array(),
  );
  $export['node|artefact|featured_artefact'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|artefact|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'artefact';
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
        0 => 'field_artefact_images',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'type' => 'left',
      'body' => 'left',
      'field_artefact_images' => 'right',
    ),
    'limit' => array(
      'field_artefact_images' => '1',
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
  $export['node|artefact|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|did_you_know|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'did_you_know';
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
  $export['node|did_you_know|search_result'] = $ds_layout;

  return $export;
}

<?php
/**
 * @file
 * ak_collections.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_collections_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|artefact|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'artefact';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'all_images' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:8:"colorbox";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:6:{s:19:"colorbox_node_style";s:18:"featured_thumbnail";s:20:"colorbox_image_style";s:0:"";s:16:"colorbox_gallery";s:4:"post";s:23:"colorbox_gallery_custom";s:0:"";s:16:"colorbox_caption";s:4:"auto";s:23:"colorbox_caption_custom";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:1;s:19:"override_title_text";s:5:"Views";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:26:"node:field_artefact_images";}',
        'load_terms' => 0,
      ),
    ),
    'learn_more_links' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"link_default";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:1;s:19:"override_title_text";s:10:"Learn More";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:field_related_links";}',
        'load_terms' => 0,
      ),
    ),
    'main_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:8:"colorbox";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:6:{s:19:"colorbox_node_style";s:16:"collection_large";s:20:"colorbox_image_style";s:0:"";s:16:"colorbox_gallery";s:4:"post";s:23:"colorbox_gallery_custom";s:0:"";s:16:"colorbox_caption";s:4:"auto";s:23:"colorbox_caption_custom";s:0:"";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:26:"node:field_artefact_images";}',
        'load_terms' => 0,
      ),
    ),
    'page_title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|artefact|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ak_collections_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'all_images';
  $ds_field->label = 'All Artefact Images';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['all_images'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'learn_more_links';
  $ds_field->label = 'Learn More Links';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['learn_more_links'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'main_image';
  $ds_field->label = 'Main Artefact Image';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['main_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'page_title';
  $ds_field->label = 'Page Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2><?php print drupal_get_title(); ?></h2>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['page_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_collections_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|artefact|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'artefact';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 1,
    'regions' => array(
      'left' => array(
        0 => 'main_image',
        1 => 'all_images',
        2 => 'learn_more_links',
      ),
      'right' => array(
        0 => 'page_title',
        1 => 'field_attribution',
        2 => 'field_region',
        3 => 'field_date',
        4 => 'field_artefact_materials',
        5 => 'field_artefact_dimensions',
        6 => 'field_artefact_accession',
        7 => 'body',
      ),
    ),
    'fields' => array(
      'main_image' => 'left',
      'all_images' => 'left',
      'learn_more_links' => 'left',
      'page_title' => 'right',
      'field_attribution' => 'right',
      'field_region' => 'right',
      'field_date' => 'right',
      'field_artefact_materials' => 'right',
      'field_artefact_dimensions' => 'right',
      'field_artefact_accession' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|artefact|full'] = $ds_layout;

  return $export;
}

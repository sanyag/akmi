<?php
/**
 * @file
 * ak_publication.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_publication_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
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
  $export['node|publication|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ak_publication_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'file_display';
  $ds_field->label = 'File display';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
$entity_array = $entity->field_publication_file;
if (!empty($entity_array)) {
  foreach ($entity_array as $lang => $this_entity) {
    break;
  }
  if (!empty($entity_array[$lang])) {
    $file_array = array_pop($entity_array[$lang]);
  } elseif (!empty($entity_array[\'und\'])) {
    $file_array = array_pop($entity_array[\'und\']);
  }
}
print \'<span class="file">\'.l(\'Download\',file_create_url($file_array[\'uri\'])).\'</span>\';
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['file_display'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_publication_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_publication_image',
        1 => 'group_meta_info',
        2 => 'field_publication_isbn',
        3 => 'field_publish_date',
        4 => 'field_publication_file',
        5 => 'field_tags',
        6 => 'field_country',
        7 => 'field_agency',
        8 => 'field_focus_area',
        9 => 'body',
      ),
    ),
    'fields' => array(
      'field_publication_image' => 'ds_content',
      'group_meta_info' => 'ds_content',
      'field_publication_isbn' => 'ds_content',
      'field_publish_date' => 'ds_content',
      'field_publication_file' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_country' => 'ds_content',
      'field_agency' => 'ds_content',
      'field_focus_area' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|publication|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'classes' => array(),
    'hide_page_title' => '2',
    'page_option_title' => '%node:title_field',
  );
  $export['node|publication|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_publication_image',
      ),
      'right' => array(
        0 => 'short_title_as_link',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_publication_image' => 'left',
      'short_title_as_link' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|publication|teaser'] = $ds_layout;

  return $export;
}

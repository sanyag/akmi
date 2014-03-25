<?php
/**
 * @file
 * akdn_file_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function akdn_file_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_details|file|image|form';
  $field_group->group_name = 'group_image_details';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_image';
  $field_group->data = array(
    'label' => 'Image Details',
    'weight' => '17',
    'children' => array(
      0 => 'field_image_caption',
      1 => 'field_image_copytight',
      2 => 'filename',
      3 => 'preview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-image-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image_details|file|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|file|image|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'group_image_details',
      1 => 'group_image_categories',
      2 => 'group_details_non_display',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-image field-group-tabs',
      ),
    ),
  );
  $export['group_image|file|image|form'] = $field_group;

  return $export;
}

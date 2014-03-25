<?php
/**
 * @file
 * ak_catalouge.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_catalouge_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catalogue_files_group|node|catalouge|form';
  $field_group->group_name = 'group_catalogue_files_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'catalouge';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catalogue File',
    'weight' => '5',
    'children' => array(
      0 => 'field_catalogue_files',
      1 => 'field_catalogue_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Catalogue File',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_catalogue_files_group|node|catalouge|form'] = $field_group;

  return $export;
}

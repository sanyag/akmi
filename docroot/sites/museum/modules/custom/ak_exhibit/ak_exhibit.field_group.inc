<?php
/**
 * @file
 * ak_exhibit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_exhibit_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibit_cat_group|node|exhibit|form';
  $field_group->group_name = 'group_exhibit_cat_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exhibition Categories',
    'weight' => '11',
    'children' => array(
      0 => 'field_exhibit_type',
      1 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exhibit_cat_group|node|exhibit|form'] = $field_group;

  return $export;
}

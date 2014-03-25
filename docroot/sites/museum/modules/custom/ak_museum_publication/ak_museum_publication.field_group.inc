<?php
/**
 * @file
 * ak_museum_publication.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_museum_publication_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|publication|default';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_publication_file',
      1 => 'field_publication_isbn',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Information',
      'instance_settings' => array(
        'classes' => 'box-lightbrown',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_info|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|publication|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_publication_isbn',
      1 => 'field_publication_purchase_link',
      2 => 'field_tags',
      3 => 'field_publish_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Info',
      'instance_settings' => array(
        'classes' => 'box-lightbrown',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_info|node|publication|full'] = $field_group;

  return $export;
}

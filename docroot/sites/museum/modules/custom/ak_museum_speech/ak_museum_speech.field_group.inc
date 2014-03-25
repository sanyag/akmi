<?php
/**
 * @file
 * ak_museum_speech.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_museum_speech_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|speech|default';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_speech_speaker',
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
  $export['group_meta_info|node|speech|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|speech|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta information',
    'weight' => '3',
    'children' => array(
      0 => 'field_speech_location',
      1 => 'field_tags',
      2 => 'field_country',
      3 => 'field_agency',
      4 => 'field_focus_area',
      5 => 'field_publish_date',
      6 => 'field_speech_speaker',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta information',
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
  $export['group_meta_info|node|speech|full'] = $field_group;

  return $export;
}

<?php
/**
 * @file
 * ak_speech_quotes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_speech_quotes_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_item|node|speech_quote|form';
  $field_group->group_name = 'group_banner_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech_quote';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech_quote';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '11',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_create_featured_content',
      2 => 'field_feature_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-banner-item field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_banner_item|node|speech_quote|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|speech_quote|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech_quote';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech_quote';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_speech_themes',
      2 => 'title_field',
      3 => 'field_speech_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_info|node|speech_quote|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speech_quote|node|speech_quote|form';
  $field_group->group_name = 'group_speech_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech_quote';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speech Quote',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic_info',
      1 => 'group_banner_item',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-speech-quote field-group-tabs',
      ),
    ),
  );
  $export['group_speech_quote|node|speech_quote|form'] = $field_group;

  return $export;
}

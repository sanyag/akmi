<?php
/**
 * @file
 * ak_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_quote|node|article|form';
  $field_group->group_name = 'group_sidebar_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar Quote',
    'weight' => '8',
    'children' => array(
      0 => 'field_quote_body',
      1 => 'field_quote_speaker',
      2 => 'field_quote_speaker_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebar_quote|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_quote|node|video_article|form';
  $field_group->group_name = 'group_sidebar_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar Quote',
    'weight' => '8',
    'children' => array(
      0 => 'field_quote_body',
      1 => 'field_quote_speaker',
      2 => 'field_quote_speaker_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebar_quote|node|video_article|form'] = $field_group;

  return $export;
}

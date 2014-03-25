<?php
/**
 * @file
 * ak_featured_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_featured_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_item_details|node|featured_content|form';
  $field_group->group_name = 'group_banner_item_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'featured_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_banner_item';
  $field_group->data = array(
    'label' => 'Banner Item Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_feature_image',
      1 => 'field_feature_link',
      2 => 'field_caption',
      3 => 'title_field',
      4 => 'field_short_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-banner-item-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_banner_item_details|node|featured_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_item|node|featured_content|form';
  $field_group->group_name = 'group_banner_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'featured_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '10',
    'children' => array(
      0 => 'group_categories',
      1 => 'group_banner_item_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-banner-item field-group-tabs',
      ),
    ),
  );
  $export['group_banner_item|node|featured_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|featured_content|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'featured_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_banner_item';
  $field_group->data = array(
    'label' => 'Banner Item Categories',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_focus_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_categories|node|featured_content|form'] = $field_group;

  return $export;
}

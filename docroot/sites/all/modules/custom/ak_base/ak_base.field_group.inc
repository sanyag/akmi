<?php
/**
 * @file
 * ak_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_base_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hub_page_categories|node|hub_page|form';
  $field_group->group_name = 'group_hub_page_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hub_page';
  $field_group->data = array(
    'label' => 'Hub Page Categories',
    'weight' => '9',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_agency_geography',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-hub-page-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hub_page_categories|node|hub_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hub_page_details|node|hub_page|form';
  $field_group->group_name = 'group_hub_page_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hub_page';
  $field_group->data = array(
    'label' => 'Hub Page Details',
    'weight' => '8',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_short_title',
      3 => 'field_hub_page_image',
      4 => 'field_about_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-hub-page-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hub_page_details|node|hub_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hub_page|node|hub_page|form';
  $field_group->group_name = 'group_hub_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hub Page',
    'weight' => '10',
    'children' => array(
      0 => 'group_hub_page_details',
      1 => 'group_hub_page_categories',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-hub-page field-group-tabs',
      ),
    ),
  );
  $export['group_hub_page|node|hub_page|form'] = $field_group;

  return $export;
}

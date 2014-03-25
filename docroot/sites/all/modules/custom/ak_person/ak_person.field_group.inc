<?php
/**
 * @file
 * ak_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_person_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|person|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_focus_area',
      3 => 'field_related_project',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Info',
      'instance_settings' => array(
        'classes' => 'box-lightbrown group-meta-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_info|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_categories|node|person|form';
  $field_group->group_name = 'group_person_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person';
  $field_group->data = array(
    'label' => 'Person Categories',
    'weight' => '15',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_enable_project_slider',
      5 => 'field_person_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-person-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_categories|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_details|node|person|form';
  $field_group->group_name = 'group_person_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person';
  $field_group->data = array(
    'label' => 'Person details',
    'weight' => '14',
    'children' => array(
      0 => 'body',
      1 => 'field_person_image',
      2 => 'title_field',
      3 => 'field_related_project',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-person-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_details|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person|node|person|form';
  $field_group->group_name = 'group_person';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person',
    'weight' => '1',
    'children' => array(
      0 => 'group_person_categories',
      1 => 'group_person_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-person field-group-tabs',
      ),
    ),
  );
  $export['group_person|node|person|form'] = $field_group;

  return $export;
}

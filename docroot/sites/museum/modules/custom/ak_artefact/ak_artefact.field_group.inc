<?php
/**
 * @file
 * ak_artefact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_artefact_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artefact_details_group|node|artefact|form';
  $field_group->group_name = 'group_artefact_details_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artefact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Artefact Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_artefact_materials',
      1 => 'field_artefact_accession',
      2 => 'field_artefact_culture',
      3 => 'field_artefact_owners',
      4 => 'field_artefact_dimensions',
      5 => 'field_attribution',
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
  $export['group_artefact_details_group|node|artefact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|artefact|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artefact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Artefact Categories',
    'weight' => '5',
    'children' => array(
      0 => 'field_region',
      1 => 'field_dynasty',
      2 => 'field_date',
      3 => 'field_classification',
      4 => 'field_place_of_origin',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Artefact Categories',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_categories|node|artefact|form'] = $field_group;

  return $export;
}

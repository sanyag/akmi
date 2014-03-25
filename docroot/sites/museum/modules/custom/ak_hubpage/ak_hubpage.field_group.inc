<?php
/**
 * @file
 * ak_hubpage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_hubpage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_future_functionality|node|hub_page|form';
  $field_group->group_name = 'group_future_functionality';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Future Functionality',
    'weight' => '7',
    'children' => array(
      0 => 'field_hub_page_links',
      1 => 'field_parent_category',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Future Functionality',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_future_functionality|node|hub_page|form'] = $field_group;

  return $export;
}

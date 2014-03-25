<?php
/**
 * @file
 * akaa_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function akaa_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_architecture_details|node|architecture_project|form';
  $field_group->group_name = 'group_architecture_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Architecture Details',
    'weight' => '35',
    'children' => array(
      0 => 'field_architect',
      1 => 'field_building_type',
      2 => 'field_ceremony_location',
      3 => 'field_client',
      4 => 'field_completed_date',
      5 => 'field_completed_date_timestamp',
      6 => 'field_cycle_year',
      7 => 'field_design_date',
      8 => 'field_geocode_lat_long',
      9 => 'field_planner',
      10 => 'field_podcast_video',
      11 => 'field_press_kit',
      12 => 'field_project_image',
      13 => 'field_size',
      14 => 'field_winner',
      15 => 'field_zipped_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-architecture-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_architecture_details|node|architecture_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cycle_details|node|award_cycle|form';
  $field_group->group_name = 'group_cycle_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award_cycle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cycle';
  $field_group->data = array(
    'label' => 'Cycle Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_award_year',
      1 => 'field_short_title',
      2 => 'title_field',
      3 => 'field_master_jury',
      4 => 'field_steering_committee',
      5 => 'field_about_page',
      6 => 'field_eligibility_criteria',
      7 => 'field_award_ceremony',
      8 => 'field_chairman_s_award',
      9 => 'field_news',
      10 => 'field_press_materials',
      11 => 'field_award_recipients',
      12 => 'field_calendar',
      13 => 'field_submission_procedure',
      14 => 'field_review_selection_procedure',
      15 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-cycle-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cycle_details|node|award_cycle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cycle|node|award_cycle|form';
  $field_group->group_name = 'group_cycle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award_cycle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cycle',
    'weight' => '3',
    'children' => array(
      0 => 'group_cycle_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-cycle field-group-tabs',
      ),
    ),
  );
  $export['group_cycle|node|award_cycle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|architecture_project|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '37',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_pages_to_exclude',
      2 => 'field_create_featured_content',
      3 => 'field_feature_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-featured-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_content|node|architecture_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|architecture_project|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Architecture Location',
    'weight' => '36',
    'children' => array(
      0 => 'field_arch_country',
      1 => 'field_city',
      2 => 'field_region',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|node|architecture_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|award_cycle|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award_cycle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '16',
    'children' => array(
      0 => 'field_featured_content_area',
      1 => 'field_featured_content_nodes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|award_cycle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|architecture_project|form';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Project Details',
    'weight' => '34',
    'children' => array(
      0 => 'body',
      1 => 'field_short_title',
      2 => 'field_tags',
      3 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-project-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_details|node|architecture_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|architecture_project|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'architecture_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '0',
    'children' => array(
      0 => 'group_architecture_details',
      1 => 'group_featured_content',
      2 => 'group_location',
      3 => 'group_project_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-project field-group-tabs',
      ),
    ),
  );
  $export['group_project|node|architecture_project|form'] = $field_group;

  return $export;
}

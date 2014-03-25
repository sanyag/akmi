<?php
/**
 * @file
 * ak_hub_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_hub_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_deprecated|node|agency|form';
  $field_group->group_name = 'group_agency_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '25',
    'children' => array(
      0 => 'field_agency_image',
      1 => 'field_tags',
      2 => 'field_agency_about',
      3 => 'field_sub_title',
      4 => 'field_summary',
      5 => 'field_brochure_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-deprecated field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_agency_deprecated|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_details|node|agency|form';
  $field_group->group_name = 'group_agency_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Agency Details',
    'weight' => '21',
    'children' => array(
      0 => 'field_agency_acronym',
      1 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_agency_details|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_footer|node|agency|form';
  $field_group->group_name = 'group_agency_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '24',
    'children' => array(
      0 => 'field_3rd_party_rss',
      1 => 'field_enable_project_slider',
      2 => 'field_footer_video',
      3 => 'field_turn_on_secondary_footer',
      4 => 'field_brochure_embed_code',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-footer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_agency_footer|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_media|node|agency|form';
  $field_group->group_name = 'group_agency_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '23',
    'children' => array(
      0 => 'field_agency_logo',
      1 => 'field_featured_content_area',
      2 => 'field_featured_content_nodes',
      3 => 'field_agency_logo_with_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_agency_media|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency_text|node|agency|form';
  $field_group->group_name = 'group_agency_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_agency';
  $field_group->data = array(
    'label' => 'Agency Text',
    'weight' => '22',
    'children' => array(
      0 => 'body',
      1 => 'field_about_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-agency-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_agency_text|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agency|node|agency|form';
  $field_group->group_name = 'group_agency';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Agency',
    'weight' => '5',
    'children' => array(
      0 => 'group_agency_details',
      1 => 'group_agency_media',
      2 => 'group_agency_text',
      3 => 'group_agency_deprecated',
      4 => 'group_agency_footer',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-agency field-group-tabs',
      ),
    ),
  );
  $export['group_agency|node|agency|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|focus_area|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '22',
    'children' => array(
      0 => 'field_hub_page_project',
      1 => 'field_tags',
      2 => 'field_hub_page_about',
      3 => 'field_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-deprecated field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_deprecated|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|geography|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '22',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_hub_page_about',
      2 => 'field_hub_page_project',
      3 => 'field_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-deprecated field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_deprecated|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_area_details|node|focus_area|form';
  $field_group->group_name = 'group_focus_area_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Focus Area Details',
    'weight' => '18',
    'children' => array(
      0 => 'title_field',
      1 => 'field_sub_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-focus-area-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_focus_area_details|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_area_project_listing|node|focus_area|form';
  $field_group->group_name = 'group_focus_area_project_listing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Project Listing',
    'weight' => '19',
    'children' => array(
      0 => 'field_project_listing_area',
      1 => 'field_project_listing_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-focus-area-project-listing field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_focus_area_project_listing|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_area_text|node|focus_area|form';
  $field_group->group_name = 'group_focus_area_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Focus Area Text',
    'weight' => '20',
    'children' => array(
      0 => 'body',
      1 => 'field_about_page',
      2 => 'field_use_focus_area_body_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-focus-area-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_focus_area_text|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_area|node|focus_area|form';
  $field_group->group_name = 'group_focus_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus Area',
    'weight' => '1',
    'children' => array(
      0 => 'group_deprecated',
      1 => 'group_focus_area_details',
      2 => 'group_focus_area_project_listing',
      3 => 'group_focus_area_text',
      4 => 'group_media',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-focus-area field-group-tabs',
      ),
    ),
  );
  $export['group_focus_area|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|geography|form';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '21',
    'children' => array(
      0 => 'field_enable_project_slider',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-footer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_footer|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geog_text|node|geography|form';
  $field_group->group_name = 'group_geog_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Geography Text',
    'weight' => '19',
    'children' => array(
      0 => 'body',
      1 => 'field_about_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-geog-text field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_geog_text|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geography_details|node|geography|form';
  $field_group->group_name = 'group_geography_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Geography Details',
    'weight' => '18',
    'children' => array(
      0 => 'field_hub_page_image',
      1 => 'title_field',
      2 => 'field_sub_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-geography-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_geography_details|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geography|node|geography|form';
  $field_group->group_name = 'group_geography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Geography',
    'weight' => '9',
    'children' => array(
      0 => 'group_deprecated',
      1 => 'group_footer',
      2 => 'group_geog_text',
      3 => 'group_geography_details',
      4 => 'group_media',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-geography field-group-tabs',
      ),
    ),
  );
  $export['group_geography|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|focus_area|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_area';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_focus_area';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '21',
    'children' => array(
      0 => 'field_hub_page_image',
      1 => 'field_featured_content_area',
      2 => 'field_featured_content_nodes',
      3 => 'field_enable_project_slider',
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
  $export['group_media|node|focus_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|geography|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'geography';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_geography';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '20',
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
  $export['group_media|node|geography|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|agency|teaser';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agency';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title ',
    'weight' => '11',
    'children' => array(
      0 => 'field_agency_acronym',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title ',
      'instance_settings' => array(
        'classes' => ' group-title field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_title|node|agency|teaser'] = $field_group;

  return $export;
}

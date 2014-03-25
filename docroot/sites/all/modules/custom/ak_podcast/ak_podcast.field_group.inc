<?php
/**
 * @file
 * ak_podcast.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_podcast_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|podcast|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '25',
    'children' => array(
      0 => 'field_caption',
      1 => 'field_feature_image',
      2 => 'field_create_featured_content',
      3 => 'field_pages_to_exclude',
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
  $export['group_featured_content|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|podcast|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '22',
    'children' => array(
      0 => 'field_podcast_type',
      1 => 'field_podcast_image',
      2 => 'field_podcast_video',
      3 => 'field_podcast_audio',
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
  $export['group_media|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_information|node|podcast|full';
  $field_group->group_name = 'group_meta_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '39',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_publish_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Information',
      'instance_settings' => array(
        'classes' => 'box-lightbrown group-meta-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta_information|node|podcast|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|podcast|default';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_podcast_type',
      1 => 'field_tags',
      2 => 'field_country',
      3 => 'field_agency',
      4 => 'field_focus_area',
      5 => 'field_publish_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta Information',
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
  $export['group_meta_info|node|podcast|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast_categories|node|podcast|form';
  $field_group->group_name = 'group_podcast_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Podcast Categories',
    'weight' => '24',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_agency',
      3 => 'field_focus_area',
      4 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-podcast-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_podcast_categories|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast_details|node|podcast|form';
  $field_group->group_name = 'group_podcast_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Podcast Details',
    'weight' => '21',
    'children' => array(
      0 => 'body',
      1 => 'field_publish_date',
      2 => 'title_field',
      3 => 'field_short_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-podcast-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_podcast_details|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast|node|podcast|form';
  $field_group->group_name = 'group_podcast';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Podcast',
    'weight' => '15',
    'children' => array(
      0 => 'group_featured_content',
      1 => 'group_media',
      2 => 'group_podcast_categories',
      3 => 'group_podcast_details',
      4 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-podcast field-group-tabs',
      ),
    ),
  );
  $export['group_podcast|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|podcast|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_podcast';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '23',
    'children' => array(
      0 => 'field_related_project',
      1 => 'field_enable_project_slider',
      2 => 'field_events_reference',
      3 => 'field_photos_reference',
      4 => 'field_podcast_links',
      5 => 'field_podcasts_reference',
      6 => 'field_speeches_reference',
      7 => 'field_press_reference',
      8 => 'field_related_in_the_media',
      9 => 'field_related_news',
      10 => 'field_related_publications',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|podcast|form'] = $field_group;

  return $export;
}

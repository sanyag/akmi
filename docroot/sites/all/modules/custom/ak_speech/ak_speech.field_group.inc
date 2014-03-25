<?php
/**
 * @file
 * ak_speech.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_speech_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|speech|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '8',
    'children' => array(
      0 => 'field_external_media',
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
  $export['group_deprecated|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_pub|node|speech|form';
  $field_group->group_name = 'group_details_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '3',
    'children' => array(
      0 => 'field_speech_author',
      1 => 'field_publication_date',
      2 => 'field_publication_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-details-pub field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_details_pub|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_speech|node|speech|form';
  $field_group->group_name = 'group_details_speech';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Speech Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_speech_location',
      1 => 'field_publish_date',
      2 => 'field_speech_themes',
      3 => 'field_speech_type',
      4 => 'field_speech_event',
      5 => 'field_speech_speaker',
      6 => 'field_press_releases',
      7 => 'field_date_decade',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-details-speech field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details_speech|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|speech|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '7',
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
  $export['group_featured_content|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|speech|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '4',
    'children' => array(
      0 => 'field_speech_image',
      1 => 'field_speech_audio',
      2 => 'field_speech_video',
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
  $export['group_media|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|speech|default';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_speech_location',
      1 => 'field_tags',
      2 => 'field_publish_date',
      3 => 'field_speech_speaker',
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
  $export['group_meta_info|node|speech|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|speech|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta information',
    'weight' => '6',
    'children' => array(
      0 => 'field_speech_location',
      1 => 'field_publish_date',
      2 => 'field_speech_event',
      3 => 'field_speech_speaker',
      4 => 'pdf_link',
      5 => 'links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta information',
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
  $export['group_meta_info|node|speech|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_press_releases|node|speech|full';
  $field_group->group_name = 'group_press_releases';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Press Releases',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Press Releases',
      'instance_settings' => array(
        'classes' => ' group-press-releases field-group-div',
        'description' => '<div class="clearfix"></div>
<h2 class="block-title">Press Releases</h2>',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_press_releases|node|speech|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|speech|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_project',
      1 => 'field_enable_project_slider',
      2 => 'field_speech_links',
      3 => 'field_speeches_reference',
      4 => 'field_press_reference',
      5 => 'field_events_reference',
      6 => 'field_podcasts_reference',
      7 => 'field_photos_reference',
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
  $export['group_related_content|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speech_basic_info|node|speech|form';
  $field_group->group_name = 'group_speech_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Speech Basic Info',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_short_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-speech-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_speech_basic_info|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speech_categories|node|speech|form';
  $field_group->group_name = 'group_speech_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_speech';
  $field_group->data = array(
    'label' => 'Speech Categories',
    'weight' => '5',
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
        'classes' => ' group-speech-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_speech_categories|node|speech|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speech|node|speech|form';
  $field_group->group_name = 'group_speech';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speech';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speech',
    'weight' => '9',
    'children' => array(
      0 => 'group_deprecated',
      1 => 'group_details_pub',
      2 => 'group_details_speech',
      3 => 'group_featured_content',
      4 => 'group_media',
      5 => 'group_related_content',
      6 => 'group_speech_basic_info',
      7 => 'group_speech_categories',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-speech field-group-tabs',
      ),
    ),
  );
  $export['group_speech|node|speech|form'] = $field_group;

  return $export;
}

<?php
/**
 * @file
 * ak_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ak_gallery_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_content|node|gallery|form';
  $field_group->group_name = 'group_featured_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Banner Item',
    'weight' => '26',
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
  $export['group_featured_content|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_categories|node|gallery|form';
  $field_group->group_name = 'group_gallery_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Gallery Categories',
    'weight' => '27',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_focus_area',
      3 => 'field_cycle_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-gallery-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_categories|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_details|node|gallery|form';
  $field_group->group_name = 'group_gallery_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Gallery Details',
    'weight' => '23',
    'children' => array(
      0 => 'body',
      1 => 'field_publish_date',
      2 => 'title_field',
      3 => 'field_short_title',
      4 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-gallery-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_details|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_images|node|gallery|form';
  $field_group->group_name = 'group_gallery_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '24',
    'children' => array(
      0 => 'field_gallery_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-gallery-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_images|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|gallery|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '1',
    'children' => array(
      0 => 'group_featured_content',
      1 => 'group_gallery_categories',
      2 => 'group_gallery_details',
      3 => 'group_gallery_images',
      4 => 'group_related_content',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-gallery field-group-tabs',
      ),
    ),
  );
  $export['group_gallery|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_info|node|gallery|full';
  $field_group->group_name = 'group_meta_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Info',
    'weight' => '35',
    'children' => array(
      0 => 'field_country',
      1 => 'field_agency',
      2 => 'field_focus_area',
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
  $export['group_meta_info|node|gallery|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|gallery|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gallery';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '25',
    'children' => array(
      0 => 'field_related_project',
      1 => 'field_enable_project_slider',
      2 => 'field_events_reference',
      3 => 'field_gallery_link',
      4 => 'field_speeches_reference',
      5 => 'field_press_reference',
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
  $export['group_related_content|node|gallery|form'] = $field_group;

  return $export;
}

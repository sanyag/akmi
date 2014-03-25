<?php
/**
 * @file
 * ak_hub_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_hub_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|agency|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'agency';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'article_meta' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|agency|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|agency|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'agency';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'agency_dynamic_rss' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|agency|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|agency|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'agency';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'agency_title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body_more_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => '| More',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|agency|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|focus_area|focus_areas_listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'focus_area';
  $ds_fieldsetting->view_mode = 'focus_areas_listing';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => '| More',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
  );
  $export['node|focus_area|focus_areas_listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ak_hub_page_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'agency_title';
  $ds_field->label = 'Agency Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
$title = $entity->title . \' (\' . $entity->field_agency_acronym[\'und\'][0][\'safe_value\'] . \')\';
$link = l($title, \'node/\' . $entity->nid);
print \'<h2>\' . $link . \'</h1>\';
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['agency_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_hub_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|agency|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'agency';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'agency_rss_feed' => array(
        0 => 'agency_dynamic_rss',
      ),
    ),
    'fields' => array(
      'agency_dynamic_rss' => 'agency_rss_feed',
    ),
    'classes' => array(),
  );
  $export['node|agency|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|agency|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'agency';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_agency_logo',
      ),
      'right' => array(
        0 => 'body_more_link',
        1 => 'agency_title',
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_agency_logo' => 'left',
      'body_more_link' => 'right',
      'agency_title' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'ds_width_auto' => 'ds_width_auto',
      ),
    ),
  );
  $export['node|agency|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_area|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_area';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'flexible:hub';
  $ds_layout->settings = array(
    'css_id' => '',
    'class' => '',
    'sticky' => 0,
    'layout' => 'flexible:hub',
    'hide_sidebars' => 0,
    'pipeline' => 'standard',
    'hide_empty_regions' => FALSE,
    'ds_panels' => TRUE,
    'did' => '8',
    'theme' => 'panels_flexible',
  );
  $export['node|focus_area|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_area|focus_areas_listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_area';
  $ds_layout->view_mode = 'focus_areas_listing';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_hub_page_image',
      ),
      'right' => array(
        0 => 'title',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_hub_page_image' => 'left',
      'title' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|focus_area|focus_areas_listing'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ak_hub_page_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'focus_areas_listing';
  $ds_view_mode->label = 'Focus Areas Listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['focus_areas_listing'] = $ds_view_mode;

  return $export;
}

<?php
/**
 * @file
 * ak_project.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_project_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|project|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|projects_hub_page_listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'projects_hub_page_listing';
  $ds_fieldsetting->settings = array(
    'short_title_as_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
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
    'post_date' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_post_date_date_only',
    ),
  );
  $export['node|project|projects_hub_page_listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'short_title_as_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|project|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_project_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_project_budget',
        1 => 'field_project_partners',
        2 => 'field_project_beneficiaries',
        3 => 'field_country',
        4 => 'field_agency',
        5 => 'field_focus_area',
        6 => 'body',
      ),
    ),
    'fields' => array(
      'field_project_budget' => 'ds_content',
      'field_project_partners' => 'ds_content',
      'field_project_beneficiaries' => 'ds_content',
      'field_country' => 'ds_content',
      'field_agency' => 'ds_content',
      'field_focus_area' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|project|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_project_partners',
        2 => 'field_project_beneficiaries',
        3 => 'field_project_budget',
        4 => 'links',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_project_partners' => 'ds_content',
      'field_project_beneficiaries' => 'ds_content',
      'field_project_budget' => 'ds_content',
      'links' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|project|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|project_subtitle_summary';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'project_subtitle_summary';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sub_title',
      ),
    ),
    'fields' => array(
      'field_sub_title' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|project|project_subtitle_summary'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|projects_hub_page_listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'projects_hub_page_listing';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'short_title_as_link',
        1 => 'body',
        2 => 'node_link',
        3 => 'post_date',
      ),
      'left' => array(
        0 => 'field_project_image',
      ),
    ),
    'fields' => array(
      'short_title_as_link' => 'right',
      'field_project_image' => 'left',
      'body' => 'right',
      'node_link' => 'right',
      'post_date' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|project|projects_hub_page_listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_project_image',
      ),
      'right' => array(
        0 => 'short_title_as_link',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_project_image' => 'left',
      'short_title_as_link' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|project|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ak_project_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'project_subtitle_summary';
  $ds_view_mode->label = 'Project Subtitle/summary';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['project_subtitle_summary'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'projects_hub_page_listing';
  $ds_view_mode->label = 'Projects Hub Page Listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['projects_hub_page_listing'] = $ds_view_mode;

  return $export;
}

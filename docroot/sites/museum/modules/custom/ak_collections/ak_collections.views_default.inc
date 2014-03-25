<?php
/**
 * @file
 * ak_collections.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_collections_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'collections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_artefact_images']['id'] = 'field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['field'] = 'field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['label'] = '';
  $handler->display->display_options['fields']['field_artefact_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artefact_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artefact_images']['settings'] = array(
    'image_style' => 'featured_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artefact_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_artefact_images']['delta_offset'] = '0';
  /* Sort criterion: Global: Random seed */
  $handler->display->display_options['sorts']['random_seed']['id'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['table'] = 'views';
  $handler->display->display_options['sorts']['random_seed']['field'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_int'] = 'custom';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_custom'] = '21600';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artefact' => 'artefact',
  );
  /* Filter criterion: Content: Images (field_artefact_images:fid) */
  $handler->display->display_options['filters']['field_artefact_images_fid']['id'] = 'field_artefact_images_fid';
  $handler->display->display_options['filters']['field_artefact_images_fid']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['filters']['field_artefact_images_fid']['field'] = 'field_artefact_images_fid';
  $handler->display->display_options['filters']['field_artefact_images_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Place (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Place';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'region';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_tid']['id'] = 'field_date_tid';
  $handler->display->display_options['filters']['field_date_tid']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_tid']['field'] = 'field_date_tid';
  $handler->display->display_options['filters']['field_date_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_tid']['expose']['operator_id'] = 'field_date_tid_op';
  $handler->display->display_options['filters']['field_date_tid']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_tid']['expose']['operator'] = 'field_date_tid_op';
  $handler->display->display_options['filters']['field_date_tid']['expose']['identifier'] = 'field_date_tid';
  $handler->display->display_options['filters']['field_date_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_date_tid']['vocabulary'] = 'date';
  /* Filter criterion: Content: Materials and Technique (field_artefact_materials) */
  $handler->display->display_options['filters']['field_artefact_materials_value']['id'] = 'field_artefact_materials_value';
  $handler->display->display_options['filters']['field_artefact_materials_value']['table'] = 'field_data_field_artefact_materials';
  $handler->display->display_options['filters']['field_artefact_materials_value']['field'] = 'field_artefact_materials_value';
  $handler->display->display_options['filters']['field_artefact_materials_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_artefact_materials_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['operator_id'] = 'field_artefact_materials_value_op';
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['label'] = 'Materials/Technique';
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['operator'] = 'field_artefact_materials_value_op';
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['identifier'] = 'field_artefact_materials_value';
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Accession Number (field_artefact_accession) */
  $handler->display->display_options['filters']['field_artefact_accession_value']['id'] = 'field_artefact_accession_value';
  $handler->display->display_options['filters']['field_artefact_accession_value']['table'] = 'field_data_field_artefact_accession';
  $handler->display->display_options['filters']['field_artefact_accession_value']['field'] = 'field_artefact_accession_value';
  $handler->display->display_options['filters']['field_artefact_accession_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artefact_accession_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artefact_accession_value']['expose']['operator_id'] = 'field_artefact_accession_value_op';
  $handler->display->display_options['filters']['field_artefact_accession_value']['expose']['label'] = 'Accession Number';
  $handler->display->display_options['filters']['field_artefact_accession_value']['expose']['operator'] = 'field_artefact_accession_value_op';
  $handler->display->display_options['filters']['field_artefact_accession_value']['expose']['identifier'] = 'field_artefact_accession_value';
  $handler->display->display_options['filters']['field_artefact_accession_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'word';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Description';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Images (field_artefact_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artefact' => 'artefact',
  );
  /* Filter criterion: Content: Images (field_artefact_images:fid) */
  $handler->display->display_options['filters']['field_artefact_images_fid']['id'] = 'field_artefact_images_fid';
  $handler->display->display_options['filters']['field_artefact_images_fid']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['filters']['field_artefact_images_fid']['field'] = 'field_artefact_images_fid';
  $handler->display->display_options['filters']['field_artefact_images_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Images (field_artefact_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  /* Filter criterion: Content: Materials and Technique (field_artefact_materials) */
  $handler->display->display_options['filters']['field_artefact_materials_value']['id'] = 'field_artefact_materials_value';
  $handler->display->display_options['filters']['field_artefact_materials_value']['table'] = 'field_data_field_artefact_materials';
  $handler->display->display_options['filters']['field_artefact_materials_value']['field'] = 'field_artefact_materials_value';
  $handler->display->display_options['filters']['field_artefact_materials_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_artefact_materials_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['operator_id'] = 'field_artefact_materials_value_op';
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['label'] = 'Materials/Technique';
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['operator'] = 'field_artefact_materials_value_op';
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['identifier'] = 'field_artefact_materials_value';
  $handler->display->display_options['filters']['field_artefact_materials_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'collection/all';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All »';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'collection/all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '34';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_artefact_images']['id'] = 'field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['field'] = 'field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['label'] = '';
  $handler->display->display_options['fields']['field_artefact_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artefact_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artefact_images']['settings'] = array(
    'image_style' => 'featured_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artefact_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_artefact_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artefact' => 'artefact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Images (field_artefact_images:fid) */
  $handler->display->display_options['filters']['field_artefact_images_fid']['id'] = 'field_artefact_images_fid';
  $handler->display->display_options['filters']['field_artefact_images_fid']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['filters']['field_artefact_images_fid']['field'] = 'field_artefact_images_fid';
  $handler->display->display_options['filters']['field_artefact_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_artefact_images_fid']['group'] = 1;
  /* Filter criterion: Content: Images (field_artefact_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Random Collection Images';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_artefact_images']['id'] = 'field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['table'] = 'field_data_field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['field'] = 'field_artefact_images';
  $handler->display->display_options['fields']['field_artefact_images']['label'] = '';
  $handler->display->display_options['fields']['field_artefact_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artefact_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artefact_images']['settings'] = array(
    'image_style' => 'featured_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artefact_images']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_artefact_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_artefact_images']['delta_offset'] = '0';
  $translatables['collections'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Place'),
    t('Date'),
    t('Materials/Technique'),
    t('Accession Number'),
    t('Description'),
    t('Page'),
    t('Block'),
    t('View All »'),
    t('Random Collection Images'),
    t('Content pane'),
    t('View panes'),
  );
  $export['collections'] = $view;

  return $export;
}

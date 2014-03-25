<?php
/**
 * @file
 * akaa_maps.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function akaa_maps_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'project_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geocode_lat_long',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => '',
    'description_field' => 'nothing',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Geocode Lat/Long */
  $handler->display->display_options['fields']['field_geocode_lat_long']['id'] = 'field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['table'] = 'field_data_field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['field'] = 'field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['label'] = '';
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geocode_lat_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geocode_lat_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geocode_lat_long']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geocode_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geocode_lat_long']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_geocode_lat_long']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_city']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_city']['field_api_classes'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_arch_country']['id'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['field'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['label'] = '';
  $handler->display->display_options['fields']['field_arch_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arch_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_arch_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_arch_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arch_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_arch_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_arch_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_arch_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_arch_country']['field_api_classes'] = 0;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_image']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_project_image]<p class="clearfix">[field_city]<br> [field_arch_country]<br>[title]</p>
<div class="clearfix"></div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'project' => 'project',
  );

  /* Display: Data Overlay Winners */
  $handler = $view->new_display('openlayers', 'Data Overlay Winners', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Winner? (field_winner) */
  $handler->display->display_options['filters']['field_winner_value']['id'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['table'] = 'field_data_field_winner';
  $handler->display->display_options['filters']['field_winner_value']['field'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['value'] = array(
    1 => '1',
  );

  /* Display: Data Overlay Shortlist */
  $handler = $view->new_display('openlayers', 'Data Overlay Shortlist', 'openlayers_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Winner? (field_winner) */
  $handler->display->display_options['filters']['field_winner_value']['id'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['table'] = 'field_data_field_winner';
  $handler->display->display_options['filters']['field_winner_value']['field'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['value'] = array(
    0 => '0',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'projects_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Locations';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'projects_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<img src="/sites/architecture/themes/akdn_architecture/images/google_akaa.gif" /> Award Recipient
<img src="/sites/architecture/themes/akdn_architecture/images/google_akaa2.gif" /> Shortlisted Project';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['path'] = 'map';
  $translatables['project_locations'] = array(
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
    t('[field_project_image]<p class="clearfix">[field_city]<br> [field_arch_country]<br>[title]</p>
<div class="clearfix"></div>'),
    t('Data Overlay Winners'),
    t('Data Overlay Shortlist'),
    t('Block'),
    t('Page'),
    t('Project Locations'),
    t('<img src="/sites/architecture/themes/akdn_architecture/images/google_akaa.gif" /> Award Recipient
<img src="/sites/architecture/themes/akdn_architecture/images/google_akaa2.gif" /> Shortlisted Project'),
  );
  $export['project_locations'] = $view;

  return $export;
}

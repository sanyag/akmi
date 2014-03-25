<?php
/**
 * @file
 * akaa_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function akaa_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'akaa_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AKAA Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Award Recipients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_image' => 'field_project_image',
    'field_cycle_year' => 'field_cycle_year',
    'field_building_type' => 'field_building_type',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cycle_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_building_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Alphabetical';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['label'] = 'Award Cycle';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  /* Field: Content: Building Type */
  $handler->display->display_options['fields']['field_building_type']['id'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['fields']['field_building_type']['field'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_type']['delta_offset'] = '0';
  /* Sort criterion: Content: Cycle Year (field_cycle_year) */
  $handler->display->display_options['sorts']['field_cycle_year_tid']['id'] = 'field_cycle_year_tid';
  $handler->display->display_options['sorts']['field_cycle_year_tid']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['sorts']['field_cycle_year_tid']['field'] = 'field_cycle_year_tid';
  $handler->display->display_options['sorts']['field_cycle_year_tid']['order'] = 'DESC';
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
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'regions';
  /* Filter criterion: Content: Country (field_arch_country) */
  $handler->display->display_options['filters']['field_arch_country_tid']['id'] = 'field_arch_country_tid';
  $handler->display->display_options['filters']['field_arch_country_tid']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['filters']['field_arch_country_tid']['field'] = 'field_arch_country_tid';
  $handler->display->display_options['filters']['field_arch_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_arch_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['operator_id'] = 'field_arch_country_tid_op';
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['operator'] = 'field_arch_country_tid_op';
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['identifier'] = 'field_arch_country_tid';
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_arch_country_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_arch_country_tid']['vocabulary'] = 'country';
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_tid']['id'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_tid']['field'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_city_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_city_tid']['expose']['operator_id'] = 'field_city_tid_op';
  $handler->display->display_options['filters']['field_city_tid']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_city_tid']['expose']['operator'] = 'field_city_tid_op';
  $handler->display->display_options['filters']['field_city_tid']['expose']['identifier'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_city_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_city_tid']['vocabulary'] = 'city';
  /* Filter criterion: Content: Building Type (field_building_type) */
  $handler->display->display_options['filters']['field_building_type_tid']['id'] = 'field_building_type_tid';
  $handler->display->display_options['filters']['field_building_type_tid']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['filters']['field_building_type_tid']['field'] = 'field_building_type_tid';
  $handler->display->display_options['filters']['field_building_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_building_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['operator_id'] = 'field_building_type_tid_op';
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['label'] = 'Building Type';
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['operator'] = 'field_building_type_tid_op';
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['identifier'] = 'field_building_type_tid';
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_building_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_building_type_tid']['vocabulary'] = 'building_type';
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'word';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );

  /* Display: AKAA Projects Listing Page */
  $handler = $view->new_display('page', 'AKAA Projects Listing Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Award Recipients';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No projects found!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Alphabetical';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['label'] = 'Award Cycle';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  /* Field: Content: Building Type */
  $handler->display->display_options['fields']['field_building_type']['id'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['fields']['field_building_type']['field'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_type']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'architecture/projects';

  /* Display: Cycle Projects Listing */
  $handler = $view->new_display('block', 'Cycle Projects Listing', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'listing-page-views';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['label'] = '';
  $handler->display->display_options['fields']['field_cycle_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  /* Field: Content: Building Type */
  $handler->display->display_options['fields']['field_building_type']['id'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['fields']['field_building_type']['field'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['label'] = '';
  $handler->display->display_options['fields']['field_building_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_type']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['alter']['text'] = '<div class="pc-listing-img">
	[field_project_image]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-date">[field_cycle_year]
	</div>
</div>';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['element_wrapper_class'] = 'listing-page-views-image';
  $handler->display->display_options['fields']['field_project_image']['empty'] = '<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-date">[field_building_type]
	</div>
	<div class="pc-body">
		[body]&nbsp;
		<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>';
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'small_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['code'] = '$term_explode = explode(\'/\',drupal_get_path_alias(\'node/\'.arg(1)));
$term_name = $term_explode[1];
$term = array_pop(taxonomy_get_term_by_name(str_replace(\'-\', \' \', $term_name)));
return $term->tid;';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
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
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'regions';
  /* Filter criterion: Content: Country (field_arch_country) */
  $handler->display->display_options['filters']['field_arch_country_tid']['id'] = 'field_arch_country_tid';
  $handler->display->display_options['filters']['field_arch_country_tid']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['filters']['field_arch_country_tid']['field'] = 'field_arch_country_tid';
  $handler->display->display_options['filters']['field_arch_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_arch_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['operator_id'] = 'field_arch_country_tid_op';
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['operator'] = 'field_arch_country_tid_op';
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['identifier'] = 'field_arch_country_tid';
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_arch_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_arch_country_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_arch_country_tid']['vocabulary'] = 'country';
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_tid']['id'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_tid']['field'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_city_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_city_tid']['expose']['operator_id'] = 'field_city_tid_op';
  $handler->display->display_options['filters']['field_city_tid']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_city_tid']['expose']['operator'] = 'field_city_tid_op';
  $handler->display->display_options['filters']['field_city_tid']['expose']['identifier'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_city_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_city_tid']['vocabulary'] = 'city';
  /* Filter criterion: Content: Building Type (field_building_type) */
  $handler->display->display_options['filters']['field_building_type_tid']['id'] = 'field_building_type_tid';
  $handler->display->display_options['filters']['field_building_type_tid']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['filters']['field_building_type_tid']['field'] = 'field_building_type_tid';
  $handler->display->display_options['filters']['field_building_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_building_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['operator_id'] = 'field_building_type_tid_op';
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['label'] = 'Building Type';
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['operator'] = 'field_building_type_tid_op';
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['identifier'] = 'field_building_type_tid';
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_building_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_building_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_building_type_tid']['vocabulary'] = 'building_type';
  /* Filter criterion: Content: Winner? (field_winner) */
  $handler->display->display_options['filters']['field_winner_value']['id'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['table'] = 'field_data_field_winner';
  $handler->display->display_options['filters']['field_winner_value']['field'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['value'] = array(
    1 => '1',
  );

  /* Display: Cycle Award Recipients */
  $handler = $view->new_display('page', 'Cycle Award Recipients', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php $term_explode = explode(\'/\',$_SERVER["REQUEST_URI"]);
$term = taxonomy_term_load(array_pop($term_explode));
$name = str_replace(\'cycle\', \'Cycle\',$term->name);

print \'<h2>\'.$name." Award Recipients</h2>"; ?>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
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
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Winner? (field_winner) */
  $handler->display->display_options['filters']['field_winner_value']['id'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['table'] = 'field_data_field_winner';
  $handler->display->display_options['filters']['field_winner_value']['field'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'architecture/award-recipients/%';

  /* Display: Cycle Shortlisted Projects */
  $handler = $view->new_display('page', 'Cycle Shortlisted Projects', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'test';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php $term_explode = explode(\'/\',$_SERVER["REQUEST_URI"]);
$term = taxonomy_term_load(array_pop($term_explode));
$name = str_replace(\'cycle\', \'Cycle\',$term->name);

print \'<h2>\'.$name." Award Recipients</h2>"; ?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Alphabetical';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['label'] = 'Award Cycle';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  /* Field: Content: Building Type */
  $handler->display->display_options['fields']['field_building_type']['id'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['fields']['field_building_type']['field'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_type']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'drupal_set_message(\'test\');
$term_explode = explode(\'/\',drupal_get_path_alias(\'node/\'.arg(2)));
$term_name = $term_explode[1];
$term = array_pop(taxonomy_get_term_by_name(str_replace(\'-\', \' \', $term_name)));
drupal_set_message($term->tid);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['code'] = '$term_explode = explode(\'/\',drupal_get_path_alias(\'node/\'.arg(2)));
$term_name = $term_explode[1];
$term = array_pop(taxonomy_get_term_by_name(str_replace(\'-\', \' \', $term_name)));
return $term->tid;';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
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
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'architecture/shortlisted-projects/%';

  /* Display: AKAA Similar Projects - Country */
  $handler = $view->new_display('block', 'AKAA Similar Projects - Country', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'similar-project-listing';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cycle_year' => 'field_cycle_year',
    'title' => 'title',
    'field_city' => 'field_city',
    'field_building_type' => 'field_building_type',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cycle_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_building_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<h2 class="pane-title">Other projects in <?php 
$term = taxonomy_term_load($view->args[0]);
print $term->name; ?>:</h2>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_city']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_arch_country']['id'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['field'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arch_country']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_arch_country']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_arch_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Building Type */
  $handler->display->display_options['fields']['field_building_type']['id'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['fields']['field_building_type']['field'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_building_type']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_building_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_building_type']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$node = node_load($data->nid);
$term = taxonomy_term_load($node->field_cycle_year[\'und\'][\'0\'][\'tid\']);
$str = str_replace(" ", "-", $term->name);
return $str;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'AKAA';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$proj = node_load($data->nid);
if ($proj->field_winner[\'und\'][0][\'value\'] == \'1\') {
return \' Recipient\';
} else {
return \' Shortlisted\';
}';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['label'] = 'Award Cycle';
  $handler->display->display_options['fields']['field_cycle_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cycle_year']['alter']['text'] = '[field_cycle_year][php]';
  $handler->display->display_options['fields']['field_cycle_year']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cycle_year']['alter']['path'] = 'award-cycle/[php_1]';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Winner? */
  $handler->display->display_options['fields']['field_winner']['id'] = 'field_winner';
  $handler->display->display_options['fields']['field_winner']['table'] = 'field_data_field_winner';
  $handler->display->display_options['fields']['field_winner']['field'] = 'field_winner';
  $handler->display->display_options['fields']['field_winner']['label'] = 'AKAA';
  $handler->display->display_options['fields']['field_winner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_winner']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_arch_country) */
  $handler->display->display_options['arguments']['field_arch_country_tid']['id'] = 'field_arch_country_tid';
  $handler->display->display_options['arguments']['field_arch_country_tid']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['arguments']['field_arch_country_tid']['field'] = 'field_arch_country_tid';
  $handler->display->display_options['arguments']['field_arch_country_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_arch_country_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_arch_country_tid']['default_argument_options']['code'] = '$this_node = node_load(arg(1));
$this_country = array_pop($this_node->field_arch_country);
$this_country_id = $this_country[\'0\'][\'tid\'];
return $this_country_id;';
  $handler->display->display_options['arguments']['field_arch_country_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_arch_country_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_arch_country_tid']['summary_options']['items_per_page'] = '25';
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
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'if ($data->nid == arg(1)) {
return TRUE;
}';

  /* Display: AKAA Similar Projects - Building Type */
  $handler = $view->new_display('block', 'AKAA Similar Projects - Building Type', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'similar-project-listing';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cycle_year' => 'field_cycle_year',
    'title' => 'title',
    'field_city' => 'field_city',
    'field_building_type' => 'field_building_type',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cycle_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_building_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<h2 class="pane-title">Other projects of the <?php 
$term = taxonomy_term_load($view->args[0]);
print $term->name; ?> building type:</h2>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_city']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_arch_country']['id'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['field'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_arch_country']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_arch_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arch_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Building Type */
  $handler->display->display_options['fields']['field_building_type']['id'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['fields']['field_building_type']['field'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_building_type']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_building_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_building_type']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$node = node_load($data->nid);
$term = taxonomy_term_load($node->field_cycle_year[\'und\'][\'0\'][\'tid\']);
$str = str_replace(" ", "-", $term->name);
return $str;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'AKAA';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$proj = node_load($data->nid);
if ($proj->field_winner[\'und\'][0][\'value\'] == \'1\') {
return \' Recipient\';
} else {
return \' Shortlisted\';
}';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['label'] = 'Award Cycle';
  $handler->display->display_options['fields']['field_cycle_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cycle_year']['alter']['text'] = '[field_cycle_year][php]';
  $handler->display->display_options['fields']['field_cycle_year']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cycle_year']['alter']['path'] = 'award-cycle/[php_1]';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Building Type (field_building_type) */
  $handler->display->display_options['arguments']['field_building_type_tid']['id'] = 'field_building_type_tid';
  $handler->display->display_options['arguments']['field_building_type_tid']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['arguments']['field_building_type_tid']['field'] = 'field_building_type_tid';
  $handler->display->display_options['arguments']['field_building_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_building_type_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_building_type_tid']['default_argument_options']['code'] = '$this_node = node_load(arg(1));
$this_building_type = array_pop($this_node->field_building_type);
$this_building_type_id = $this_building_type[\'0\'][\'tid\'];
return $this_building_type_id;';
  $handler->display->display_options['arguments']['field_building_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_building_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_building_type_tid']['summary_options']['items_per_page'] = '25';
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
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'if ($data->nid == arg(1)) {
return TRUE;
}';

  /* Display: AKAA Projects Listing Page */
  $handler = $view->new_display('page', 'AKAA Projects Listing Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Award Recipients';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Shortlist for this cycle has not yet been announced.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Cycle Year (field_cycle_year) */
  $handler->display->display_options['relationships']['field_cycle_year_tid_1']['id'] = 'field_cycle_year_tid_1';
  $handler->display->display_options['relationships']['field_cycle_year_tid_1']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['relationships']['field_cycle_year_tid_1']['field'] = 'field_cycle_year_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Alphabetical';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Taxonomy term: Award Cycle */
  $handler->display->display_options['fields']['field_award_cycle']['id'] = 'field_award_cycle';
  $handler->display->display_options['fields']['field_award_cycle']['table'] = 'field_data_field_award_cycle';
  $handler->display->display_options['fields']['field_award_cycle']['field'] = 'field_award_cycle';
  $handler->display->display_options['fields']['field_award_cycle']['relationship'] = 'field_cycle_year_tid_1';
  $handler->display->display_options['fields']['field_award_cycle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_award_cycle']['type'] = 'node_reference_nid';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['label'] = 'Award Cycle';
  $handler->display->display_options['fields']['field_cycle_year']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cycle_year']['alter']['path'] = 'node/[field_award_cycle]';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Building Type */
  $handler->display->display_options['fields']['field_building_type']['id'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['fields']['field_building_type']['field'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_building_type']['alter']['path'] = 'architecture/building-type/[field_building_type-tid]';
  $handler->display->display_options['fields']['field_building_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_building_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'architecture/shortlisted/%';

  /* Display: AKAA Projects Listing Page for Building Type */
  $handler = $view->new_display('page', 'AKAA Projects Listing Page for Building Type', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Award Recipients';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Cycle Year (field_cycle_year) */
  $handler->display->display_options['relationships']['field_cycle_year_tid_1']['id'] = 'field_cycle_year_tid_1';
  $handler->display->display_options['relationships']['field_cycle_year_tid_1']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['relationships']['field_cycle_year_tid_1']['field'] = 'field_cycle_year_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Alphabetical';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Taxonomy term: Award Cycle */
  $handler->display->display_options['fields']['field_award_cycle']['id'] = 'field_award_cycle';
  $handler->display->display_options['fields']['field_award_cycle']['table'] = 'field_data_field_award_cycle';
  $handler->display->display_options['fields']['field_award_cycle']['field'] = 'field_award_cycle';
  $handler->display->display_options['fields']['field_award_cycle']['relationship'] = 'field_cycle_year_tid_1';
  $handler->display->display_options['fields']['field_award_cycle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_award_cycle']['type'] = 'node_reference_nid';
  /* Field: Content: Cycle Year */
  $handler->display->display_options['fields']['field_cycle_year']['id'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['field'] = 'field_cycle_year';
  $handler->display->display_options['fields']['field_cycle_year']['label'] = 'Award Cycle';
  $handler->display->display_options['fields']['field_cycle_year']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cycle_year']['alter']['path'] = 'node/[field_award_cycle]';
  $handler->display->display_options['fields']['field_cycle_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cycle_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Building Type */
  $handler->display->display_options['fields']['field_building_type']['id'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['table'] = 'field_data_field_building_type';
  $handler->display->display_options['fields']['field_building_type']['field'] = 'field_building_type';
  $handler->display->display_options['fields']['field_building_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_building_type']['alter']['path'] = 'architecture/building-type/[field_building_type-tid]';
  $handler->display->display_options['fields']['field_building_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_building_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'architecture/building-type/%';

  /* Display: AKAA Project Details */
  $handler = $view->new_display('block', 'AKAA Project Details', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_arch_country']['id'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['field'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arch_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Location';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_city], [field_arch_country]';
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_client']['id'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['table'] = 'field_data_field_client';
  $handler->display->display_options['fields']['field_client']['field'] = 'field_client';
  /* Field: Content: Planner */
  $handler->display->display_options['fields']['field_planner']['id'] = 'field_planner';
  $handler->display->display_options['fields']['field_planner']['table'] = 'field_data_field_planner';
  $handler->display->display_options['fields']['field_planner']['field'] = 'field_planner';
  /* Field: Content: Design Date */
  $handler->display->display_options['fields']['field_design_date']['id'] = 'field_design_date';
  $handler->display->display_options['fields']['field_design_date']['table'] = 'field_data_field_design_date';
  $handler->display->display_options['fields']['field_design_date']['field'] = 'field_design_date';
  $handler->display->display_options['fields']['field_design_date']['label'] = 'Design';
  /* Field: Content: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['akaa_projects'] = array(
    t('Master'),
    t('Award Recipients'),
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
    t('Alphabetical'),
    t('Image'),
    t('Award Cycle'),
    t('Building Type'),
    t('Region'),
    t('Country'),
    t('City'),
    t('Keyword'),
    t('AKAA Projects Listing Page'),
    t('No projects found!'),
    t('Cycle Projects Listing'),
    t('<div class="pc-listing-img">
	[field_project_image]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-date">[field_cycle_year]
	</div>
</div>'),
    t('<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-date">[field_building_type]
	</div>
	<div class="pc-body">
		[body]&nbsp;
		<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>'),
    t('All'),
    t('Cycle Award Recipients'),
    t('Cycle Shortlisted Projects'),
    t('test'),
    t('PHP'),
    t('AKAA Similar Projects - Country'),
    t('Name'),
    t('AKAA'),
    t('[field_cycle_year][php]'),
    t('AKAA Similar Projects - Building Type'),
    t('Shortlist for this cycle has not yet been announced.'),
    t('term from field_cycle_year'),
    t('AKAA Projects Listing Page for Building Type'),
    t('AKAA Project Details'),
    t('Location'),
    t('[field_city], [field_arch_country]'),
    t('Client'),
    t('Planner'),
    t('Design'),
    t('Size'),
  );
  $export['akaa_projects'] = $view;

  $view = new view();
  $view->name = 'akaa_projects_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AKAA Projects Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'architecture_project' => 'architecture_project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<img src="/sites/all/themes/akdn/images/google_akaa.gif" /> Award Recipient
<img src="/sites/all/themes/akdn/images/google_akaa2.gif" /> Shortlisted Project';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'architecture/projects/map';

  /* Display: Data Overlay Winners */
  $handler = $view->new_display('openlayers', 'Data Overlay Winners', 'openlayers_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Winning Projects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
    'name_field' => 'title',
    'description_field' => 'nothing',
    'view_mode' => 'full',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Geocode Lat/Long */
  $handler->display->display_options['fields']['field_geocode_lat_long']['id'] = 'field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['table'] = 'field_data_field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['field'] = 'field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['label'] = '';
  $handler->display->display_options['fields']['field_geocode_lat_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geocode_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geocode_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_arch_country']['id'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['field'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['label'] = '';
  $handler->display->display_options['fields']['field_arch_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arch_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arch_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'mini_feature_narrow',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'akaa_map_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="clearfix"><div class="akaa-map-left">[field_feature_image]</div><div class="akaa-map-right"><span class="akaa-map-project-title">[title]</span><span class="akaa-map-project-city">[field_city]</span><br><span class="akaa-map-project-country">[field_arch_country]</span></div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'architecture_project' => 'architecture_project',
  );
  /* Filter criterion: Content: Winner? (field_winner) */
  $handler->display->display_options['filters']['field_winner_value']['id'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['table'] = 'field_data_field_winner';
  $handler->display->display_options['filters']['field_winner_value']['field'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['value'] = array(
    1 => '1',
  );

  /* Display: Data Overlay Shortlisted */
  $handler = $view->new_display('openlayers', 'Data Overlay Shortlisted', 'openlayers_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shortlisted Projects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
    'name_field' => 'title',
    'description_field' => 'nothing',
    'view_mode' => 'full',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Geocode Lat/Long */
  $handler->display->display_options['fields']['field_geocode_lat_long']['id'] = 'field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['table'] = 'field_data_field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['field'] = 'field_geocode_lat_long';
  $handler->display->display_options['fields']['field_geocode_lat_long']['label'] = '';
  $handler->display->display_options['fields']['field_geocode_lat_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geocode_lat_long']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geocode_lat_long']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_arch_country']['id'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['table'] = 'field_data_field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['field'] = 'field_arch_country';
  $handler->display->display_options['fields']['field_arch_country']['label'] = '';
  $handler->display->display_options['fields']['field_arch_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arch_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arch_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'akaa_map_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="clearfix"><div class="akaa-map-left">[field_feature_image]</div><div class="akaa-map-right"><span class="akaa-map-project-title">[title]</span><span class="akaa-map-project-city">[field_city]</span><br><span class="akaa-map-project-country">[field_arch_country]</span></div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'architecture_project' => 'architecture_project',
  );
  /* Filter criterion: Content: Winner? (field_winner) */
  $handler->display->display_options['filters']['field_winner_value']['id'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['table'] = 'field_data_field_winner';
  $handler->display->display_options['filters']['field_winner_value']['field'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['value'] = array(
    0 => '0',
  );
  $translatables['akaa_projects_map'] = array(
    t('Master'),
    t('Project Locations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('<img src="/sites/all/themes/akdn/images/google_akaa.gif" /> Award Recipient
<img src="/sites/all/themes/akdn/images/google_akaa2.gif" /> Shortlisted Project'),
    t('Data Overlay Winners'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="clearfix"><div class="akaa-map-left">[field_feature_image]</div><div class="akaa-map-right"><span class="akaa-map-project-title">[title]</span><span class="akaa-map-project-city">[field_city]</span><br><span class="akaa-map-project-country">[field_arch_country]</span></div></div>'),
    t('Data Overlay Shortlisted'),
  );
  $export['akaa_projects_map'] = $view;

  $view = new view();
  $view->name = 'award_cycle';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Award Cycle';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Previous Cycles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Sort criterion: Content: Award Year (field_award_year) */
  $handler->display->display_options['sorts']['field_award_year_value']['id'] = 'field_award_year_value';
  $handler->display->display_options['sorts']['field_award_year_value']['table'] = 'field_data_field_award_year';
  $handler->display->display_options['sorts']['field_award_year_value']['field'] = 'field_award_year_value';
  $handler->display->display_options['sorts']['field_award_year_value']['order'] = 'DESC';
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
    'award_cycle' => 'award_cycle',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: About latest Cycle */
  $handler = $view->new_display('block', 'About latest Cycle', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Shortlist for this cycle has not yet been announced.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Cycle Year (field_cycle_year) */
  $handler->display->display_options['relationships']['field_cycle_year_tid']['id'] = 'field_cycle_year_tid';
  $handler->display->display_options['relationships']['field_cycle_year_tid']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['relationships']['field_cycle_year_tid']['field'] = 'field_cycle_year_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Shortlisted Projects */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_cycle_year_tid';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'Shortlisted Projects';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'Shortlisted Projects';
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'architecture/shortlisted/[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: News */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'News';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print l(t(\'News\'), \'award-cycle/\' . $row->tid . \'/news\');
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Master Jury */
  $handler->display->display_options['fields']['field_master_jury']['id'] = 'field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['table'] = 'field_data_field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['field'] = 'field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['label'] = '';
  $handler->display->display_options['fields']['field_master_jury']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['alter']['text'] = 'Master Jury';
  $handler->display->display_options['fields']['field_master_jury']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['alter']['path'] = 'architecture/master-jury/[nid]';
  $handler->display->display_options['fields']['field_master_jury']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_master_jury']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_master_jury']['delta_offset'] = '0';
  /* Field: Content: Steering Committee */
  $handler->display->display_options['fields']['field_steering_committee']['id'] = 'field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['table'] = 'field_data_field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['field'] = 'field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['label'] = '';
  $handler->display->display_options['fields']['field_steering_committee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['alter']['text'] = 'Steering Committee';
  $handler->display->display_options['fields']['field_steering_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['alter']['path'] = 'architecture/steering-committee/[nid]';
  $handler->display->display_options['fields']['field_steering_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_steering_committee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_steering_committee']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$count = db_query(\'SELECT count(entity_id) FROM {field_data_field_cycle_year} WHERE field_cycle_year_tid = :tid AND bundle = :bundle\', array(\':tid\' => $row->tid, \':bundle\' => \'architecture_project\'))->fetchField();
if($count) {
print \'<a href="/architecture/shortlisted/\'.$row->tid.\'">Shortlisted Projects</a>\'; 
}
else {
print \'\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_calendar']['id'] = 'field_calendar';
  $handler->display->display_options['fields']['field_calendar']['table'] = 'field_data_field_calendar';
  $handler->display->display_options['fields']['field_calendar']['field'] = 'field_calendar';
  $handler->display->display_options['fields']['field_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_calendar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_calendar']['alter']['text'] = 'Calendar';
  $handler->display->display_options['fields']['field_calendar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_calendar']['alter']['path'] = 'node/[field_calendar-nid]';
  $handler->display->display_options['fields']['field_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_calendar']['type'] = 'node_reference_nid';
  /* Field: Content: Eligibility Criteria */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = '';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['text'] = 'Eligibility Criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['path'] = 'node/[field_eligibility_criteria-nid]';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['hide_empty'] = TRUE;
  /* Field: Content: Press Materials */
  $handler->display->display_options['fields']['field_press_materials']['id'] = 'field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['table'] = 'field_data_field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['field'] = 'field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['label'] = '';
  $handler->display->display_options['fields']['field_press_materials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_materials']['alter']['text'] = 'Press Materials';
  $handler->display->display_options['fields']['field_press_materials']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_press_materials']['alter']['path'] = 'node/[field_press_materials-nid]';
  $handler->display->display_options['fields']['field_press_materials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_materials']['hide_empty'] = TRUE;
  /* Field: Content: Award Ceremony */
  $handler->display->display_options['fields']['field_award_ceremony']['id'] = 'field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['table'] = 'field_data_field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['field'] = 'field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['label'] = '';
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['text'] = 'Award Ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['path'] = 'node/[field_award_ceremony-nid]';
  $handler->display->display_options['fields']['field_award_ceremony']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_award_ceremony']['hide_empty'] = TRUE;
  /* Field: Content: Chairman's Award */
  $handler->display->display_options['fields']['field_chairman_s_award']['id'] = 'field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['table'] = 'field_data_field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['field'] = 'field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['label'] = '';
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['text'] = 'Chairman\'s Award';
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['path'] = 'node/[field_chairman_s_award-nid]';
  $handler->display->display_options['fields']['field_chairman_s_award']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chairman_s_award']['hide_empty'] = TRUE;

  /* Display: About this Cycle */
  $handler = $view->new_display('block', 'About this Cycle', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Cycle Year (field_cycle_year) */
  $handler->display->display_options['relationships']['field_cycle_year_tid']['id'] = 'field_cycle_year_tid';
  $handler->display->display_options['relationships']['field_cycle_year_tid']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['relationships']['field_cycle_year_tid']['field'] = 'field_cycle_year_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_cycle_year_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print l(t(\'News\'), \'award-cycle/\' . $row->tid . \'/news\');
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Master Jury */
  $handler->display->display_options['fields']['field_master_jury']['id'] = 'field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['table'] = 'field_data_field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['field'] = 'field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['label'] = '';
  $handler->display->display_options['fields']['field_master_jury']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['alter']['text'] = 'Master Jury';
  $handler->display->display_options['fields']['field_master_jury']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['alter']['path'] = 'architecture/master-jury/[nid]';
  $handler->display->display_options['fields']['field_master_jury']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_master_jury']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_master_jury']['delta_offset'] = '0';
  /* Field: Content: Steering Committee */
  $handler->display->display_options['fields']['field_steering_committee']['id'] = 'field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['table'] = 'field_data_field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['field'] = 'field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['label'] = '';
  $handler->display->display_options['fields']['field_steering_committee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['alter']['text'] = 'Steering Committee';
  $handler->display->display_options['fields']['field_steering_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['alter']['path'] = 'architecture/steering-committee/[nid]';
  $handler->display->display_options['fields']['field_steering_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_steering_committee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_steering_committee']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$count = db_query(\'SELECT count(entity_id) FROM {field_data_field_cycle_year} WHERE field_cycle_year_tid = :tid AND bundle = :bundle\', array(\':tid\' => $row->tid, \':bundle\' => \'architecture_project\'))->fetchField();
if($count) {
print \'<a href="/architecture/shortlisted/\'.$row->tid.\'">Shortlisted Projects</a>\'; 
}
else {
print \'\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Press Materials */
  $handler->display->display_options['fields']['field_press_materials']['id'] = 'field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['table'] = 'field_data_field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['field'] = 'field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['label'] = '';
  $handler->display->display_options['fields']['field_press_materials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_materials']['alter']['text'] = 'Press Materials';
  $handler->display->display_options['fields']['field_press_materials']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_press_materials']['alter']['path'] = 'node/[field_press_materials-nid]';
  $handler->display->display_options['fields']['field_press_materials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_materials']['hide_empty'] = TRUE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_calendar']['id'] = 'field_calendar';
  $handler->display->display_options['fields']['field_calendar']['table'] = 'field_data_field_calendar';
  $handler->display->display_options['fields']['field_calendar']['field'] = 'field_calendar';
  $handler->display->display_options['fields']['field_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_calendar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_calendar']['alter']['text'] = 'Calendar';
  $handler->display->display_options['fields']['field_calendar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_calendar']['alter']['path'] = 'node/[field_calendar-nid]';
  $handler->display->display_options['fields']['field_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_calendar']['type'] = 'node_reference_nid';
  /* Field: Content: Eligibility Criteria */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = '';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['text'] = 'Eligibility Criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['path'] = 'node/[field_eligibility_criteria-nid]';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['hide_empty'] = TRUE;
  /* Field: Content: Award Ceremony */
  $handler->display->display_options['fields']['field_award_ceremony']['id'] = 'field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['table'] = 'field_data_field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['field'] = 'field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['label'] = '';
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['text'] = 'Award Ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['path'] = 'node/[field_award_ceremony-nid]';
  $handler->display->display_options['fields']['field_award_ceremony']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_award_ceremony']['hide_empty'] = TRUE;
  /* Field: Content: Chairman's Award */
  $handler->display->display_options['fields']['field_chairman_s_award']['id'] = 'field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['table'] = 'field_data_field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['field'] = 'field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['label'] = '';
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['text'] = 'Chairman\'s Award';
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['path'] = 'node/[field_chairman_s_award-nid]';
  $handler->display->display_options['fields']['field_chairman_s_award']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chairman_s_award']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: About this Cycle - People Listing */
  $handler = $view->new_display('block', 'About this Cycle - People Listing', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: News */
  $handler->display->display_options['fields']['field_news']['id'] = 'field_news';
  $handler->display->display_options['fields']['field_news']['table'] = 'field_data_field_news';
  $handler->display->display_options['fields']['field_news']['field'] = 'field_news';
  $handler->display->display_options['fields']['field_news']['label'] = '';
  $handler->display->display_options['fields']['field_news']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news']['alter']['text'] = 'News';
  $handler->display->display_options['fields']['field_news']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_news']['alter']['path'] = 'node/[field_news-nid]';
  $handler->display->display_options['fields']['field_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news']['type'] = 'node_reference_nid';
  /* Field: Content: Master Jury */
  $handler->display->display_options['fields']['field_master_jury']['id'] = 'field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['table'] = 'field_data_field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['field'] = 'field_master_jury';
  $handler->display->display_options['fields']['field_master_jury']['label'] = '';
  $handler->display->display_options['fields']['field_master_jury']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['alter']['text'] = 'Master Jury';
  $handler->display->display_options['fields']['field_master_jury']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['alter']['path'] = 'architecture/master-jury/[nid]';
  $handler->display->display_options['fields']['field_master_jury']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_master_jury']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_master_jury']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_master_jury']['delta_offset'] = '0';
  /* Field: Content: Steering Committee */
  $handler->display->display_options['fields']['field_steering_committee']['id'] = 'field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['table'] = 'field_data_field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['field'] = 'field_steering_committee';
  $handler->display->display_options['fields']['field_steering_committee']['label'] = '';
  $handler->display->display_options['fields']['field_steering_committee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['alter']['text'] = 'Steering Committee';
  $handler->display->display_options['fields']['field_steering_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['alter']['path'] = 'architecture/steering-committee/[nid]';
  $handler->display->display_options['fields']['field_steering_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_steering_committee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_steering_committee']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_steering_committee']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$term_explode = explode(\'/\',drupal_get_path_alias(\'node/\'.arg(1)));
$term_name = $term_explode[1];
$term = array_pop(taxonomy_get_term_by_name(str_replace(\'-\', \' \', $term_name)));
print \'<a href="/architecture/shortlisted/\'.$term->tid.\'">Shortlisted Projects</a>\'; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Press Materials */
  $handler->display->display_options['fields']['field_press_materials']['id'] = 'field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['table'] = 'field_data_field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['field'] = 'field_press_materials';
  $handler->display->display_options['fields']['field_press_materials']['label'] = '';
  $handler->display->display_options['fields']['field_press_materials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_materials']['alter']['text'] = 'Press Materials';
  $handler->display->display_options['fields']['field_press_materials']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_press_materials']['alter']['path'] = 'node/[field_press_materials-nid]';
  $handler->display->display_options['fields']['field_press_materials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_materials']['hide_empty'] = TRUE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_calendar']['id'] = 'field_calendar';
  $handler->display->display_options['fields']['field_calendar']['table'] = 'field_data_field_calendar';
  $handler->display->display_options['fields']['field_calendar']['field'] = 'field_calendar';
  $handler->display->display_options['fields']['field_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_calendar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_calendar']['alter']['text'] = 'Calendar';
  $handler->display->display_options['fields']['field_calendar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_calendar']['alter']['path'] = 'node/[field_calendar-nid]';
  $handler->display->display_options['fields']['field_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar']['type'] = 'node_reference_nid';
  /* Field: Content: Eligibility Criteria */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = '';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['text'] = 'Eligibility Criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['path'] = 'node/[field_eligibility_criteria-nid]';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  /* Field: Content: Award Ceremony */
  $handler->display->display_options['fields']['field_award_ceremony']['id'] = 'field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['table'] = 'field_data_field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['field'] = 'field_award_ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['label'] = '';
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['text'] = 'Award Ceremony';
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_award_ceremony']['alter']['path'] = 'node/[field_award_ceremony-nid]';
  $handler->display->display_options['fields']['field_award_ceremony']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_award_ceremony']['hide_empty'] = TRUE;
  /* Field: Content: Chairman's Award */
  $handler->display->display_options['fields']['field_chairman_s_award']['id'] = 'field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['table'] = 'field_data_field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['field'] = 'field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['label'] = '';
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['text'] = 'Chairman\'s Award';
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['path'] = 'node/[field_chairman_s_award-nid]';
  $handler->display->display_options['fields']['field_chairman_s_award']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chairman_s_award']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Resources Links */
  $handler = $view->new_display('block', 'Resources Links', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Chairman's Award */
  $handler->display->display_options['fields']['field_chairman_s_award']['id'] = 'field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['table'] = 'field_data_field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['field'] = 'field_chairman_s_award';
  $handler->display->display_options['fields']['field_chairman_s_award']['label'] = '';
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['text'] = 'Chairman\'s Award';
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['alter']['path'] = 'node/[field_chairman_s_award-nid]';
  $handler->display->display_options['fields']['field_chairman_s_award']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chairman_s_award']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_s_award']['type'] = 'node_reference_nid';
  /* Field: Content: Submission Procedure */
  $handler->display->display_options['fields']['field_submission_procedure']['id'] = 'field_submission_procedure';
  $handler->display->display_options['fields']['field_submission_procedure']['table'] = 'field_data_field_submission_procedure';
  $handler->display->display_options['fields']['field_submission_procedure']['field'] = 'field_submission_procedure';
  $handler->display->display_options['fields']['field_submission_procedure']['label'] = '';
  $handler->display->display_options['fields']['field_submission_procedure']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_submission_procedure']['alter']['text'] = 'Submission Procedure';
  $handler->display->display_options['fields']['field_submission_procedure']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_submission_procedure']['alter']['path'] = 'node/[field_submission_procedure-nid]';
  $handler->display->display_options['fields']['field_submission_procedure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_submission_procedure']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_submission_procedure']['type'] = 'node_reference_nid';
  /* Field: Content: Review + Selection Procedure */
  $handler->display->display_options['fields']['field_review_selection_procedure']['id'] = 'field_review_selection_procedure';
  $handler->display->display_options['fields']['field_review_selection_procedure']['table'] = 'field_data_field_review_selection_procedure';
  $handler->display->display_options['fields']['field_review_selection_procedure']['field'] = 'field_review_selection_procedure';
  $handler->display->display_options['fields']['field_review_selection_procedure']['label'] = '';
  $handler->display->display_options['fields']['field_review_selection_procedure']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_selection_procedure']['alter']['text'] = 'Review + Selection Procedure';
  $handler->display->display_options['fields']['field_review_selection_procedure']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_review_selection_procedure']['alter']['path'] = 'node/[field_review_selection_procedure-nid]';
  $handler->display->display_options['fields']['field_review_selection_procedure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_selection_procedure']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_review_selection_procedure']['type'] = 'node_reference_nid';
  $translatables['award_cycle'] = array(
    t('Master'),
    t('Previous Cycles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('About latest Cycle'),
    t('Shortlist for this cycle has not yet been announced.'),
    t('term from field_cycle_year'),
    t('Shortlisted Projects'),
    t('.'),
    t('Master Jury'),
    t('Steering Committee'),
    t('Calendar'),
    t('Eligibility Criteria'),
    t('Press Materials'),
    t('Award Ceremony'),
    t('Chairman\'s Award'),
    t('About this Cycle'),
    t('All'),
    t('About this Cycle - People Listing'),
    t('News'),
    t('Resources Links'),
    t('Submission Procedure'),
    t('Review + Selection Procedure'),
  );
  $export['award_cycle'] = $view;

  $view = new view();
  $view->name = 'award_cycle_news';
  $view->description = '';
  $view->tag = 'press center';
  $view->base_table = 'search_api_index_akdn';
  $view->human_name = 'Award Cycle News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Speeches';
  $handler->display->display_options['css_class'] = 'akdn-solr-listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_short_title' => 'field_short_title',
    'body_summary' => 'body_summary',
    'nothing' => 'nothing',
  );
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Award Cycle News */
  $handler = $view->new_display('page', 'Award Cycle News', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['display_description'] = 'Award Cycle News';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image Uri for nodes [event/article/publication/speech/gallery/video] */
  $handler->display->display_options['fields']['image_public_uri']['id'] = 'image_public_uri';
  $handler->display->display_options['fields']['image_public_uri']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['image_public_uri']['field'] = 'image_public_uri';
  $handler->display->display_options['fields']['image_public_uri']['label'] = '';
  $handler->display->display_options['fields']['image_public_uri']['element_class'] = 'akdn-solr-img-link';
  $handler->display->display_options['fields']['image_public_uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['image_public_uri']['link_to_entity'] = 0;
  /* Field: Indexed Node: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_short_title']['alter']['link_class'] = 'akdn-solr-short-link';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '| More';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'akdn-solr-more-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_publish_date']['element_class'] = 'akdn-solr-date-link';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'akdn-solr-date-link';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Type of the Node */
  $handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['label'] = '';
  $handler->display->display_options['fields']['entity_type']['element_class'] = 'akdn-solr-type-of-node';
  $handler->display->display_options['fields']['entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_type']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Time of Event Start/Article,publication,podcast,speech,gallery,project Publish */
  $handler->display->display_options['sorts']['event_date_start_time']['id'] = 'event_date_start_time';
  $handler->display->display_options['sorts']['event_date_start_time']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['sorts']['event_date_start_time']['field'] = 'event_date_start_time';
  $handler->display->display_options['sorts']['event_date_start_time']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Cycle Year: Term ID (indexed) */
  $handler->display->display_options['arguments']['field_cycle_year_tid']['id'] = 'field_cycle_year_tid';
  $handler->display->display_options['arguments']['field_cycle_year_tid']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['arguments']['field_cycle_year_tid']['field'] = 'field_cycle_year_tid';
  $handler->display->display_options['arguments']['field_cycle_year_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_cycle_year_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_cycle_year_tid']['default_argument_options']['code'] = 'return arg(1);';
  $handler->display->display_options['arguments']['field_cycle_year_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cycle_year_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_cycle_year_tid']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'event' => 'event',
    'gallery' => 'gallery',
    'podcast' => 'podcast',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'award-cycle/%/news';
  $translatables['award_cycle_news'] = array(
    t('Master'),
    t('Recent Speeches'),
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
    t('Node ID'),
    t('.'),
    t(','),
    t('Award Cycle News'),
    t('News'),
    t('No results found!'),
    t('| More'),
    t('All'),
  );
  $export['award_cycle_news'] = $view;

  $view = new view();
  $view->name = 'people_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'listing-page-views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php $term_explode = explode(\'/\',$_SERVER["REQUEST_URI"]);
$node_id = array_pop($term_explode);
$node = node_load($node_id);
print \'<h2><a href="/node/\'.$node_id.\'">\'.$node->title.\'</a>: Master Jury</h2>\';
?>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_steering_committee_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_steering_committee_nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['relationship'] = 'field_steering_committee_nid';
  $handler->display->display_options['fields']['field_person_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_image']['alter']['text'] = '<div class="pc-listing-img">
	[field_person_image]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-date">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>';
  $handler->display->display_options['fields']['field_person_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['element_wrapper_class'] = 'listing-page-views-image';
  $handler->display->display_options['fields']['field_person_image']['empty'] = '<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-date">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a>
	</div>
</div>';
  $handler->display->display_options['fields']['field_person_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$node_url = explode(\'/\', drupal_get_path_alias(\'node/\'.arg(2)));
$node_id = array_pop($node_url);
return $node_id;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'award_cycle' => 'award_cycle',
  );

  /* Display: Master Jury */
  $handler = $view->new_display('page', 'Master Jury', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php $term_explode = explode(\'/\',$_SERVER["REQUEST_URI"]);
$node_id = array_pop($term_explode);
$node = node_load($node_id);
print \'<h2><a href="/node/\'.$node_id.\'">\'.$node->title.\'</a>: Master Jury</h2>\';
?>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Master Jury (field_master_jury) */
  $handler->display->display_options['relationships']['field_master_jury_nid']['id'] = 'field_master_jury_nid';
  $handler->display->display_options['relationships']['field_master_jury_nid']['table'] = 'field_data_field_master_jury';
  $handler->display->display_options['relationships']['field_master_jury_nid']['field'] = 'field_master_jury_nid';
  $handler->display->display_options['relationships']['field_master_jury_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_master_jury_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_master_jury_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_master_jury_nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['relationship'] = 'field_master_jury_nid';
  $handler->display->display_options['fields']['field_person_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_image']['alter']['text'] = '<div class="pc-listing-img">
	[field_person_image]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-people-listing-body">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>';
  $handler->display->display_options['fields']['field_person_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['element_wrapper_class'] = 'listing-page-views-image';
  $handler->display->display_options['fields']['field_person_image']['empty'] = '<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-people-listing-body">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>';
  $handler->display->display_options['fields']['field_person_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$node_url = explode(\'/\', drupal_lookup_path(\'source\',\'award-cycle/2010-cycle\'));
$node_id = array_pop($node_url);
return $node_id;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'award_cycle' => 'award_cycle',
  );
  $handler->display->display_options['path'] = 'architecture/master-jury';

  /* Display: Steering Committee */
  $handler = $view->new_display('page', 'Steering Committee', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php $term_explode = explode(\'/\',$_SERVER["REQUEST_URI"]);
$node_id = array_pop($term_explode);
$node = node_load($node_id);
print \'<h2><a href="/node/\'.$node_id.\'">\'.$node->title.\'</a>: Steering Committee</h2>\';
?>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Steering Committee (field_steering_committee) */
  $handler->display->display_options['relationships']['field_steering_committee_nid']['id'] = 'field_steering_committee_nid';
  $handler->display->display_options['relationships']['field_steering_committee_nid']['table'] = 'field_data_field_steering_committee';
  $handler->display->display_options['relationships']['field_steering_committee_nid']['field'] = 'field_steering_committee_nid';
  $handler->display->display_options['relationships']['field_steering_committee_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_steering_committee_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_steering_committee_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_steering_committee_nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['relationship'] = 'field_steering_committee_nid';
  $handler->display->display_options['fields']['field_person_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_image']['alter']['text'] = '<div class="pc-listing-img">
	[field_person_image]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-people-listing-body">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>';
  $handler->display->display_options['fields']['field_person_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['element_wrapper_class'] = 'listing-page-views-image';
  $handler->display->display_options['fields']['field_person_image']['empty'] = '<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-people-listing-body">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>';
  $handler->display->display_options['fields']['field_person_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['path'] = 'architecture/steering-committee';
  $translatables['people_listing'] = array(
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
    t('<div class="pc-listing-img">
	[field_person_image]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-date">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>'),
    t('<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-date">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a>
	</div>
</div>'),
    t('All'),
    t('Master Jury'),
    t('field_master_jury'),
    t('<div class="pc-listing-img">
	[field_person_image]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-people-listing-body">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>'),
    t('<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[title]</a>
	</div>
	<div class="pc-people-listing-body">
		[body]&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
</div>'),
    t('Steering Committee'),
    t('field_steering_committee'),
  );
  $export['people_listing'] = $view;

  $view = new view();
  $view->name = 'person_type';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Person Type';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Person Type';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'person' => 'person',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'person-type';

  /* Display: Master Jury References */
  $handler = $view->new_display('references', 'Master Jury References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['value'] = array(
    0 => '7667',
  );
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';

  /* Display: Steering Committee */
  $handler = $view->new_display('references', 'Steering Committee', 'references_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Person Type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_tid']['id'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_tid']['field'] = 'field_person_type_tid';
  $handler->display->display_options['filters']['field_person_type_tid']['value'] = array(
    0 => '7668',
  );
  $handler->display->display_options['filters']['field_person_type_tid']['vocabulary'] = 'person_type';
  $translatables['person_type'] = array(
    t('Master'),
    t('Person Type'),
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
    t('Page'),
    t('Master Jury References'),
    t('Steering Committee'),
  );
  $export['person_type'] = $view;

  return $export;
}

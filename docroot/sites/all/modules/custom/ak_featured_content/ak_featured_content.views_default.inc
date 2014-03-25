<?php
/**
 * @file
 * ak_featured_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_featured_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Banner Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'banner-slideshow-views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="slider-caption"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_content' => 'featured_content',
    'featured_artefacts' => 0,
    'featured_articles' => 0,
    'featured_exhibition' => 0,
  );
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '50',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '104',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[field_feature_image]</div>
<div class="slide-text"><h3>[title]</h3>
[field_caption]
[field_feature_link] 
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="slide-pager">•</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_content' => 'featured_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'article' => 'article',
    'event' => 'event',
    'gallery' => 'gallery',
    'podcast' => 'podcast',
    'project' => 'project',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 2;

  /* Display: Flexslider Block */
  $handler = $view->new_display('block', 'Flexslider Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'php_1';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'type' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'php' => 0,
    'php_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'type' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'php' => 0,
    'php_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_feature_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption_1']['id'] = 'field_image_caption_1';
  $handler->display->display_options['fields']['field_image_caption_1']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['relationship'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_1']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Caption Custom PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Caption Custom PHP';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if (empty($array)) {
  if ($data->node_type == \'project\') {
    $array = $data->field_field_image_caption_1;
  }
  else {
    $array = $data->field_field_image_caption;
  }
}
if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: &#039;More&#039; Link Custom PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '\'More\' Link Custom PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $node_path = drupal_get_path_alias(\'node/\' . $data->nid);
  $url =  " <a href=\'/$node_path\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php][field_feature_image][field_project_image]</div></a>
<div class="slide-text">
[php_1]
[php]| More </a>
</div>

';
  $handler->display->display_options['fields']['nothing']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_content' => 'featured_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'article' => 'article',
    'event' => 'event',
    'gallery' => 'gallery',
    'podcast' => 'podcast',
    'project' => 'project',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 2;

  /* Display: Flexslider A/G/FA Block */
  $handler = $view->new_display('block', 'Flexslider A/G/FA Block', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'featured_slideshow:block_8';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => 'content',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '50',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $node_path = drupal_get_path_alias(\'node/\' . $data->nid);
  $url =  " <a href=\'/$node_path\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if (empty($array)) {
  if ($data->node_type == \'project\') {
    $array = $data->field_field_image_caption_1;
  }
  else {
    $array = $data->field_field_image_caption;
  }
}
if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['text'] = '[php_1]';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '104',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['alter']['text'] = '[php]| More </a>';
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php][field_project_image][field_feature_image]</a></div>
<div class="slide-text"><h3>[title]</h3>
[php_1]
[php]| More </a>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="slide-pager">•</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'nat';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'featured_content' => 'featured_content',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'event' => 'event',
    'gallery' => 'gallery',
    'podcast' => 'podcast',
    'project' => 'project',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 2;

  /* Display: Flexslider Manual A/G/FA Block */
  $handler = $view->new_display('block', 'Flexslider Manual A/G/FA Block', 'block_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'php_1';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'type' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'php' => 0,
    'php_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'type' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'php' => 0,
    'php_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Uncle';
  $handler->display->display_options['footer']['area']['content'] = '<div class="slider-caption"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Banner Item Content (field_featured_content_nodes) */
  $handler->display->display_options['relationships']['field_featured_content_nodes_nid']['id'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['relationships']['field_featured_content_nodes_nid']['table'] = 'field_data_field_featured_content_nodes';
  $handler->display->display_options['relationships']['field_featured_content_nodes_nid']['field'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['relationships']['field_featured_content_nodes_nid']['label'] = 'field_banner_item_nodes';
  $handler->display->display_options['relationships']['field_featured_content_nodes_nid']['delta'] = '-1';
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_feature_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption_1']['id'] = 'field_image_caption_1';
  $handler->display->display_options['fields']['field_image_caption_1']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['relationship'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_1']['type'] = 'text_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php

if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = "<a href=\'/".drupal_get_path_alias($data->field_field_feature_link[0][\'raw\'][\'url\'])."\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/".drupal_get_path_alias(\'node/\'.$data->nid)."\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: &#039;More&#039; Link Custom PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '\'More\' Link Custom PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = " <a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $url = " <a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Caption Custom PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Caption Custom PHP';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if (empty($array)) {
  if ($data->node_type == \'project\') {
    $array = $data->field_field_image_caption_1;
  }
  else {
    $array = $data->field_field_image_caption;
  }
}
if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_feature_image][field_project_image]</a></div>
<div class="slide-text">
<h3>[php][title_field]</a></h3>
[php_1]
[php]| More </a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'article' => 'article',
    'event' => 'event',
    'gallery' => 'gallery',
    'podcast' => 'podcast',
    'project' => 'project',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_featured_content_nodes_nid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'featured_content' => 'featured_content',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    'all' => 'all',
    0 => '0',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Flexslider Project Block */
  $handler = $view->new_display('block', 'Flexslider Project Block', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'php';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_project_image' => 0,
    'field_project_image_caption' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_feature_link' => 0,
    'php' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_project_image' => 0,
    'field_project_image_caption' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_feature_link' => 0,
    'php' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="slider-caption"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_project_image_caption']['id'] = 'field_project_image_caption';
  $handler->display->display_options['fields']['field_project_image_caption']['table'] = 'field_data_field_project_image_caption';
  $handler->display->display_options['fields']['field_project_image_caption']['field'] = 'field_project_image_caption';
  $handler->display->display_options['fields']['field_project_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_project_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_project_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_project_image_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Custom Caption PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Custom Caption PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$array = $data->field_field_project_image_caption;
if (empty($array)) {
  $array = $data->field_field_image_caption;
}

if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[field_project_image]</div>
<div class="slide-text">
[php]
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;

  /* Display: Flexslider Hub Page Block */
  $handler = $view->new_display('block', 'Flexslider Hub Page Block', 'block_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = " <a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $url = " <a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[field_feature_image]</div>
<div class="slide-text"><h3>[php][title_field]</a></h3>
[field_caption]
[php]| More </a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'nat';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'agency' => 'agency',
    'geography' => 'geography',
  );
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'event' => 'event',
    'gallery' => 'gallery',
    'podcast' => 'podcast',
    'project' => 'project',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;

  /* Display: Flexslider Press Centre Block */
  $handler = $view->new_display('block', 'Flexslider Press Centre Block', 'block_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'press_centre' => 'press_centre',
    'featured_content' => 0,
    'agency_listing_page_publications' => 0,
  );
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => 'content',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_feature_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption_1']['id'] = 'field_image_caption_1';
  $handler->display->display_options['fields']['field_image_caption_1']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['relationship'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_1']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: &#039;More&#039; Link Custom PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '\'More\' Link Custom PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = " <a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $node_path = drupal_get_path_alias(\'node/\' . $data->nid);
  $url = " <a href=\'/$node_path\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Caption Custom PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Caption Custom PHP';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if (empty($array)) {
  if ($data->node_type == \'project\') {
    $array = $data->field_field_image_caption_1;
  }
  else {
    $array = $data->field_field_image_caption;
  }
}

if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[field_feature_image][field_project_image]</div>
<div class="slide-text">
[php_1]
[php]| More </a>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';

  /* Display: About Us Slideshow */
  $handler = $view->new_display('block', 'About Us Slideshow', 'block_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'php_1';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'type' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'php' => 0,
    'php_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'type' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'php' => 0,
    'php_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'about_us_slides' => 'about_us_slides',
    'featured_content' => 0,
    'agency_listing_page_publications' => 0,
    'press_centre' => 0,
    'speech_themes' => 0,
  );
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => 'content',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_feature_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption_1']['id'] = 'field_image_caption_1';
  $handler->display->display_options['fields']['field_image_caption_1']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['relationship'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_1']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: &#039;More&#039; Link Custom PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '\'More\' Link Custom PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
  $node_path = drupal_get_path_alias(\'node/\' . $data->field_field_feature_link[0][\'raw\'][\'url\']);
  $url = " <a href=\'/$node_path\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $node_path = drupal_get_path_alias(\'node/\' . $data->nid);
  $url = " <a href=\'/$node_path\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Caption Custom PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Caption Custom PHP';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if (empty($array)) {
  if ($data->node_type == \'project\') {
    $array = $data->field_field_image_caption_1;
  }
  else {
    $array = $data->field_field_image_caption;
  }
}

if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[field_feature_image][field_project_image]</div>
<div class="slide-text">
[php_1]
[php]| More </a>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';

  /* Display: AKAA Flexslider Block */
  $handler = $view->new_display('block', 'AKAA Flexslider Block', 'block_8');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'php_1';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'type' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'php' => 0,
    'php_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'type' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'php' => 0,
    'php_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'akaa_home_page_slideshow' => 'akaa_home_page_slideshow',
    'featured_content' => 0,
    'agency_listing_page_publications' => 0,
    'press_centre' => 0,
    'about_us_slides' => 0,
    'speech_themes' => 0,
    'thematic_area' => 0,
  );
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_feature_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Caption Custom PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Caption Custom PHP';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if (empty($array)) {
  if ($data->node_type == \'project\') {
    $array = $data->field_field_image_caption_1;
  }
  else {
    $array = $data->field_field_image_caption;
  }
}

if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: &#039;More&#039; Link Custom PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '\'More\' Link Custom PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = " <a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $node_path = drupal_get_path_alias(\'node/\' . $data->nid);
  $url =  " <a href=\'/$node_path\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php][field_feature_image]</a></div>
<div class="slide-text">
[php_1]
[php]| More </a>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_content' => 'featured_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'architecture_project' => 'architecture_project',
    'article' => 'article',
    'event' => 'event',
    'gallery' => 'gallery',
    'podcast' => 'podcast',
    'project' => 'project',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 2;

  /* Display: AKAA Cycle Auto Block */
  $handler = $view->new_display('block', 'AKAA Cycle Auto Block', 'block_9');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'featured_slideshow:block_8';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  /* Relationship: Content: Cycle Year (field_cycle_year) */
  $handler->display->display_options['relationships']['field_cycle_year_tid']['id'] = 'field_cycle_year_tid';
  $handler->display->display_options['relationships']['field_cycle_year_tid']['table'] = 'field_data_field_cycle_year';
  $handler->display->display_options['relationships']['field_cycle_year_tid']['field'] = 'field_cycle_year_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['alter']['path'] = '/test';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_feature_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: &#039;More&#039; Link Custom PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '\'More\' Link Custom PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = " <a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $url = " <a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Caption Custom PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Caption Custom PHP';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if (empty($array)) {
  if ($data->node_type == \'project\') {
    $array = $data->field_field_image_caption_1;
  }
  else {
    $array = $data->field_field_caption;
  }
}

if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Image Link';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php

if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = "<a href=\'/".drupal_get_path_alias($data->field_field_feature_link[0][\'raw\'][\'url\'])."\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/".drupal_get_path_alias(\'node/\'.$data->nid)."\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_feature_image]</a></div>
<div class="slide-text">
<h3>[php][title_field]</a></h3>
[php_1]
[php]| More </a>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Award Cycle (field_award_cycle) */
  $handler->display->display_options['arguments']['field_award_cycle_nid']['id'] = 'field_award_cycle_nid';
  $handler->display->display_options['arguments']['field_award_cycle_nid']['table'] = 'field_data_field_award_cycle';
  $handler->display->display_options['arguments']['field_award_cycle_nid']['field'] = 'field_award_cycle_nid';
  $handler->display->display_options['arguments']['field_award_cycle_nid']['relationship'] = 'field_cycle_year_tid';
  $handler->display->display_options['arguments']['field_award_cycle_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_award_cycle_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_award_cycle_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_award_cycle_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_award_cycle_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value_1']['id'] = 'field_create_featured_content_value_1';
  $handler->display->display_options['filters']['field_create_featured_content_value_1']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value_1']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value_1']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Winner? (field_winner) */
  $handler->display->display_options['filters']['field_winner_value']['id'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['table'] = 'field_data_field_winner';
  $handler->display->display_options['filters']['field_winner_value']['field'] = 'field_winner_value';
  $handler->display->display_options['filters']['field_winner_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_winner_value']['group'] = 1;

  /* Display: AKAA Cycle Manual Block */
  $handler = $view->new_display('block', 'AKAA Cycle Manual Block', 'block_10');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_feature_link' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'featured_slideshow:block_8';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['alter']['path'] = '/test';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_feature_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: &#039;More&#039; Link Custom PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '\'More\' Link Custom PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = " <a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { print \' <a class="banner-no-link">\'; }
} else {
  $url = " <a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Caption Custom PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Caption Custom PHP';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if (empty($array)) {
  if ($data->node_type == \'project\') {
    $array = $data->field_field_image_caption_1;
  }
  else {
    $array = $data->field_field_caption;
  }
}

if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Image Link';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php

if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = "<a href=\'/".drupal_get_path_alias($data->field_field_feature_link[0][\'raw\'][\'url\'])."\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/".drupal_get_path_alias(\'node/\'.$data->nid)."\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_project_image]</a></div>
<div class="slide-text">
<h3>[php][title_field]</a></h3>
[php_1]
[php]| More </a>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption_1']['id'] = 'field_caption_1';
  $handler->display->display_options['fields']['field_caption_1']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption_1']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: NAT: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'nat';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'featured_content' => 'featured_content',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'architecture_project' => 'architecture_project',
    'article' => 'article',
    'event' => 'event',
    'gallery' => 'gallery',
    'podcast' => 'podcast',
    'project' => 'project',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 2;

  /* Display: AKAA Project Block */
  $handler = $view->new_display('block', 'AKAA Project Block', 'block_11');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'php_1';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'type' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'php_1' => 0,
    'php' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_feature_image' => 0,
    'field_project_image' => 0,
    'title_field' => 0,
    'field_caption' => 0,
    'field_image_caption' => 0,
    'field_image_caption_1' => 0,
    'type' => 0,
    'field_feature_link' => 0,
    'view_node' => 0,
    'php_1' => 0,
    'php' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'featured_slideshow:block_8';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  /* Relationship: Content: Slideshow Image (field_feature_image:fid) */
  $handler->display->display_options['relationships']['field_feature_image_fid']['id'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['relationships']['field_feature_image_fid']['field'] = 'field_feature_image_fid';
  $handler->display->display_options['relationships']['field_feature_image_fid']['label'] = 'file_feature_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image_1']['id'] = 'field_feature_image_1';
  $handler->display->display_options['fields']['field_feature_image_1']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image_1']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_feature_image_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['alter']['path'] = '[field_feature_image_1]';
  $handler->display->display_options['fields']['field_feature_image']['alter']['rel'] = 'project-images';
  $handler->display->display_options['fields']['field_feature_image']['alter']['link_class'] = 'colorbox';
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '979',
      'style_1' => 'featured_content_narrow',
      'breakpoint_2' => '739',
      'style_2' => 'featured_content_mobile',
      'breakpoint_3' => '479',
      'style_3' => 'featured_content_mobile',
      'breakpoint_4' => '319',
      'style_4' => 'featured_content_mobile',
      'breakpoint_5' => '',
      'style_5' => '',
      'max_style' => 'featured_content',
      'fallback_style' => 'featured_content',
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['alter']['path'] = 'sites/default/files/Projects/Calendars/calendar_dec2007_0.jpg';
  $handler->display->display_options['fields']['field_project_image']['alter']['rel'] = 'gallery';
  $handler->display->display_options['fields']['field_project_image']['alter']['link_class'] = 'colorbox init-colorbox-processed cboxElement';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '979',
      'style_1' => 'featured_content_narrow',
      'breakpoint_2' => '739',
      'style_2' => 'featured_content_mobile',
      'breakpoint_3' => '479',
      'style_3' => 'featured_content_mobile',
      'breakpoint_4' => '319',
      'style_4' => 'featured_content_mobile',
      'breakpoint_5' => '',
      'style_5' => '',
      'max_style' => 'featured_content',
      'fallback_style' => 'featured_content',
    ),
  );
  $handler->display->display_options['fields']['field_project_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['relationship'] = 'field_feature_image_fid';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption_1']['id'] = 'field_image_caption_1';
  $handler->display->display_options['fields']['field_image_caption_1']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['relationship'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '104';
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_1']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feature_link']['id'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['table'] = 'field_data_field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['field'] = 'field_feature_link';
  $handler->display->display_options['fields']['field_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_feature_link']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Caption Custom PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Caption Custom PHP';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$array = $data->field_field_caption;
if ($data->field_data_field_project_image_field_project_image_fid) {
    $array = $data->field_field_image_caption_1;
}

if (isset($array[0][\'rendered\'][\'#markup\'])) {
  $val = $array[0][\'rendered\'][\'#markup\'];
  if (strlen($val) <= 125) {
  $value = rtrim($val) . "...";
  } else {
    $pos = strpos($val, \' \', 125);
    $value = substr($val,0,$pos) . "...";
  } 
}
else {
  $value = \'\';
}
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: &#039;More&#039; Link Custom PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '\'More\' Link Custom PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$image = $data->_field_data[\'nid\'][\'entity\']->field_project_image[\'und\'][$data->field_data_field_project_image_delta];
$link = \'<a href="\'.image_style_url(\'download_max\',$image[\'uri\']).\'" title="\'.check_markup($image[\'field_image_caption\'][\'und\'][0][\'value\'], \'filtered_html\').\'" class="colorbox cboxElement" rel="gallery">\';

print $link;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php][field_project_image]</a></div>
<div class="slide-text">
[php_1]
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;
  /* Filter criterion: Content: Image (field_project_image:alt) */
  $handler->display->display_options['filters']['field_project_image_alt']['id'] = 'field_project_image_alt';
  $handler->display->display_options['filters']['field_project_image_alt']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['filters']['field_project_image_alt']['field'] = 'field_project_image_alt';
  $handler->display->display_options['filters']['field_project_image_alt']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_project_image_alt']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'architecture_project' => 'architecture_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;

  /* Display: Additional Project Images */
  $handler = $view->new_display('block', 'Additional Project Images', 'block_12');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Image (field_project_image:fid) */
  $handler->display->display_options['relationships']['field_project_image_fid']['id'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['relationships']['field_project_image_fid']['field'] = 'field_project_image_fid';
  $handler->display->display_options['relationships']['field_project_image_fid']['label'] = 'file_project_image';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['alter']['text'] = '<a href="[field_project_image]" rel="gallery" class="colorbox"></a>';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_image']['separator'] = ' ';
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
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $translatables['featured_slideshow'] = array(
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
    t('<div class="slider-caption"></div>'),
    t('queue'),
    t('file_project_image'),
    t('file_feature_image'),
    t('<div class="slide">[field_feature_image]</div>
<div class="slide-text"><h3>[title]</h3>
[field_caption]
[field_feature_link] 
</div>

'),
    t('<div class="slide-pager">•</div>'),
    t('Flexslider Block'),
    t('<div class="slide">[php][field_feature_image][field_project_image]</div></a>
<div class="slide-text">
[php_1]
[php]| More </a>
</div>

'),
    t('Flexslider A/G/FA Block'),
    t('[php_1]'),
    t('[php]| More </a>'),
    t('<div class="slide">[php][field_project_image][field_feature_image]</a></div>
<div class="slide-text"><h3>[title]</h3>
[php_1]
[php]| More </a>
</div>

'),
    t('All'),
    t('Flexslider Manual A/G/FA Block'),
    t('Uncle'),
    t('field_banner_item_nodes'),
    t('PHP'),
    t('<div class="slide">[php_2][field_feature_image][field_project_image]</a></div>
<div class="slide-text">
<h3>[php][title_field]</a></h3>
[php_1]
[php]| More </a>
</div>'),
    t('Block'),
    t('Flexslider Project Block'),
    t('<div class="slide">[field_project_image]</div>
<div class="slide-text">
[php]
</div>

'),
    t('Flexslider Hub Page Block'),
    t('<div class="slide">[field_feature_image]</div>
<div class="slide-text"><h3>[php][title_field]</a></h3>
[field_caption]
[php]| More </a>
</div>'),
    t('Flexslider Press Centre Block'),
    t('<div class="slide">[field_feature_image][field_project_image]</div>
<div class="slide-text">
[php_1]
[php]| More </a>
</div>

'),
    t('About Us Slideshow'),
    t('AKAA Flexslider Block'),
    t('<div class="slide">[php][field_feature_image]</a></div>
<div class="slide-text">
[php_1]
[php]| More </a>
</div>

'),
    t('AKAA Cycle Auto Block'),
    t('term from field_cycle_year'),
    t('Image Link'),
    t('<div class="slide">[php_2][field_feature_image]</a></div>
<div class="slide-text">
<h3>[php][title_field]</a></h3>
[php_1]
[php]| More </a>
</div>

'),
    t('AKAA Cycle Manual Block'),
    t('<div class="slide">[php_2][field_project_image]</a></div>
<div class="slide-text">
<h3>[php][title_field]</a></h3>
[php_1]
[php]| More </a>
</div>

'),
    t('AKAA Project Block'),
    t('<div class="slide">[php][field_project_image]</a></div>
<div class="slide-text">
[php_1]
</div>

'),
    t('Additional Project Images'),
    t('<a href="[field_project_image]" rel="gallery" class="colorbox"></a>'),
  );
  $export['featured_slideshow'] = $view;

  return $export;
}

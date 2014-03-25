<?php
/**
 * @file
 * ak_press_centre.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_press_centre_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_centre_listing_slideshows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Centre Listing Slideshows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'press-centre-listings banner-slideshow-views';
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
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'featured_slideshow:block_1';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_content' => 'featured_content',
    'press_releases' => 'press_releases',
    'agency_listing_page_publications' => 0,
    'press_centre' => 0,
  );
  /* Relationship: Content: Images (field_project_image:fid) */
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

  /* Display: Press Release Block */
  $handler = $view->new_display('block', 'Press Release Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Releases';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images (field_project_image:fid) */
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
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 0,
    'hide_alter_empty' => 0,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = '[title_field]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['field_caption']['alter']['strip_tags'] = TRUE;
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
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '125';
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
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>|&nbsp;More</a>";
    print $url;
  }
  else { return \'\'; }
} else {
  //$url = " <a href=\'node/{$data->nid}\'>|&nbsp;More</a>";
  $url = l(t(\'more\'), \'node/\'.$row->nid);
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
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
if ($data->node_type == "featured_content") {
  if (!empty($data->field_field_feature_link)) {
    $url = "<a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/node/{$data->nid}\'>";
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_feature_image][field_project_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[php_1]
[php]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    0 => '4',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: News Listing Block */
  $handler = $view->new_display('block', 'News Listing Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<h2 class="block-title">
<?php 
if ($_GET[\'q\'] == \'press-centre/in-the-media\') {
  print  \'In the Media\'; 
} else {
  print  \'News\';
}
?>
</h2>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images (field_project_image:fid) */
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
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = '[title_field]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['type'] = 'text_plain';
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption_1']['id'] = 'field_image_caption_1';
  $handler->display->display_options['fields']['field_image_caption_1']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['relationship'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '125';
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
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>|&nbsp;More</a>";
    print $url;
  }
  else { return \'\'; }
} else {
  //$url = " <a href=\'node/{$data->nid}\'>|&nbsp;More</a>";
   $url = l(t(\'more\'), \'node/\'.$row->nid);
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
    $url = "<a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_feature_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[php_1]
[php]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;

  /* Display: Speeches Listing Block */
  $handler = $view->new_display('block', 'Speeches Listing Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speeches, Interviews and Writings';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Speech Reference (field_speech_reference) */
  $handler->display->display_options['relationships']['field_speech_reference_nid']['id'] = 'field_speech_reference_nid';
  $handler->display->display_options['relationships']['field_speech_reference_nid']['table'] = 'field_data_field_speech_reference';
  $handler->display->display_options['relationships']['field_speech_reference_nid']['field'] = 'field_speech_reference_nid';
  $handler->display->display_options['relationships']['field_speech_reference_nid']['delta'] = '-1';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_content' => 0,
    'agency_listing_page_publications' => 0,
    'press_centre' => 0,
    'about_us_slides' => 0,
    'speech_themes' => 0,
    'thematic_area' => 0,
    'akaa_home_page_slideshow' => 0,
    'about_us_left_listing' => 0,
    'about_us_paragraph' => 0,
    'speech_slideshow' => 0,
  );
  /* Relationship: Content: Image (field_speech_image:fid) */
  $handler->display->display_options['relationships']['field_speech_image_fid']['id'] = 'field_speech_image_fid';
  $handler->display->display_options['relationships']['field_speech_image_fid']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['relationships']['field_speech_image_fid']['field'] = 'field_speech_image_fid';
  $handler->display->display_options['relationships']['field_speech_image_fid']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_speech_image']['id'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['field'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_speech_image']['label'] = '';
  $handler->display->display_options['fields']['field_speech_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speech_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speech_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_speech_image']['settings'] = array(
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_speech_reference_nid';
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
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['settings'] = array(
    'trim_length' => '150',
  );
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
 $url = l(t(\'| More\'), \'node/\'.$row->nid);
 print $url;
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
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Image Link';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
 if ($data->node_field_data_field_speech_reference_nid) {
  $node_path = drupal_get_path_alias(\'node/\' . $data->node_field_data_field_speech_reference_nid );  
    $url = "<a class=\'speech-link\' href=\'/$node_path\'>";
  } else {
 $node_path = drupal_get_path_alias(\'node/\' . $data->nid );  
 $url = "<a href=\'/$node_path\'>";
  }
  print $url;
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_speech_location']['id'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['table'] = 'field_data_field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['field'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_speech_location']['label'] = '';
  $handler->display->display_options['fields']['field_speech_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speech_location']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['alter']['text'] = ', [field_publish_date]';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speech_speaker']['id'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['table'] = 'field_data_field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['field'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_speech_speaker']['label'] = '';
  $handler->display->display_options['fields']['field_speech_speaker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speech_speaker']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speech_speaker']['alter']['text'] = '[field_speech_speaker], ';
  $handler->display->display_options['fields']['field_speech_speaker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_speaker']['type'] = 'node_reference_plain';
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption_2']['id'] = 'field_image_caption_2';
  $handler->display->display_options['fields']['field_image_caption_2']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_2']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_2']['relationship'] = 'field_speech_image_fid';
  $handler->display->display_options['fields']['field_image_caption_2']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_2']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['field_image_caption_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_2']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_speech_image] </a></div>
<div class="slide-text">
<div class="speech-slider-caption"> [field_image_caption_2][php]</div>
<div class="slider-content">[php_2][body]</a><br />[title_field_1] — [field_speech_speaker][field_speech_location][field_publish_date]

</div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'speech_quote' => 'speech_quote',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;

  /* Display: Projects Listing Block */
  $handler = $view->new_display('block', 'Projects Listing Block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
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
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'projects_slider';
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
    'php_2' => 0,
    'body' => 0,
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
    'php_2' => 0,
    'body' => 0,
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="slider-caption"></div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images (field_project_image:fid) */
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
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['field_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  /* Field: File: Caption */
  $handler->display->display_options['fields']['field_image_caption_1']['id'] = 'field_image_caption_1';
  $handler->display->display_options['fields']['field_image_caption_1']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption_1']['relationship'] = 'field_project_image_fid';
  $handler->display->display_options['fields']['field_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '125';
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
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>|&nbsp;More</a>";
    print $url;
  }
  else { return \'\'; }
} else {
  //$url = " <a href=\'node/{$data->nid}\'>|&nbsp;More</a>";
  $url = l(t(\'more\'), \'node/\'.$row->nid);
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
    $url = "<a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '10',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_project_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[body]
[php]
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;

  /* Display: Galleries Listing Block */
  $handler = $view->new_display('block', 'Galleries Listing Block', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Galleries';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images (field_project_image:fid) */
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
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = '[title_field]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '125';
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
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>|&nbsp;More</a>";
    print $url;
  }
  else { return \'\'; }
} else {
  //$url = " <a href=\'node/{$data->nid}\'>|&nbsp;More</a>";
  $url = l(t(\'more\'), \'node/\'.$row->nid);
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
    $url = "<a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_feature_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[php_1]
[php]
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'gallery' => 'gallery',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;

  /* Display: Podcasts Listing Block */
  $handler = $view->new_display('block', 'Podcasts Listing Block', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images (field_project_image:fid) */
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
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = '[title_field]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '125';
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
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>|&nbsp;More</a>";
    print $url;
  }
  else { return \'\'; }
} else {
   //$url = " <a href=\'node/{$data->nid}\'>|&nbsp;More</a>";
    $url = l(t(\'more\'), \'node/\'.$row->nid);
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
    $url = "<a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_feature_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[php_1]
[php]
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'podcast' => 'podcast',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;

  /* Display: Events Listing Block */
  $handler = $view->new_display('block', 'Events Listing Block', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images (field_project_image:fid) */
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
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Slideshow Image */
  $handler->display->display_options['fields']['field_feature_image']['id'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['table'] = 'field_data_field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['field'] = 'field_feature_image';
  $handler->display->display_options['fields']['field_feature_image']['label'] = '';
  $handler->display->display_options['fields']['field_feature_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_feature_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = '[title_field]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '125';
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
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>|&nbsp;More</a>";
    print $url;
  }
  else { return \'\'; }
} else {
  //$url = " <a href=\'node/{$data->nid}\'>|&nbsp;More</a>";
  $url = l(t(\'more\'), \'node/\'.$row->nid);
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
    $url = "<a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_feature_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[php_1]
[php]
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra_1']['id'] = 'status_extra_1';
  $handler->display->display_options['filters']['status_extra_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra_1']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;

  /* Display: In the Media Block */
  $handler = $view->new_display('block', 'In the Media Block', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'In the Media';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Images (field_project_image:fid) */
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
  $handler->display->display_options['fields']['field_feature_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_feature_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 0,
    'hide_alter_empty' => 0,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 1,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 1,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
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
  $handler->display->display_options['fields']['field_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption']['alter']['max_length'] = '125';
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
  $handler->display->display_options['fields']['field_image_caption_1']['alter']['max_length'] = '125';
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
    $url = " <a href=\'{$data->field_field_feature_link[0][\'raw\'][\'url\']}\' target=\'_blank\'>|&nbsp;More</a>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = " <a href=\'node/{$data->nid}\'>|&nbsp;More</a>";
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
    $url = "<a href=\'/{$data->field_field_feature_link[0][\'raw\'][\'url\']}\'>";
    print $url;
  }
  else { return \'\'; }
} else {
  $url = "<a href=\'/node/{$data->nid}\'>";
  print $url;
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source_1']['id'] = 'field_media_source_1';
  $handler->display->display_options['fields']['field_media_source_1']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source_1']['type'] = 'link_plain';
  /* Field: Content: Media Source */
  $handler->display->display_options['fields']['field_media_source']['id'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['table'] = 'field_data_field_media_source';
  $handler->display->display_options['fields']['field_media_source']['field'] = 'field_media_source';
  $handler->display->display_options['fields']['field_media_source']['label'] = '';
  $handler->display->display_options['fields']['field_media_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_media_source']['alter']['text'] = '- [field_media_source]';
  $handler->display->display_options['fields']['field_media_source']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_media_source']['alter']['path'] = '[field_media_source_1] ';
  $handler->display->display_options['fields']['field_media_source']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_media_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_media_source']['type'] = 'link_title_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">[php_2][field_feature_image][field_project_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[field_media_source]
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Create Banner Item (field_create_featured_content) */
  $handler->display->display_options['filters']['field_create_featured_content_value']['id'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['table'] = 'field_data_field_create_featured_content';
  $handler->display->display_options['filters']['field_create_featured_content_value']['field'] = 'field_create_featured_content_value';
  $handler->display->display_options['filters']['field_create_featured_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_create_featured_content_value']['group'] = 1;
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    2611 => '2611',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $translatables['press_centre_listing_slideshows'] = array(
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
    t('Press Release Block'),
    t('Press Releases'),
    t('[field_short_title]'),
    t('[title_field]'),
    t('<div class="slide">[php_2][field_feature_image][field_project_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[php_1]
[php]
</div>'),
    t('News Listing Block'),
    t('Image Link'),
    t('<div class="slide">[php_2][field_feature_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[php_1]
[php]
</div>'),
    t('Speeches Listing Block'),
    t('Speeches, Interviews and Writings'),
    t('field_speech_reference'),
    t('image from field_speech_image'),
    t(', [field_publish_date]'),
    t('[field_speech_speaker], '),
    t('<div class="slide">[php_2][field_speech_image] </a></div>
<div class="slide-text">
<div class="speech-slider-caption"> [field_image_caption_2][php]</div>
<div class="slider-content">[php_2][body]</a><br />[title_field_1] — [field_speech_speaker][field_speech_location][field_publish_date]

</div>

</div>'),
    t('Projects Listing Block'),
    t('Projects'),
    t('<div class="slider-caption"></div>
'),
    t('<div class="slide">[php_2][field_project_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[body]
[php]
</div>

'),
    t('Nid'),
    t('Galleries Listing Block'),
    t('Galleries'),
    t('<div class="slide">[php_2][field_feature_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[php_1]
[php]
</div>

'),
    t('Podcasts Listing Block'),
    t('Videos'),
    t('Events Listing Block'),
    t('Events'),
    t('In the Media Block'),
    t('In the Media'),
    t('Media Source'),
    t('- [field_media_source]'),
    t('<div class="slide">[php_2][field_feature_image][field_project_image]</a></div>
<div class="slide-text">
<h3>[title_field]</h3>
[field_media_source]
</div>

'),
  );
  $export['press_centre_listing_slideshows'] = $view;

  return $export;
}

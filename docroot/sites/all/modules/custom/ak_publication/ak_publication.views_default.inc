<?php
/**
 * @file
 * ak_publication.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_publication_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all publications';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'publication' => 'publication',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = '';
  $handler->display->display_options['fields']['field_publication_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Short Title as Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Short Title as Link';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Agency Listings Block */
  $handler = $view->new_display('block', 'Agency Listings Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'filesize' => 'filesize',
    'extension' => 'extension',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Click on the links below to download brochures on AKDN Agencies:';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no publications are available at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'agency_listing_page_publications' => 'agency_listing_page_publications',
    'featured_content' => 0,
  );
  /* Relationship: Content: File (field_publication_file:fid) */
  $handler->display->display_options['relationships']['field_publication_file_fid']['id'] = 'field_publication_file_fid';
  $handler->display->display_options['relationships']['field_publication_file_fid']['table'] = 'field_data_field_publication_file';
  $handler->display->display_options['relationships']['field_publication_file_fid']['field'] = 'field_publication_file_fid';
  $handler->display->display_options['relationships']['field_publication_file_fid']['label'] = 'file_publication_file';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = '';
  $handler->display->display_options['fields']['field_publication_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => 'agency_listing_sidebar_publication_images',
    'image_link' => 'content',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Short Title as Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Short Title as Link';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_publication_file_fid';
  $handler->display->display_options['fields']['filesize']['label'] = 'File Size';
  /* Field: File: Extension */
  $handler->display->display_options['fields']['extension']['id'] = 'extension';
  $handler->display->display_options['fields']['extension']['table'] = 'file_managed';
  $handler->display->display_options['fields']['extension']['field'] = 'extension';
  $handler->display->display_options['fields']['extension']['relationship'] = 'field_publication_file_fid';
  $handler->display->display_options['fields']['extension']['label'] = '';
  $handler->display->display_options['fields']['extension']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['extension']['alter']['text'] = '([extension])';
  $handler->display->display_options['fields']['extension']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';

  /* Display: Publications Right Block */
  $handler = $view->new_display('block', 'Publications Right Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_project_links']['id'] = 'field_project_links';
  $handler->display->display_options['fields']['field_project_links']['table'] = 'field_data_field_project_links';
  $handler->display->display_options['fields']['field_project_links']['field'] = 'field_project_links';
  $handler->display->display_options['fields']['field_project_links']['label'] = 'Links';
  $handler->display->display_options['fields']['field_project_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_links']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_links']['multi_type'] = 'ul';
  /* Field: Content: Related Speeches */
  $handler->display->display_options['fields']['field_speeches_reference']['id'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['field'] = 'field_speeches_reference';
  $handler->display->display_options['fields']['field_speeches_reference']['label'] = 'Speeches';
  $handler->display->display_options['fields']['field_speeches_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speeches_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speeches_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speeches_reference']['multi_type'] = 'ul';
  /* Field: Content: Related Press Releases */
  $handler->display->display_options['fields']['field_press_reference']['id'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['field'] = 'field_press_reference';
  $handler->display->display_options['fields']['field_press_reference']['label'] = 'Press Releases';
  $handler->display->display_options['fields']['field_press_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_press_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_press_reference']['multi_type'] = 'ul';
  /* Field: Content: Related Events */
  $handler->display->display_options['fields']['field_events_reference']['id'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['field'] = 'field_events_reference';
  $handler->display->display_options['fields']['field_events_reference']['label'] = 'Events';
  $handler->display->display_options['fields']['field_events_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_events_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_events_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_events_reference']['multi_type'] = 'ul';
  /* Field: Content: Related Audio/Video */
  $handler->display->display_options['fields']['field_podcasts_reference']['id'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['field'] = 'field_podcasts_reference';
  $handler->display->display_options['fields']['field_podcasts_reference']['label'] = 'Audio/Video';
  $handler->display->display_options['fields']['field_podcasts_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcasts_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_podcasts_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_podcasts_reference']['multi_type'] = 'ul';
  /* Field: Content: Related Photos */
  $handler->display->display_options['fields']['field_photos_reference']['id'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['field'] = 'field_photos_reference';
  $handler->display->display_options['fields']['field_photos_reference']['label'] = 'Photos';
  $handler->display->display_options['fields']['field_photos_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_photos_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photos_reference']['multi_type'] = 'ul';
  /* Field: Content: Related In the Media */
  $handler->display->display_options['fields']['field_related_in_the_media']['id'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['field'] = 'field_related_in_the_media';
  $handler->display->display_options['fields']['field_related_in_the_media']['label'] = 'In the Media';
  $handler->display->display_options['fields']['field_related_in_the_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_in_the_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_in_the_media']['multi_type'] = 'ul';
  /* Field: Content: Related News */
  $handler->display->display_options['fields']['field_related_news']['id'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['fields']['field_related_news']['field'] = 'field_related_news';
  $handler->display->display_options['fields']['field_related_news']['label'] = 'News';
  $handler->display->display_options['fields']['field_related_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_news']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_news']['multi_type'] = 'ul';
  /* Field: Content: Related Projects */
  $handler->display->display_options['fields']['field_related_project']['id'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['fields']['field_related_project']['field'] = 'field_related_project';
  $handler->display->display_options['fields']['field_related_project']['label'] = 'Projects';
  $handler->display->display_options['fields']['field_related_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_project']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_project']['multi_type'] = 'ul';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['label'] = 'Publications';
  $handler->display->display_options['fields']['field_related_publications']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_publications']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_publications']['multi_type'] = 'ul';
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
    1 => 'AND',
    2 => 'OR',
  );
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Related In the Media (field_related_in_the_media) */
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['id'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['field'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['group'] = 2;
  /* Filter criterion: Content: Related News (field_related_news) */
  $handler->display->display_options['filters']['field_related_news_nid']['id'] = 'field_related_news_nid';
  $handler->display->display_options['filters']['field_related_news_nid']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['filters']['field_related_news_nid']['field'] = 'field_related_news_nid';
  $handler->display->display_options['filters']['field_related_news_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_news_nid']['group'] = 2;
  /* Filter criterion: Content: Related Publications (field_related_publications) */
  $handler->display->display_options['filters']['field_related_publications_nid']['id'] = 'field_related_publications_nid';
  $handler->display->display_options['filters']['field_related_publications_nid']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['filters']['field_related_publications_nid']['field'] = 'field_related_publications_nid';
  $handler->display->display_options['filters']['field_related_publications_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_publications_nid']['group'] = 2;
  /* Filter criterion: Content: Related Projects (field_related_project) */
  $handler->display->display_options['filters']['field_related_project_nid']['id'] = 'field_related_project_nid';
  $handler->display->display_options['filters']['field_related_project_nid']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['filters']['field_related_project_nid']['field'] = 'field_related_project_nid';
  $handler->display->display_options['filters']['field_related_project_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_project_nid']['group'] = 2;
  /* Filter criterion: Content: Related Links (field_project_links:url) */
  $handler->display->display_options['filters']['field_project_links_url']['id'] = 'field_project_links_url';
  $handler->display->display_options['filters']['field_project_links_url']['table'] = 'field_data_field_project_links';
  $handler->display->display_options['filters']['field_project_links_url']['field'] = 'field_project_links_url';
  $handler->display->display_options['filters']['field_project_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_project_links_url']['group'] = 2;
  /* Filter criterion: Content: Related Audio/Video (field_podcasts_reference) */
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['id'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['field'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['group'] = 2;
  /* Filter criterion: Content: Related Events (field_events_reference) */
  $handler->display->display_options['filters']['field_events_reference_nid']['id'] = 'field_events_reference_nid';
  $handler->display->display_options['filters']['field_events_reference_nid']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['filters']['field_events_reference_nid']['field'] = 'field_events_reference_nid';
  $handler->display->display_options['filters']['field_events_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_events_reference_nid']['group'] = 2;
  /* Filter criterion: Content: Related Photos (field_photos_reference) */
  $handler->display->display_options['filters']['field_photos_reference_nid']['id'] = 'field_photos_reference_nid';
  $handler->display->display_options['filters']['field_photos_reference_nid']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['filters']['field_photos_reference_nid']['field'] = 'field_photos_reference_nid';
  $handler->display->display_options['filters']['field_photos_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_photos_reference_nid']['group'] = 2;
  /* Filter criterion: Content: Related Press Releases (field_press_reference) */
  $handler->display->display_options['filters']['field_press_reference_nid']['id'] = 'field_press_reference_nid';
  $handler->display->display_options['filters']['field_press_reference_nid']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['filters']['field_press_reference_nid']['field'] = 'field_press_reference_nid';
  $handler->display->display_options['filters']['field_press_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_press_reference_nid']['group'] = 2;
  /* Filter criterion: Content: Related Speeches (field_speeches_reference) */
  $handler->display->display_options['filters']['field_speeches_reference_nid']['id'] = 'field_speeches_reference_nid';
  $handler->display->display_options['filters']['field_speeches_reference_nid']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['filters']['field_speeches_reference_nid']['field'] = 'field_speeches_reference_nid';
  $handler->display->display_options['filters']['field_speeches_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_speeches_reference_nid']['group'] = 2;

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;

  /* Display: AKAA Footer */
  $handler = $view->new_display('block', 'AKAA Footer', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Publication';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = '';
  $handler->display->display_options['fields']['field_publication_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => 'publication_listing_image',
    'image_link' => 'content',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Short Title as Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Short Title as Link';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
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
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '3881',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $translatables['publications'] = array(
    t('Master'),
    t('Publications'),
    t('View all publications'),
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
    t('Block'),
    t('more'),
    t('[field_short_title]'),
    t('Agency Listings Block'),
    t('Click on the links below to download brochures on AKDN Agencies:'),
    t('Sorry, no publications are available at this time.'),
    t('queue'),
    t('file_publication_file'),
    t('File Size'),
    t('([extension])'),
    t('Publications Right Block'),
    t('<none>'),
    t('Links'),
    t('Speeches'),
    t('Press Releases'),
    t('Events'),
    t('Audio/Video'),
    t('Photos'),
    t('In the Media'),
    t('News'),
    t('Projects'),
    t('All'),
    t('References'),
    t('AKAA Footer'),
    t('Recent Publication'),
  );
  $export['publications'] = $view;

  $view = new view();
  $view->name = 'show_media_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'show media info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'publication-detail-page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_publication_file_1']['id'] = 'field_publication_file_1';
  $handler->display->display_options['fields']['field_publication_file_1']['table'] = 'field_data_field_publication_file';
  $handler->display->display_options['fields']['field_publication_file_1']['field'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_publication_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_file_1']['type'] = 'file_url_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = '';
  $handler->display->display_options['fields']['field_publication_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_publication_image']['alter']['path'] = '[field_publication_file_1]';
  $handler->display->display_options['fields']['field_publication_image']['element_class'] = 'publication-image';
  $handler->display->display_options['fields']['field_publication_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => 'node_page_header',
    'image_link' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_publication_file']['id'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['table'] = 'field_data_field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['field'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['label'] = '';
  $handler->display->display_options['fields']['field_publication_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_file']['element_class'] = 'publication-download-link';
  $handler->display->display_options['fields']['field_publication_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_publication_file']['settings'] = array(
    'text' => 'Download',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'publication-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="publication-layout">
    <div class="left"> [field_publication_image] 
    [field_publication_file]
    </div>
   <div class="right">
       [body] 
   </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
    'publication' => 'publication',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_publication_file_1']['id'] = 'field_publication_file_1';
  $handler->display->display_options['fields']['field_publication_file_1']['table'] = 'field_data_field_publication_file';
  $handler->display->display_options['fields']['field_publication_file_1']['field'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_publication_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_file_1']['type'] = 'file_url_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = '';
  $handler->display->display_options['fields']['field_publication_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_publication_image']['alter']['path'] = '[field_publication_file_1]';
  $handler->display->display_options['fields']['field_publication_image']['element_class'] = 'publication-image';
  $handler->display->display_options['fields']['field_publication_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => 'node_page_header',
    'image_link' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_publication_file']['id'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['table'] = 'field_data_field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['field'] = 'field_publication_file';
  $handler->display->display_options['fields']['field_publication_file']['label'] = '';
  $handler->display->display_options['fields']['field_publication_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_file']['element_class'] = 'publication-download-link';
  $handler->display->display_options['fields']['field_publication_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_publication_file']['settings'] = array(
    'text' => 'Download',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'publication-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="publication-layout">
    <div class="left"> [field_publication_image] 
    [field_publication_file]
    </div>
   <div class="right">
       [body] 
   </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: ISBN */
  $handler->display->display_options['fields']['field_publication_isbn']['id'] = 'field_publication_isbn';
  $handler->display->display_options['fields']['field_publication_isbn']['table'] = 'field_data_field_publication_isbn';
  $handler->display->display_options['fields']['field_publication_isbn']['field'] = 'field_publication_isbn';
  $handler->display->display_options['fields']['field_publication_isbn']['delta_offset'] = '0';
  /* Field: Content: Purchase Link */
  $handler->display->display_options['fields']['field_publication_purchase_link']['id'] = 'field_publication_purchase_link';
  $handler->display->display_options['fields']['field_publication_purchase_link']['table'] = 'field_data_field_publication_purchase_link';
  $handler->display->display_options['fields']['field_publication_purchase_link']['field'] = 'field_publication_purchase_link';
  $handler->display->display_options['fields']['field_publication_purchase_link']['label'] = 'Purchase';
  $handler->display->display_options['fields']['field_publication_purchase_link']['click_sort_column'] = 'url';
  $translatables['show_media_info'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div id="publication-layout">
    <div class="left"> [field_publication_image] 
    [field_publication_file]
    </div>
   <div class="right">
       [body] 
   </div>
</div>'),
    t('All'),
    t('Block'),
    t('ISBN'),
    t('Purchase'),
  );
  $export['show_media_info'] = $view;

  return $export;
}

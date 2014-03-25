<?php
/**
 * @file
 * ak_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'galleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Galleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Galleries';
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
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'gallery' => 'gallery',
  );
  /* Filter criterion: Field: Agency (field_agency) */
  $handler->display->display_options['filters']['field_agency_tid']['id'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['table'] = 'field_data_field_agency';
  $handler->display->display_options['filters']['field_agency_tid']['field'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_agency_tid']['expose']['operator_id'] = 'field_agency_tid_op';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['label'] = 'Agency';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['operator'] = 'field_agency_tid_op';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['identifier'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_agency_tid']['vocabulary'] = 'agencies';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['filters']['field_country_tid']['field'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator_id'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['identifier'] = 'field_country_tid';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_focus_area_tid']['id'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['filters']['field_focus_area_tid']['field'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['operator_id'] = 'field_focus_area_tid_op';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['label'] = 'Focus Area';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['operator'] = 'field_focus_area_tid_op';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['identifier'] = 'field_focus_area_tid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'no results.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_gallery_images']['id'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['table'] = 'field_data_field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['field'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_images']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_gallery_images']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'node_title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_gallery_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_images']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_gallery_images']['separator'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
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
    'gallery' => 'gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'galleries/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Event (field_speech_event) */
  $handler->display->display_options['relationships']['field_speech_event_nid']['id'] = 'field_speech_event_nid';
  $handler->display->display_options['relationships']['field_speech_event_nid']['table'] = 'field_data_field_speech_event';
  $handler->display->display_options['relationships']['field_speech_event_nid']['field'] = 'field_speech_event_nid';
  $handler->display->display_options['relationships']['field_speech_event_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_speech_event_nid']['delta'] = '-1';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_gallery_event_node']['id'] = 'reverse_field_gallery_event_node';
  $handler->display->display_options['relationships']['reverse_field_gallery_event_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_gallery_event_node']['field'] = 'reverse_field_gallery_event_node';
  $handler->display->display_options['relationships']['reverse_field_gallery_event_node']['relationship'] = 'field_speech_event_nid';
  $handler->display->display_options['relationships']['reverse_field_gallery_event_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_gallery_images']['id'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['table'] = 'field_data_field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['field'] = 'field_gallery_images';
  $handler->display->display_options['fields']['field_gallery_images']['relationship'] = 'reverse_field_gallery_event_node';
  $handler->display->display_options['fields']['field_gallery_images']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_images']['settings'] = array(
    'image_style' => 'thumbnail_cropped',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_images']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_gallery_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_images']['separator'] = '';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_gallery_event_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Gallery';
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
    'speech' => 'speech',
  );

  /* Display: Gallery Right Block */
  $handler = $view->new_display('block', 'Gallery Right Block', 'block_2');
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_gallery_link']['id'] = 'field_gallery_link';
  $handler->display->display_options['fields']['field_gallery_link']['table'] = 'field_data_field_gallery_link';
  $handler->display->display_options['fields']['field_gallery_link']['field'] = 'field_gallery_link';
  $handler->display->display_options['fields']['field_gallery_link']['label'] = 'Links';
  $handler->display->display_options['fields']['field_gallery_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_gallery_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_link']['multi_type'] = 'ul';
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
    'gallery' => 'gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Related Projects (field_related_project) */
  $handler->display->display_options['filters']['field_related_project_nid']['id'] = 'field_related_project_nid';
  $handler->display->display_options['filters']['field_related_project_nid']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['filters']['field_related_project_nid']['field'] = 'field_related_project_nid';
  $handler->display->display_options['filters']['field_related_project_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_project_nid']['group'] = 2;
  /* Filter criterion: Content: Related Links (field_gallery_link:url) */
  $handler->display->display_options['filters']['field_gallery_link_url']['id'] = 'field_gallery_link_url';
  $handler->display->display_options['filters']['field_gallery_link_url']['table'] = 'field_data_field_gallery_link';
  $handler->display->display_options['filters']['field_gallery_link_url']['field'] = 'field_gallery_link_url';
  $handler->display->display_options['filters']['field_gallery_link_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_gallery_link_url']['group'] = 2;
  /* Filter criterion: Content: Related In the Media (field_related_in_the_media) */
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['id'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['field'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['group'] = 2;
  /* Filter criterion: Content: Related Audio/Video (field_podcasts_reference) */
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['id'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['field'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['group'] = 2;
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
  /* Filter criterion: Content: Related Events (field_events_reference) */
  $handler->display->display_options['filters']['field_events_reference_nid']['id'] = 'field_events_reference_nid';
  $handler->display->display_options['filters']['field_events_reference_nid']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['filters']['field_events_reference_nid']['field'] = 'field_events_reference_nid';
  $handler->display->display_options['filters']['field_events_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_events_reference_nid']['group'] = 2;
  /* Filter criterion: Content: Related Press Releases (field_press_reference) */
  $handler->display->display_options['filters']['field_press_reference_nid']['id'] = 'field_press_reference_nid';
  $handler->display->display_options['filters']['field_press_reference_nid']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['filters']['field_press_reference_nid']['field'] = 'field_press_reference_nid';
  $handler->display->display_options['filters']['field_press_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_press_reference_nid']['group'] = 2;
  /* Filter criterion: Content: Related Photos (field_photos_reference) */
  $handler->display->display_options['filters']['field_photos_reference_nid']['id'] = 'field_photos_reference_nid';
  $handler->display->display_options['filters']['field_photos_reference_nid']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['filters']['field_photos_reference_nid']['field'] = 'field_photos_reference_nid';
  $handler->display->display_options['filters']['field_photos_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_photos_reference_nid']['group'] = 2;
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
    'gallery' => 'gallery',
  );
  $translatables['galleries'] = array(
    t('Master'),
    t('Galleries'),
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
    t('Agency'),
    t('Country'),
    t('Focus Area'),
    t('Page'),
    t('no results.'),
    t('All'),
    t('Block'),
    t('Gallery'),
    t('field_speech_event'),
    t('reverse_field_gallery_event_node'),
    t('View Gallery'),
    t('Gallery Right Block'),
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
    t('Publications'),
    t('References'),
  );
  $export['galleries'] = $view;

  return $export;
}

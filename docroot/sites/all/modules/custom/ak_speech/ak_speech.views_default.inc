<?php
/**
 * @file
 * ak_speech.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_speech_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'speeches';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speeches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Speeches';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no speeches to show.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_short_title]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['filters']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['filters']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['filters']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['filters']['field_publish_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_publish_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publish_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['operator_id'] = 'field_publish_date_value_op';
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['label'] = 'Speech Date';
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['operator'] = 'field_publish_date_value_op';
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['identifier'] = 'field_publish_date_value';
  $handler->display->display_options['filters']['field_publish_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_publish_date_value']['year_range'] = '1998:+0';
  /* Filter criterion: Field: Geography (field_country) */
  $handler->display->display_options['filters']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['filters']['field_country_tid']['field'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator_id'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['identifier'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_tid']['vocabulary'] = 'countries';
  /* Filter criterion: Field: Agency (field_agency) */
  $handler->display->display_options['filters']['field_agency_tid']['id'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['table'] = 'field_data_field_agency';
  $handler->display->display_options['filters']['field_agency_tid']['field'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_agency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_agency_tid']['expose']['operator_id'] = 'field_agency_tid_op';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['label'] = 'Agency';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['operator'] = 'field_agency_tid_op';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['identifier'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_agency_tid']['vocabulary'] = 'agencies';
  /* Filter criterion: Field: Thematic Area (field_focus_area) */
  $handler->display->display_options['filters']['field_focus_area_tid']['id'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['filters']['field_focus_area_tid']['field'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_focus_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['operator_id'] = 'field_focus_area_tid_op';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['label'] = 'Focus Area';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['operator'] = 'field_focus_area_tid_op';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['identifier'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_focus_area_tid']['vocabulary'] = 'focus_areas';
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    'en' => 'en',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_speech_event' => 'field_speech_event',
    'field_speech_location' => 'field_speech_location',
  );
  $handler->display->display_options['row_options']['separator'] = '/';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_speech_image']['id'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['field'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['label'] = '';
  $handler->display->display_options['fields']['field_speech_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speech_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_image']['settings'] = array(
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
  /* Field: Content: Event */
  $handler->display->display_options['fields']['field_speech_event']['id'] = 'field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['table'] = 'field_data_field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['field'] = 'field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['label'] = '';
  $handler->display->display_options['fields']['field_speech_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_event']['hide_empty'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_speech_location']['id'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['table'] = 'field_data_field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['field'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['label'] = '';
  $handler->display->display_options['fields']['field_speech_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_location']['hide_empty'] = TRUE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Speeches with the theme "%1"';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'speech_themes' => 'speech_themes',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:bean.delta',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Recent Speeches */
  $handler = $view->new_display('block', 'Recent Speeches', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Recent Speeches';

  /* Display: Speeches Right Block */
  $handler = $view->new_display('block', 'Speeches Right Block', 'block_3');
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Related Audio/Video (field_podcasts_reference) */
  $handler->display->display_options['relationships']['field_podcasts_reference_nid']['id'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['relationships']['field_podcasts_reference_nid']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['relationships']['field_podcasts_reference_nid']['field'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['relationships']['field_podcasts_reference_nid']['delta'] = '-1';
  /* Relationship: Content: Related Events (field_events_reference) */
  $handler->display->display_options['relationships']['field_events_reference_nid']['id'] = 'field_events_reference_nid';
  $handler->display->display_options['relationships']['field_events_reference_nid']['table'] = 'field_data_field_events_reference';
  $handler->display->display_options['relationships']['field_events_reference_nid']['field'] = 'field_events_reference_nid';
  $handler->display->display_options['relationships']['field_events_reference_nid']['delta'] = '-1';
  /* Relationship: Content: Related In the Media (field_related_in_the_media) */
  $handler->display->display_options['relationships']['field_related_in_the_media_nid']['id'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['relationships']['field_related_in_the_media_nid']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['relationships']['field_related_in_the_media_nid']['field'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['relationships']['field_related_in_the_media_nid']['delta'] = '-1';
  /* Relationship: Content: Related News (field_related_news) */
  $handler->display->display_options['relationships']['field_related_news_nid']['id'] = 'field_related_news_nid';
  $handler->display->display_options['relationships']['field_related_news_nid']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['relationships']['field_related_news_nid']['field'] = 'field_related_news_nid';
  $handler->display->display_options['relationships']['field_related_news_nid']['delta'] = '-1';
  /* Relationship: Content: Related Photos (field_photos_reference) */
  $handler->display->display_options['relationships']['field_photos_reference_nid']['id'] = 'field_photos_reference_nid';
  $handler->display->display_options['relationships']['field_photos_reference_nid']['table'] = 'field_data_field_photos_reference';
  $handler->display->display_options['relationships']['field_photos_reference_nid']['field'] = 'field_photos_reference_nid';
  $handler->display->display_options['relationships']['field_photos_reference_nid']['delta'] = '-1';
  /* Relationship: Content: Related Press Releases (field_press_reference) */
  $handler->display->display_options['relationships']['field_press_reference_nid']['id'] = 'field_press_reference_nid';
  $handler->display->display_options['relationships']['field_press_reference_nid']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['relationships']['field_press_reference_nid']['field'] = 'field_press_reference_nid';
  $handler->display->display_options['relationships']['field_press_reference_nid']['delta'] = '-1';
  /* Relationship: Content: Related Projects (field_related_project) */
  $handler->display->display_options['relationships']['field_related_project_nid']['id'] = 'field_related_project_nid';
  $handler->display->display_options['relationships']['field_related_project_nid']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['relationships']['field_related_project_nid']['field'] = 'field_related_project_nid';
  $handler->display->display_options['relationships']['field_related_project_nid']['delta'] = '-1';
  /* Relationship: Content: Related Publications (field_related_publications) */
  $handler->display->display_options['relationships']['field_related_publications_nid']['id'] = 'field_related_publications_nid';
  $handler->display->display_options['relationships']['field_related_publications_nid']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['relationships']['field_related_publications_nid']['field'] = 'field_related_publications_nid';
  $handler->display->display_options['relationships']['field_related_publications_nid']['delta'] = '-1';
  /* Relationship: Content: Related Speeches (field_speeches_reference) */
  $handler->display->display_options['relationships']['field_speeches_reference_nid']['id'] = 'field_speeches_reference_nid';
  $handler->display->display_options['relationships']['field_speeches_reference_nid']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['relationships']['field_speeches_reference_nid']['field'] = 'field_speeches_reference_nid';
  $handler->display->display_options['relationships']['field_speeches_reference_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['fields']['nid']['label'] = 'podcast_nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_events_reference_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'events_nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = 'in_the_media_nid';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['fields']['nid_3']['table'] = 'node';
  $handler->display->display_options['fields']['nid_3']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_3']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['fields']['nid_3']['label'] = 'news_nid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_4']['id'] = 'nid_4';
  $handler->display->display_options['fields']['nid_4']['table'] = 'node';
  $handler->display->display_options['fields']['nid_4']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_4']['relationship'] = 'field_photos_reference_nid';
  $handler->display->display_options['fields']['nid_4']['label'] = 'photos_nid';
  $handler->display->display_options['fields']['nid_4']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_5']['id'] = 'nid_5';
  $handler->display->display_options['fields']['nid_5']['table'] = 'node';
  $handler->display->display_options['fields']['nid_5']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_5']['relationship'] = 'field_press_reference_nid';
  $handler->display->display_options['fields']['nid_5']['label'] = 'press_nid';
  $handler->display->display_options['fields']['nid_5']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_6']['id'] = 'nid_6';
  $handler->display->display_options['fields']['nid_6']['table'] = 'node';
  $handler->display->display_options['fields']['nid_6']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_6']['relationship'] = 'field_related_project_nid';
  $handler->display->display_options['fields']['nid_6']['label'] = 'related_projects_nid';
  $handler->display->display_options['fields']['nid_6']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_7']['id'] = 'nid_7';
  $handler->display->display_options['fields']['nid_7']['table'] = 'node';
  $handler->display->display_options['fields']['nid_7']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_7']['relationship'] = 'field_related_publications_nid';
  $handler->display->display_options['fields']['nid_7']['label'] = 'publications_nid';
  $handler->display->display_options['fields']['nid_7']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_8']['id'] = 'nid_8';
  $handler->display->display_options['fields']['nid_8']['table'] = 'node';
  $handler->display->display_options['fields']['nid_8']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_8']['relationship'] = 'field_speeches_reference_nid';
  $handler->display->display_options['fields']['nid_8']['label'] = 'speeches_nid';
  $handler->display->display_options['fields']['nid_8']['exclude'] = TRUE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = 'Audio/Video';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_1']['id'] = 'field_short_title_1';
  $handler->display->display_options['fields']['field_short_title_1']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_1']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_1']['relationship'] = 'field_events_reference_nid';
  $handler->display->display_options['fields']['field_short_title_1']['label'] = 'Events';
  $handler->display->display_options['fields']['field_short_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_1']['alter']['path'] = 'node/[nid_1]';
  $handler->display->display_options['fields']['field_short_title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_2']['id'] = 'field_short_title_2';
  $handler->display->display_options['fields']['field_short_title_2']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_2']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_2']['relationship'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['fields']['field_short_title_2']['label'] = 'In the Media';
  $handler->display->display_options['fields']['field_short_title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_2']['alter']['path'] = 'node/[nid_2]';
  $handler->display->display_options['fields']['field_short_title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_3']['id'] = 'field_short_title_3';
  $handler->display->display_options['fields']['field_short_title_3']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_3']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_3']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['fields']['field_short_title_3']['label'] = 'News';
  $handler->display->display_options['fields']['field_short_title_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_3']['alter']['path'] = 'node/[nid_3]';
  $handler->display->display_options['fields']['field_short_title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_4']['id'] = 'field_short_title_4';
  $handler->display->display_options['fields']['field_short_title_4']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_4']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_4']['relationship'] = 'field_photos_reference_nid';
  $handler->display->display_options['fields']['field_short_title_4']['label'] = 'Photos';
  $handler->display->display_options['fields']['field_short_title_4']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_4']['alter']['path'] = 'node/[nid_4]';
  $handler->display->display_options['fields']['field_short_title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_5']['id'] = 'field_short_title_5';
  $handler->display->display_options['fields']['field_short_title_5']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_5']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_5']['relationship'] = 'field_press_reference_nid';
  $handler->display->display_options['fields']['field_short_title_5']['label'] = 'Press Releases';
  $handler->display->display_options['fields']['field_short_title_5']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_5']['alter']['path'] = 'node/[nid_5]';
  $handler->display->display_options['fields']['field_short_title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_6']['id'] = 'field_short_title_6';
  $handler->display->display_options['fields']['field_short_title_6']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_6']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_6']['relationship'] = 'field_related_project_nid';
  $handler->display->display_options['fields']['field_short_title_6']['label'] = 'Projects';
  $handler->display->display_options['fields']['field_short_title_6']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_6']['alter']['path'] = 'node/[nid_6]';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_7']['id'] = 'field_short_title_7';
  $handler->display->display_options['fields']['field_short_title_7']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_7']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_7']['relationship'] = 'field_related_publications_nid';
  $handler->display->display_options['fields']['field_short_title_7']['label'] = 'Publications';
  $handler->display->display_options['fields']['field_short_title_7']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_7']['alter']['path'] = 'node/[nid_7]';
  $handler->display->display_options['fields']['field_short_title_7']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_8']['id'] = 'field_short_title_8';
  $handler->display->display_options['fields']['field_short_title_8']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_8']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_8']['relationship'] = 'field_speeches_reference_nid';
  $handler->display->display_options['fields']['field_short_title_8']['label'] = 'Speeches';
  $handler->display->display_options['fields']['field_short_title_8']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_8']['alter']['path'] = 'node/[nid_8]';
  $handler->display->display_options['fields']['field_short_title_8']['element_label_colon'] = FALSE;
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
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Related In the Media (field_related_in_the_media) */
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['id'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['table'] = 'field_data_field_related_in_the_media';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['field'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_in_the_media_nid']['group'] = 2;
  /* Filter criterion: Content: Related Links (field_speech_links:url) */
  $handler->display->display_options['filters']['field_speech_links_url']['id'] = 'field_speech_links_url';
  $handler->display->display_options['filters']['field_speech_links_url']['table'] = 'field_data_field_speech_links';
  $handler->display->display_options['filters']['field_speech_links_url']['field'] = 'field_speech_links_url';
  $handler->display->display_options['filters']['field_speech_links_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_speech_links_url']['group'] = 2;
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
  /* Filter criterion: Content: Related News (field_related_news) */
  $handler->display->display_options['filters']['field_related_news_nid']['id'] = 'field_related_news_nid';
  $handler->display->display_options['filters']['field_related_news_nid']['table'] = 'field_data_field_related_news';
  $handler->display->display_options['filters']['field_related_news_nid']['field'] = 'field_related_news_nid';
  $handler->display->display_options['filters']['field_related_news_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_news_nid']['group'] = 2;
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['speeches'] = array(
    t('Master'),
    t('Recent Speeches'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sorry, there are no speeches to show.'),
    t('Translations'),
    t('[field_short_title]'),
    t('Speech Date'),
    t('Country'),
    t('Agency'),
    t('Focus Area'),
    t('Block'),
    t('Content pane'),
    t('All'),
    t('Speeches with the theme "%1"'),
    t('View panes'),
    t('Speeches Right Block'),
    t('<none>'),
    t('field_podcasts_reference'),
    t('field_events_reference'),
    t('field_related_in_the_media'),
    t('field_related_news'),
    t('field_photos_reference'),
    t('field_press_reference'),
    t('field_related_project'),
    t('field_related_publications'),
    t('field_speeches_reference'),
    t('podcast_nid'),
    t('events_nid'),
    t('in_the_media_nid'),
    t('news_nid'),
    t('photos_nid'),
    t('press_nid'),
    t('related_projects_nid'),
    t('publications_nid'),
    t('speeches_nid'),
    t('Audio/Video'),
    t('Events'),
    t('In the Media'),
    t('News'),
    t('Photos'),
    t('Press Releases'),
    t('Projects'),
    t('Publications'),
    t('Speeches'),
    t('References'),
  );
  $export['speeches'] = $view;

  return $export;
}

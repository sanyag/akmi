<?php
/**
 * @file
 * ak_article.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_article_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'article_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Article Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';

  /* Display: Press Releases */
  $handler = $view->new_display('references', 'Press Releases', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
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

  /* Display: News Story */
  $handler = $view->new_display('references', 'News Story', 'references_2');
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';

  /* Display: In the Media */
  $handler = $view->new_display('references', 'In the Media', 'references_3');
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    2611 => '2611',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';
  $translatables['article_reference'] = array(
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
    t('Press Releases'),
    t('News Story'),
    t('In the Media'),
  );
  $export['article_reference'] = $view;

  $view = new view();
  $view->name = 'articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40, 60, 100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
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
    'article' => 'article',
  );

  /* Display: Article Right Block */
  $handler = $view->new_display('block', 'Article Right Block', 'block_1');
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
  /* Field: speech_nid */
  $handler->display->display_options['fields']['nid_8']['id'] = 'nid_8';
  $handler->display->display_options['fields']['nid_8']['table'] = 'node';
  $handler->display->display_options['fields']['nid_8']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_8']['relationship'] = 'field_speeches_reference_nid';
  $handler->display->display_options['fields']['nid_8']['ui_name'] = 'speech_nid';
  $handler->display->display_options['fields']['nid_8']['label'] = '';
  $handler->display->display_options['fields']['nid_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_8']['element_label_colon'] = FALSE;
  /* Field: press_nid */
  $handler->display->display_options['fields']['nid_5']['id'] = 'nid_5';
  $handler->display->display_options['fields']['nid_5']['table'] = 'node';
  $handler->display->display_options['fields']['nid_5']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_5']['relationship'] = 'field_press_reference_nid';
  $handler->display->display_options['fields']['nid_5']['ui_name'] = 'press_nid';
  $handler->display->display_options['fields']['nid_5']['label'] = '';
  $handler->display->display_options['fields']['nid_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_5']['element_label_colon'] = FALSE;
  /* Field: events_nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_events_reference_nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'events_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: video_nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'video_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: photo_nid */
  $handler->display->display_options['fields']['nid_4']['id'] = 'nid_4';
  $handler->display->display_options['fields']['nid_4']['table'] = 'node';
  $handler->display->display_options['fields']['nid_4']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_4']['relationship'] = 'field_photos_reference_nid';
  $handler->display->display_options['fields']['nid_4']['ui_name'] = 'photo_nid';
  $handler->display->display_options['fields']['nid_4']['label'] = '';
  $handler->display->display_options['fields']['nid_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_4']['element_label_colon'] = FALSE;
  /* Field: news_nid */
  $handler->display->display_options['fields']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['fields']['nid_3']['table'] = 'node';
  $handler->display->display_options['fields']['nid_3']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_3']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['fields']['nid_3']['ui_name'] = 'news_nid';
  $handler->display->display_options['fields']['nid_3']['label'] = '';
  $handler->display->display_options['fields']['nid_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_3']['element_label_colon'] = FALSE;
  /* Field: media_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'media_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: publications_nid */
  $handler->display->display_options['fields']['nid_7']['id'] = 'nid_7';
  $handler->display->display_options['fields']['nid_7']['table'] = 'node';
  $handler->display->display_options['fields']['nid_7']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_7']['relationship'] = 'field_related_publications_nid';
  $handler->display->display_options['fields']['nid_7']['ui_name'] = 'publications_nid';
  $handler->display->display_options['fields']['nid_7']['label'] = '';
  $handler->display->display_options['fields']['nid_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_7']['element_label_colon'] = FALSE;
  /* Field: projects_nid */
  $handler->display->display_options['fields']['nid_6']['id'] = 'nid_6';
  $handler->display->display_options['fields']['nid_6']['table'] = 'node';
  $handler->display->display_options['fields']['nid_6']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_6']['relationship'] = 'field_related_project_nid';
  $handler->display->display_options['fields']['nid_6']['ui_name'] = 'projects_nid';
  $handler->display->display_options['fields']['nid_6']['label'] = '';
  $handler->display->display_options['fields']['nid_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_6']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_speeches_reference_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = 'Speeches';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid_8]';
  $handler->display->display_options['fields']['field_short_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_1']['id'] = 'field_short_title_1';
  $handler->display->display_options['fields']['field_short_title_1']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_1']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_1']['relationship'] = 'field_press_reference_nid';
  $handler->display->display_options['fields']['field_short_title_1']['label'] = 'Press Releases';
  $handler->display->display_options['fields']['field_short_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_1']['alter']['path'] = 'node/[nid_5]';
  $handler->display->display_options['fields']['field_short_title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_2']['id'] = 'field_short_title_2';
  $handler->display->display_options['fields']['field_short_title_2']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_2']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_2']['relationship'] = 'field_events_reference_nid';
  $handler->display->display_options['fields']['field_short_title_2']['label'] = 'Events';
  $handler->display->display_options['fields']['field_short_title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_2']['alter']['path'] = 'node/[nid_1]';
  $handler->display->display_options['fields']['field_short_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title_2']['settings'] = array(
    'title_style' => 'h1',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_3']['id'] = 'field_short_title_3';
  $handler->display->display_options['fields']['field_short_title_3']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_3']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_3']['relationship'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['fields']['field_short_title_3']['label'] = 'Audio/Video';
  $handler->display->display_options['fields']['field_short_title_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_3']['alter']['path'] = 'node/[nid]';
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
  $handler->display->display_options['fields']['field_short_title_5']['relationship'] = 'field_related_news_nid';
  $handler->display->display_options['fields']['field_short_title_5']['label'] = 'News Story';
  $handler->display->display_options['fields']['field_short_title_5']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_5']['alter']['path'] = 'node/[nid_3]';
  $handler->display->display_options['fields']['field_short_title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title_6']['id'] = 'field_short_title_6';
  $handler->display->display_options['fields']['field_short_title_6']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title_6']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title_6']['relationship'] = 'field_related_in_the_media_nid';
  $handler->display->display_options['fields']['field_short_title_6']['label'] = 'In the Media';
  $handler->display->display_options['fields']['field_short_title_6']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_6']['alter']['path'] = 'node/[nid_2]';
  $handler->display->display_options['fields']['field_short_title_6']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_short_title_8']['relationship'] = 'field_related_project_nid';
  $handler->display->display_options['fields']['field_short_title_8']['label'] = 'Projects';
  $handler->display->display_options['fields']['field_short_title_8']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title_8']['alter']['path'] = 'node/[nid_6]';
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Related Projects (field_related_project) */
  $handler->display->display_options['filters']['field_related_project_nid']['id'] = 'field_related_project_nid';
  $handler->display->display_options['filters']['field_related_project_nid']['table'] = 'field_data_field_related_project';
  $handler->display->display_options['filters']['field_related_project_nid']['field'] = 'field_related_project_nid';
  $handler->display->display_options['filters']['field_related_project_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_project_nid']['group'] = 2;
  /* Filter criterion: Content: Related Publications (field_related_publications) */
  $handler->display->display_options['filters']['field_related_publications_nid']['id'] = 'field_related_publications_nid';
  $handler->display->display_options['filters']['field_related_publications_nid']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['filters']['field_related_publications_nid']['field'] = 'field_related_publications_nid';
  $handler->display->display_options['filters']['field_related_publications_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_related_publications_nid']['group'] = 2;
  /* Filter criterion: Content: Link (field_article_link:url) */
  $handler->display->display_options['filters']['field_article_link_url']['id'] = 'field_article_link_url';
  $handler->display->display_options['filters']['field_article_link_url']['table'] = 'field_data_field_article_link';
  $handler->display->display_options['filters']['field_article_link_url']['field'] = 'field_article_link_url';
  $handler->display->display_options['filters']['field_article_link_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_article_link_url']['group'] = 2;
  /* Filter criterion: Content: Related Press Releases (field_press_reference) */
  $handler->display->display_options['filters']['field_press_reference_nid']['id'] = 'field_press_reference_nid';
  $handler->display->display_options['filters']['field_press_reference_nid']['table'] = 'field_data_field_press_reference';
  $handler->display->display_options['filters']['field_press_reference_nid']['field'] = 'field_press_reference_nid';
  $handler->display->display_options['filters']['field_press_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_press_reference_nid']['group'] = 2;
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
  /* Filter criterion: Content: Related Audio/Video (field_podcasts_reference) */
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['id'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['table'] = 'field_data_field_podcasts_reference';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['field'] = 'field_podcasts_reference_nid';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_podcasts_reference_nid']['group'] = 2;
  /* Filter criterion: Content: Related Speeches (field_speeches_reference) */
  $handler->display->display_options['filters']['field_speeches_reference_nid']['id'] = 'field_speeches_reference_nid';
  $handler->display->display_options['filters']['field_speeches_reference_nid']['table'] = 'field_data_field_speeches_reference';
  $handler->display->display_options['filters']['field_speeches_reference_nid']['field'] = 'field_speeches_reference_nid';
  $handler->display->display_options['filters']['field_speeches_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_speeches_reference_nid']['group'] = 2;

  /* Display: AKAA Features & News */
  $handler = $view->new_display('page', 'AKAA Features & News', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Features & News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'listing-page-views';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10,25,50,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no media references to show.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
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
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_short_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_article_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_img']['alter']['text'] = '<div class="pc-listing-img">
	[field_article_img]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;
		<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>';
  $handler->display->display_options['fields']['field_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_img']['element_wrapper_class'] = 'listing-page-views-image';
  $handler->display->display_options['fields']['field_article_img']['empty'] = '<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;
		<span class="read-more"><a class="more-link" href="/node/[nid]">|&nbsp;More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'image_style' => 'small_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '3881',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'architecture/news';

  /* Display: AKAA Features & News Block */
  $handler = $view->new_display('block', 'AKAA Features & News Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Features & News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'listing-page-views';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40, 60, 100';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
  $node_path = drupal_get_path_alias(\'node/\' . $row->nid);
  print $node_path;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_article_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_img']['alter']['text'] = '<div class="pc-listing-img">
	[field_article_img]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/[php]">[field_short_title]</a>&nbsp;
		<span class="read-more">|&nbsp;<a class="more-link" href="/[php]">More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/[php]">[field_publish_date]</a>
	</div>
</div>';
  $handler->display->display_options['fields']['field_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_img']['element_wrapper_class'] = 'listing-page-views-image';
  $handler->display->display_options['fields']['field_article_img']['empty'] = '<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;
		<span class="read-more"><a class="more-link" href="/node/[nid]">|&nbsp;More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>';
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'image_style' => 'small_thumbnail',
    'image_link' => 'content',
  );
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
    'article' => 'article',
  );
  /* Filter criterion: Field: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '3881',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $translatables['articles'] = array(
    t('Master'),
    t('News'),
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
    t('Article Right Block'),
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
    t('Speeches'),
    t('Press Releases'),
    t('Events'),
    t('Audio/Video'),
    t('Photos'),
    t('News Story'),
    t('In the Media'),
    t('Publications'),
    t('Projects'),
    t('All'),
    t('AKAA Features & News'),
    t('Features & News'),
    t('View All'),
    t('Sorry, there are no media references to show.'),
    t('<div class="pc-listing-img">
	[field_article_img]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;
		<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>'),
    t('<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;
		<span class="read-more"><a class="more-link" href="/node/[nid]">|&nbsp;More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>'),
    t('AKAA Features & News Block'),
    t('<div class="pc-listing-img">
	[field_article_img]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/[php]">[field_short_title]</a>&nbsp;
		<span class="read-more">|&nbsp;<a class="more-link" href="/[php]">More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/[php]">[field_publish_date]</a>
	</div>
</div>'),
  );
  $export['articles'] = $view;

  $view = new view();
  $view->name = 'press_releases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Releases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press Releases';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View All';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_article_date' => 'field_article_date',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['sorts']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['sorts']['field_publish_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['group'] = '0';
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['block_description'] = 'Latest Press Releases';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'news/press-releases.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );

  /* Display: Press Centre Left Block */
  $handler = $view->new_display('block', 'Press Centre Left Block', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'press-centre-block listing-page-views';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_article_date' => 'field_article_date',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Press Releases</h2>&nbsp;<span class="more-link"><a href="/press-centre/press-releases">|&nbsp;View&nbsp;All</a></span>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
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
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['text'] = '[field_short_title]&nbsp;<span class="read-more">|&nbsp;More</span>';
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_short_title']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_short_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['element_wrapper_type'] = 'span';
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_article_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_img']['alter']['text'] = '<div class="pc-listing-img">
	[field_article_img]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>';
  $handler->display->display_options['fields']['field_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_img']['element_wrapper_class'] = 'listing-page-views-image';
  $handler->display->display_options['fields']['field_article_img']['empty'] = '<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;
		<span class="read-more"><a class="more-link" href="/node/[nid]">|&nbsp;More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>';
  $handler->display->display_options['fields']['field_article_img']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'image_style' => 'small_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['block_description'] = 'Latest Press Releases';
  $translatables['press_releases'] = array(
    t('Master'),
    t('Press Releases'),
    t('View All'),
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
    t('Latest Press Releases'),
    t('Feed'),
    t('Press Centre Left Block'),
    t('<h2>Press Releases</h2>&nbsp;<span class="more-link"><a href="/press-centre/press-releases">|&nbsp;View&nbsp;All</a></span>'),
    t('[field_short_title]&nbsp;<span class="read-more">|&nbsp;More</span>'),
    t('<div class="pc-listing-img">
	[field_article_img]
</div>
<div class="pc-listing-info">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;<span class="read-more">|&nbsp;<a class="more-link" href="/node/[nid]">More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>'),
    t('<div class="pc-listing-info no-img">
	<div class="pc-title">
		<a class="title-link" href="/node/[nid]">[field_short_title]</a>&nbsp;
		<span class="read-more"><a class="more-link" href="/node/[nid]">|&nbsp;More</a></span>
	</div>
	<div class="pc-date">
		<a class="date-link" href="/node/[nid]">[field_publish_date]</a>
	</div>
</div>'),
  );
  $export['press_releases'] = $view;

  $view = new view();
  $view->name = 'updates_blog_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Updates/Blog Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Updates & Blog Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['expose']['operator_id'] = 'field_article_cat_tid_op';
  $handler->display->display_options['filters']['field_article_cat_tid']['expose']['label'] = 'Article Type (field_article_cat)';
  $handler->display->display_options['filters']['field_article_cat_tid']['expose']['operator'] = 'field_article_cat_tid_op';
  $handler->display->display_options['filters']['field_article_cat_tid']['expose']['identifier'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';
  $handler->display->display_options['filters']['field_article_cat_tid']['error_message'] = FALSE;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'news/latest.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
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
    'field_article_cat' => 'field_article_cat',
    'field_article_date' => 'field_article_date',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_cat']['id'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['field'] = 'field_article_cat';
  $handler->display->display_options['fields']['field_article_cat']['label'] = '';
  $handler->display->display_options['fields']['field_article_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_cat']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_article_cat']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['block_description'] = 'Latest Updates & Blog Posts';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog & Updates';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'news/latest';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Latest Updates & Blog Posts';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['updates_blog_posts'] = array(
    t('Master'),
    t('Latest Updates & Blog Posts'),
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
    t('Article Type (field_article_cat)'),
    t('Feed'),
    t('Block'),
    t('Page'),
    t('Blog & Updates'),
  );
  $export['updates_blog_posts'] = $view;

  return $export;
}

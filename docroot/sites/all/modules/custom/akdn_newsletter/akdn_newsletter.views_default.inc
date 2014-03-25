<?php
/**
 * @file
 * akdn_newsletter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function akdn_newsletter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'akdn_newsletters';
  $view->description = 'AKDN Newsletter: Weekly, Monthly, Quarterly';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AKDN Newsletters';
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
  /* Relationship: Content: Article Type (field_article_cat) */
  $handler->display->display_options['relationships']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['relationships']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['relationships']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_speech_image']['id'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['field'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['label'] = '';
  $handler->display->display_options['fields']['field_speech_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Article Image */
  $handler->display->display_options['fields']['field_article_img']['id'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['table'] = 'field_data_field_article_img';
  $handler->display->display_options['fields']['field_article_img']['field'] = 'field_article_img';
  $handler->display->display_options['fields']['field_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_img']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'article_listing_thumbnail',
    'image_link' => '',
  );
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
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'More';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
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
    'event' => 'event',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';

  /* Display: Weekly Newsletter */
  $handler = $view->new_display('block', 'Weekly Newsletter', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Weekly newsletter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'event' => 'event',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-7 days';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    2 => '2',
    4 => '4',
    2611 => '2611',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';

  /* Display: Monthly Newsletter */
  $handler = $view->new_display('block', 'Monthly Newsletter', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Quarterly Newsletter */
  $handler = $view->new_display('block', 'Quarterly Newsletter', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'event' => 'event',
    'publication' => 'publication',
    'speech' => 'speech',
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-90 days';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Content: Article Type (field_article_cat) */
  $handler->display->display_options['filters']['field_article_cat_tid']['id'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['table'] = 'field_data_field_article_cat';
  $handler->display->display_options['filters']['field_article_cat_tid']['field'] = 'field_article_cat_tid';
  $handler->display->display_options['filters']['field_article_cat_tid']['value'] = array(
    0 => '2',
    1 => '4',
    2 => '2611',
  );
  $handler->display->display_options['filters']['field_article_cat_tid']['vocabulary'] = 'article_type';
  $translatables['akdn_newsletters'] = array(
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
    t('term from field_article_cat'),
    t('More'),
    t('Weekly Newsletter'),
    t('Weekly newsletter'),
    t('Monthly Newsletter'),
    t('Quarterly Newsletter'),
  );
  $export['akdn_newsletters'] = $view;

  return $export;
}

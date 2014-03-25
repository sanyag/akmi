<?php
/**
 * @file
 * ak_speech_quotes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_speech_quotes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'speech_quotes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speech Quotes';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Event (field_speech_event) */
  $handler->display->display_options['relationships']['field_speech_event_nid']['id'] = 'field_speech_event_nid';
  $handler->display->display_options['relationships']['field_speech_event_nid']['table'] = 'field_data_field_speech_event';
  $handler->display->display_options['relationships']['field_speech_event_nid']['field'] = 'field_speech_event_nid';
  $handler->display->display_options['relationships']['field_speech_event_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Speech';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_speech_event_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['relationship'] = 'field_speech_event_nid';
  $handler->display->display_options['fields']['field_short_title']['label'] = 'Event';
  $handler->display->display_options['fields']['field_short_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_short_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_short_title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_short_title']['hide_empty'] = TRUE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speech_speaker']['id'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['table'] = 'field_data_field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['field'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_speech_speaker']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_speech_speaker']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speech_speaker']['type'] = 'node_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_quotations_nid']['id'] = 'field_quotations_nid';
  $handler->display->display_options['arguments']['field_quotations_nid']['table'] = 'field_data_field_quotations';
  $handler->display->display_options['arguments']['field_quotations_nid']['field'] = 'field_quotations_nid';
  $handler->display->display_options['arguments']['field_quotations_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_quotations_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_quotations_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_quotations_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_quotations_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Speech Quote Info Block */
  $handler = $view->new_display('block', 'Speech Quote Info Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'speech-quote-info';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_speech_image']['id'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['table'] = 'field_data_field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['field'] = 'field_speech_image';
  $handler->display->display_options['fields']['field_speech_image']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_speech_image']['label'] = '';
  $handler->display->display_options['fields']['field_speech_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speech_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_speech_image']['settings'] = array(
    'colorbox_node_style' => 'node_page_header',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['title']['label'] = 'Speech';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Event */
  $handler->display->display_options['fields']['field_speech_event']['id'] = 'field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['table'] = 'field_data_field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['field'] = 'field_speech_event';
  $handler->display->display_options['fields']['field_speech_event']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_speech_event']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_speech_event']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_speech_event']['hide_empty'] = TRUE;
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_speech_speaker']['id'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['table'] = 'field_data_field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['field'] = 'field_speech_speaker';
  $handler->display->display_options['fields']['field_speech_speaker']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_speech_speaker']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_speech_speaker']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_speech_speaker']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speech_speaker']['type'] = 'node_reference_plain';
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
  $handler->display->display_options['block_description'] = 'Speech Quote Info';
  $translatables['speech_quotes'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_speech_event'),
    t('Speech'),
    t('Event'),
    t('Speaker'),
    t('All'),
    t('Speech Quote Info Block'),
    t('No results found!'),
    t('Speech Quote Info'),
  );
  $export['speech_quotes'] = $view;

  return $export;
}

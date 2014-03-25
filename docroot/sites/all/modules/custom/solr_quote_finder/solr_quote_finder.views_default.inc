<?php
/**
 * @file
 * solr_quote_finder.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function solr_quote_finder_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'solr_quote_finder';
  $view->description = '';
  $view->tag = 'press center';
  $view->base_table = 'search_api_index_akdn';
  $view->human_name = 'solr_quote_finder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Speeches';
  $handler->display->display_options['css_class'] = 'akdn-solr-quote-listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_short_title' => 'field_short_title',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['type']['field'] = 'type';

  /* Display: Akdn : Speech quotes */
  $handler = $view->new_display('page', 'Akdn : Speech quotes', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Quotes';
  $handler->display->display_options['display_description'] = 'Akdn : Speech quotes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_publish_date' => 'field_publish_date',
    'field_speech_location' => 'field_speech_location',
    'nothing' => 'nothing',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Quotes count for Speech */
  $handler->display->display_options['fields']['speech_quotes_count']['id'] = 'speech_quotes_count';
  $handler->display->display_options['fields']['speech_quotes_count']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['speech_quotes_count']['field'] = 'speech_quotes_count';
  $handler->display->display_options['fields']['speech_quotes_count']['label'] = '';
  $handler->display->display_options['fields']['speech_quotes_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['speech_quotes_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['speech_quotes_count']['separator'] = '';
  $handler->display->display_options['fields']['speech_quotes_count']['link_to_entity'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
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
    'title_style' => 'span',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
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
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_speech_location']['id'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_speech_location']['field'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['label'] = '';
  $handler->display->display_options['fields']['field_speech_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_location']['type'] = 'text_plain';
  /* Field: Indexed Node: Speech Themes */
  $handler->display->display_options['fields']['field_speech_themes_1']['id'] = 'field_speech_themes_1';
  $handler->display->display_options['fields']['field_speech_themes_1']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['field_speech_themes_1']['field'] = 'field_speech_themes';
  $handler->display->display_options['fields']['field_speech_themes_1']['label'] = '';
  $handler->display->display_options['fields']['field_speech_themes_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speech_themes_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_themes_1']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_speech_themes_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_speech_themes_1']['display'] = 'id';
  $handler->display->display_options['fields']['field_speech_themes_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_speech_themes_1']['bypass_access'] = 0;
  /* Field: Indexed Node: Quotes for a Speech */
  $handler->display->display_options['fields']['speech_quotes']['id'] = 'speech_quotes';
  $handler->display->display_options['fields']['speech_quotes']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['speech_quotes']['field'] = 'speech_quotes';
  $handler->display->display_options['fields']['speech_quotes']['label'] = '';
  $handler->display->display_options['fields']['speech_quotes']['element_class'] = 'akdn-solr-speech-quotes';
  $handler->display->display_options['fields']['speech_quotes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['speech_quotes']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Read full text';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'akdn-solr-more-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Sticky in lists */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Indexed Node: Publish Date */
  $handler->display->display_options['sorts']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['sorts']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['sorts']['field_publish_date']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'speech' => 'speech',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Node: Quotes count for Speech */
  $handler->display->display_options['filters']['speech_quotes_count']['id'] = 'speech_quotes_count';
  $handler->display->display_options['filters']['speech_quotes_count']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['speech_quotes_count']['field'] = 'speech_quotes_count';
  $handler->display->display_options['filters']['speech_quotes_count']['operator'] = '>=';
  $handler->display->display_options['filters']['speech_quotes_count']['value'] = '1';
  /* Filter criterion: Indexed Node: Speaker */
  $handler->display->display_options['filters']['field_speech_speaker']['id'] = 'field_speech_speaker';
  $handler->display->display_options['filters']['field_speech_speaker']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['field_speech_speaker']['field'] = 'field_speech_speaker';
  $handler->display->display_options['filters']['field_speech_speaker']['value'] = '6926';
  $handler->display->display_options['path'] = 'speech-quotes';

  /* Display: Press Center: Recent Speeches */
  $handler = $view->new_display('page', 'Press Center: Recent Speeches', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Speeches';
  $handler->display->display_options['display_description'] = 'Solr Recent Speeches';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Quotes data */
  $handler->display->display_options['fields']['quotes_data']['id'] = 'quotes_data';
  $handler->display->display_options['fields']['quotes_data']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['fields']['quotes_data']['field'] = 'quotes_data';
  $handler->display->display_options['fields']['quotes_data']['label'] = '';
  $handler->display->display_options['fields']['quotes_data']['element_class'] = 'akdn-solr-speech-quotes';
  $handler->display->display_options['fields']['quotes_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['quotes_data']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Node ID */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Speech Reference */
  $handler->display->display_options['arguments']['field_speech_reference']['id'] = 'field_speech_reference';
  $handler->display->display_options['arguments']['field_speech_reference']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['arguments']['field_speech_reference']['field'] = 'field_speech_reference';
  $handler->display->display_options['arguments']['field_speech_reference']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_speech_reference']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_speech_reference']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_speech_reference']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_speech_reference']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_speech_reference']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_akdn';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'speech_quote' => 'speech_quote',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'quotes/%/speech';
  $translatables['solr_quote_finder'] = array(
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
    t('No results found!'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Akdn : Speech quotes'),
    t('Quotes'),
    t('&nbsp;'),
    t('Read full text'),
    t('Press Center: Recent Speeches'),
    t('Solr Recent Speeches'),
    t('All'),
  );
  $export['solr_quote_finder'] = $view;

  return $export;
}

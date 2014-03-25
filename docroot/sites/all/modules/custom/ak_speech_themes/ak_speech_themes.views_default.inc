<?php
/**
 * @file
 * ak_speech_themes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_speech_themes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'speech_themes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speech Themes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speech Themes';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no speeches to show.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Speech Reference (field_speech_reference) */
  $handler->display->display_options['relationships']['field_speech_reference_nid']['id'] = 'field_speech_reference_nid';
  $handler->display->display_options['relationships']['field_speech_reference_nid']['table'] = 'field_data_field_speech_reference';
  $handler->display->display_options['relationships']['field_speech_reference_nid']['field'] = 'field_speech_reference_nid';
  $handler->display->display_options['relationships']['field_speech_reference_nid']['label'] = 'Speech';
  $handler->display->display_options['relationships']['field_speech_reference_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_speech_reference_nid']['delta'] = '-1';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['relationship'] = 'field_speech_reference_nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_publish_date']['label'] = 'Speech Date';
  $handler->display->display_options['fields']['field_publish_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_publish_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_publish_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_speech_location']['id'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['table'] = 'field_data_field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['field'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_speech_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_speech_location']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_speech_location']['hide_empty'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$node = menu_get_object();
if (isset($node->field_associated_theme)) {
  $associated = field_get_items(\'node\', $node, \'field_associated_theme\');
  if (isset($associated[0][\'tid\']) && $associated[0][\'tid\'] > 0) {
    return $associated[0][\'tid\'];
  }
}';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'speech_themes' => 'speech_themes',
  );
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
    'speech_quote' => 'speech_quote',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  $handler->display->display_options['filters']['field_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_country_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_tid']['vocabulary'] = 'countries';
  /* Filter criterion: Field: Agency (field_agency) */
  $handler->display->display_options['filters']['field_agency_tid']['id'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['table'] = 'field_data_field_agency';
  $handler->display->display_options['filters']['field_agency_tid']['field'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['relationship'] = 'reverse_field_quotations_node';
  $handler->display->display_options['filters']['field_agency_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_agency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_agency_tid']['expose']['operator_id'] = 'field_agency_tid_op';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['label'] = 'Agency';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['operator'] = 'field_agency_tid_op';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['identifier'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_agency_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_agency_tid']['vocabulary'] = 'agencies';
  /* Filter criterion: Field: Thematic Area (field_focus_area) */
  $handler->display->display_options['filters']['field_focus_area_tid']['id'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['filters']['field_focus_area_tid']['field'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['relationship'] = 'reverse_field_quotations_node';
  $handler->display->display_options['filters']['field_focus_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_focus_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['operator_id'] = 'field_focus_area_tid_op';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['label'] = 'Focus Area';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['operator'] = 'field_focus_area_tid_op';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['identifier'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_focus_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_focus_area_tid']['vocabulary'] = 'focus_areas';
  /* Filter criterion: Content: Speaker (field_speech_speaker) */
  $handler->display->display_options['filters']['field_speech_speaker_nid']['id'] = 'field_speech_speaker_nid';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['table'] = 'field_data_field_speech_speaker';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['field'] = 'field_speech_speaker_nid';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['relationship'] = 'reverse_field_quotations_node';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_speech_speaker_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['operator_id'] = 'field_speech_speaker_nid_op';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['label'] = 'Speaker';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['operator'] = 'field_speech_speaker_nid_op';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['identifier'] = 'field_speech_speaker_nid';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Publication Date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['relationship'] = 'reverse_field_quotations_node';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_publication_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['operator_id'] = 'field_publication_date_value_op';
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['operator'] = 'field_publication_date_value_op';
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['identifier'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_publication_date_value']['year_range'] = '-50:+0';

  /* Display: Listing Page */
  $handler = $view->new_display('page', 'Listing Page', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no speech themes to show.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'speech_themes' => 'speech_themes',
    'featured_content' => 0,
    'agency_listing_page_publications' => 0,
    'press_centre' => 0,
    'about_us_slides' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'speech_theme' => 'speech_theme',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'press-centre/speeches/themes';

  /* Display: Speech Quotes Block */
  $handler = $view->new_display('block', 'Speech Quotes Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_publish_date' => 'field_publish_date',
    'field_speech_location' => 'field_speech_location',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no speech quotes for this speech theme.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_publish_date']['label'] = '';
  $handler->display->display_options['fields']['field_publish_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_speech_location']['id'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['table'] = 'field_data_field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['field'] = 'field_speech_location';
  $handler->display->display_options['fields']['field_speech_location']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['field_speech_location']['label'] = '';
  $handler->display->display_options['fields']['field_speech_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_speech_location']['alter']['text'] = ', [field_speech_location]';
  $handler->display->display_options['fields']['field_speech_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_speech_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speech_location']['hide_empty'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
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
    'speech_quote' => 'speech_quote',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publish Date (field_publish_date) */
  $handler->display->display_options['filters']['field_publish_date_value']['id'] = 'field_publish_date_value';
  $handler->display->display_options['filters']['field_publish_date_value']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['filters']['field_publish_date_value']['field'] = 'field_publish_date_value';
  $handler->display->display_options['filters']['field_publish_date_value']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['filters']['field_publish_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_publish_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publish_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['operator_id'] = 'field_publish_date_value_op';
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['operator'] = 'field_publish_date_value_op';
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['identifier'] = 'field_publish_date_value';
  $handler->display->display_options['filters']['field_publish_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_publish_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_publish_date_value']['default_date'] = 'now() - 30 day';
  $handler->display->display_options['filters']['field_publish_date_value']['default_to_date'] = 'now()';
  $handler->display->display_options['filters']['field_publish_date_value']['year_range'] = '-10:+0';
  /* Filter criterion: Field: Agency (field_agency) */
  $handler->display->display_options['filters']['field_agency_tid']['id'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['table'] = 'field_data_field_agency';
  $handler->display->display_options['filters']['field_agency_tid']['field'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['filters']['field_agency_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_agency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_agency_tid']['expose']['operator_id'] = 'field_agency_tid_op';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['label'] = 'Agencies';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['operator'] = 'field_agency_tid_op';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['identifier'] = 'field_agency_tid';
  $handler->display->display_options['filters']['field_agency_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_agency_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_agency_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_agency_tid']['vocabulary'] = 'agencies';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Geographies';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'countries';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Thematic Area (field_focus_area) */
  $handler->display->display_options['filters']['field_focus_area_tid']['id'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['table'] = 'field_data_field_focus_area';
  $handler->display->display_options['filters']['field_focus_area_tid']['field'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['filters']['field_focus_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_focus_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['operator_id'] = 'field_focus_area_tid_op';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['label'] = 'Themes';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['operator'] = 'field_focus_area_tid_op';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['identifier'] = 'field_focus_area_tid';
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_focus_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_focus_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_focus_area_tid']['vocabulary'] = 'focus_areas';
  /* Filter criterion: Content: Speaker (field_speech_speaker) */
  $handler->display->display_options['filters']['field_speech_speaker_nid']['id'] = 'field_speech_speaker_nid';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['table'] = 'field_data_field_speech_speaker';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['field'] = 'field_speech_speaker_nid';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['relationship'] = 'field_speech_reference_nid';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['value'] = array(
    6926 => '6926',
  );
  $handler->display->display_options['filters']['field_speech_speaker_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['operator_id'] = 'field_speech_speaker_nid_op';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['label'] = 'Speakers';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['operator'] = 'field_speech_speaker_nid_op';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['identifier'] = 'field_speech_speaker_nid';
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_speech_speaker_nid']['expose']['reduce'] = TRUE;
  $translatables['speech_themes'] = array(
    t('Master'),
    t('Speech Themes'),
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
    t('Sorry, there are no speeches to show.'),
    t('Speech'),
    t('Translations'),
    t('<h3>[title]</h3>'),
    t('Speech Date'),
    t('Location'),
    t('Read More'),
    t('All'),
    t('Country'),
    t('Agency'),
    t('Focus Area'),
    t('Speaker'),
    t('Publication Date'),
    t('Listing Page'),
    t('Sorry, there are no speech themes to show.'),
    t('queue'),
    t('Speech Quotes Block'),
    t('There are no speech quotes for this speech theme.'),
    t(', [field_speech_location]'),
    t('Date'),
    t('Agencies'),
    t('Geographies'),
    t('Themes'),
    t('Speakers'),
  );
  $export['speech_themes'] = $view;

  return $export;
}

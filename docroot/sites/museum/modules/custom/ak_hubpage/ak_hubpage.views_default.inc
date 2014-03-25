<?php
/**
 * @file
 * ak_hubpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ak_hubpage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hub_page_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hub Page Content';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'featured_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_short_title']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_short_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_hub_page_tile_link']['id'] = 'field_hub_page_tile_link';
  $handler->display->display_options['fields']['field_hub_page_tile_link']['table'] = 'field_data_field_hub_page_tile_link';
  $handler->display->display_options['fields']['field_hub_page_tile_link']['field'] = 'field_hub_page_tile_link';
  $handler->display->display_options['fields']['field_hub_page_tile_link']['label'] = '';
  $handler->display->display_options['fields']['field_hub_page_tile_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hub_page_tile_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hub_page_tile_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hub_page_tile_link']['type'] = 'link_plain';
  /* Field: Image PHP Field */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Image PHP Field';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_class'] = 'views-field-field-image';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$node = node_load($data->nid);
$link = field_get_items(\'node\', $node, \'field_hub_page_tile_link\');
$image = field_get_items(\'node\', $node, \'field_image\');
$img = theme(\'image_style\',array(\'style_name\' => \'featured_thumbnail\', \'path\' => $image[0][\'uri\']));
$short_title = field_get_items(\'node\', $node, \'field_short_title\');
$short = text_summary($short_title[0][\'value\'], NULL, 120);
if (!empty($link)) {
 $img = theme(\'image_style\',array(\'style_name\' => \'featured_thumbnail\', \'path\' => $image[0][\'uri\']));
 return l($img, $link[0][\'url\'], array(\'html\' => TRUE));
} else {
 $path = $node->path[\'alias\'];
 return l($img, $path, array(\'html\' => TRUE));
}';
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print $value;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Caption PHP Field */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Caption PHP Field';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$node = node_load($data->nid);
$link = field_get_items(\'node\', $node, \'field_hub_page_tile_link\');
$short_title = field_get_items(\'node\', $node, \'field_short_title\');
$short = text_summary($short_title[0][\'value\'], NULL, 120);
if (!empty($link)) {
 return l($short, $link[0][\'url\']);
} else {
 $path = $node->path[\'alias\'];
 return l($short, $path);
}';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print $value;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Published Date (field_published_date) */
  $handler->display->display_options['sorts']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['sorts']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_options']['code'] = '$node = menu_get_object();
foreach ($node->field_category as $lang => $data) {
  if (isset($data[0][\'tid\'])) {
    return $data[0][\'tid\'];
  }
}';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub_page' => 'hub_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['hub_page_content'] = array(
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
    t('All'),
    t('Block'),
  );
  $export['hub_page_content'] = $view;

  return $export;
}

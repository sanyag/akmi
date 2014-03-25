<?php
/**
 * @file
 * ak_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_microdata_mappings_defaults().
 */
function ak_page_microdata_mappings_defaults() {
  $microdata_mappings = array();

  // Exported Microdata mapping: page
  $microdata_mappings['node']['page'] = array(
    '#itemtype' => array(
      0 => 'http://schema.org/WebPage',
    ),
    'title' => array(
      '#itemprop' => array(
        0 => 'name',
      ),
    ),
    '#is_item' => TRUE,
    '#itemid_token' => '[node:url]',
    '#use_schema_url' => 1,
    'body' => array(
      'value' => array(
        '#itemprop' => array(
          0 => 'mainContentOfPage',
        ),
        '#itemtype' => '',
      ),
      'summary' => array(
        '#itemprop' => array(
          0 => 'description',
        ),
        '#itemtype' => '',
      ),
    ),
    'field_short_title' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    'field_category' => array(
      '#itemprop' => array(
        0 => 'keywords',
      ),
      '#is_item' => FALSE,
    ),
    'field_image' => array(
      '#itemprop' => array(
        0 => 'image',
      ),
      '#is_item' => FALSE,
    ),
    'title_field' => array(
      '#itemprop' => array(
        0 => 'name',
      ),
      '#is_item' => FALSE,
    ),
  );

  return $microdata_mappings;
}

/**
 * Implements hook_node_info().
 */
function ak_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * ak_exhibit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_exhibit_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
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
function ak_exhibit_microdata_mappings_defaults() {
  $microdata_mappings = array();

  // Exported Microdata mapping: exhibit
  $microdata_mappings['node']['exhibit'] = array(
    'field_image' => array(
      '#itemprop' => array(
        0 => 'image',
      ),
      '#is_item' => FALSE,
    ),
    'field_category' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    '#itemtype' => array(
      0 => 'http://schema.org/Event',
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
          0 => 'description',
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
    'field_exhibit_type' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    'field_exhibit_location' => array(
      '#itemprop' => array(
        0 => 'location',
      ),
      '#is_item' => FALSE,
    ),
    'field_exhibit_prior' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    'field_tags' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    'field_short_title' => array(
      '#itemprop' => array(),
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
function ak_exhibit_node_info() {
  $items = array(
    'exhibit' => array(
      'name' => t('Exhibition'),
      'base' => 'node_content',
      'description' => t('Current or future exhibitions at the AKM site or at museums around the world.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

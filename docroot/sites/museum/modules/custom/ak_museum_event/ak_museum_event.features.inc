<?php
/**
 * @file
 * ak_museum_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_museum_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
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
function ak_museum_event_microdata_mappings_defaults() {
  $microdata_mappings = array();

  // Exported Microdata mapping: event
  $microdata_mappings['node']['event'] = array(
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
    'field_short_title' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    'field_event_venue' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    'field_event_venue_address' => array(
      '#itemprop' => array(
        0 => 'location',
      ),
      '#is_item' => FALSE,
    ),
    'field_category' => array(
      '#itemprop' => array(),
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
function ak_museum_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('This content type represents notable events at which speeches occurred.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

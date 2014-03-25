<?php
/**
 * @file
 * ak_thematic_areas_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ak_thematic_areas_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/2222
  $menu_links['main-menu:node/2222'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2222',
    'router_path' => 'node/%',
    'link_title' => 'Civil Society',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'thematic-areas',
  );
  // Exported menu link: main-menu:node/2225
  $menu_links['main-menu:node/2225'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2225',
    'router_path' => 'node/%',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => 'thematic-areas',
  );
  // Exported menu link: main-menu:node/2226
  $menu_links['main-menu:node/2226'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2226',
    'router_path' => 'node/%',
    'link_title' => 'Health',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => 'thematic-areas',
  );
  // Exported menu link: main-menu:node/2229
  $menu_links['main-menu:node/2229'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2229',
    'router_path' => 'node/%',
    'link_title' => 'Humanitarian Assistance',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => 'thematic-areas',
  );
  // Exported menu link: main-menu:thematic-areas
  $menu_links['main-menu:thematic-areas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'thematic-areas',
    'router_path' => 'thematic-areas',
    'link_title' => 'Thematic Areas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Civil Society');
  t('Education');
  t('Health');
  t('Humanitarian Assistance');
  t('Thematic Areas');


  return $menu_links;
}

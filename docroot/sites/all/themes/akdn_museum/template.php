<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Override the first BC element to say 'Aga Khan Museum Home'.
 * Add the page title as last element
 */
function akdn_museum_breadcrumb($variables) {
	$breadcrumb = $variables['breadcrumb'];
  // dpm(menu_get_active_trail());
	if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $args = arg();
    
    $breadcrumb[0] = l('Aga Khan Museum Home', '<front>');
    if (isset($args[0]) && $args[0] == 'search'){
      unset($breadcrumb[2]);
    }
    else if (isset($args[1]) && isset($args[2]) && $args[1] == 'artefact-browser'){
      // Do nothing
    }
    else {
      array_push($breadcrumb, drupal_get_title());
    }
    
    $output = '<div class="breadcrumb"><span class="pre">' . t('You are here') . ': </span>';

    $output .= '<span class="elements">' . implode(' | ', $breadcrumb) . '</span></div>';
    return $output;
  }
}

/**
 * Override Solr recommended items block
 */
function akdn_museum_apachesolr_mlt_recommendation_block($vars) {
  // Realtead Artefacts block. Replace link with thumbnails
  if ($vars['delta'] == 'mlt-002'){
    $docs = $vars['docs'];
    $thumbs = array();
    $links = array();
    foreach ($docs as $result) {
      // $node = array();
      $node = node_load($result->entity_id);
      if ($node) {
        $image = field_get_items('node', $node, 'field_artefact_images');
        if ($image[0]) {
          $output = field_view_value('node', $node, 'field_artefact_images', $image[0], array(
            'type' => 'image',
            'settings' => array(
              'image_style' => 'thumbnail',
              'image_link' => 'content',
            ),
          ));
          $thumbs[] = render($output);          
        }
        else {
          $links[] = l($result->label, $result->path, array('html' => TRUE));
        }
      }
    }
    return theme('item_list', array('items' => $thumbs, 'attributes' => array('class' => 'related-artefacts'))) . '<br class="float-clear" />'. theme('item_list', array('items' => $links));
    
  }
}

/**
 * Add a special template file for the artefact search results.
 * Modify the info line
 */
function akdn_museum_preprocess_search_result(&$variables) {
  $arguments = arg();
  $result = $variables['result'];
  // print '<pre>'.print_r($variables,1).'</pre>';
  
  if ($variables['module'] == 'apachesolr_search' && $arguments[0] == 'collections' && $arguments[1] == 'artefact-browser') {
    $variables['full_node'] = node_load($result['node']->entity_id);
    $variables['theme_hook_suggestions'][] = 'search_result__artefact_search__' . $result['entity_type'] . '__' . $result['bundle'];
  }
  else {
    $info = array();
    if (!empty($result['date'])) {
      $info['date'] = format_date($result['date'], 'short');
    }
    if (!empty($result['bundle'])) {
      $info['bundle'] = $result['type'];
    }
    $variables['info'] = implode(' | ', $info);
  }
}
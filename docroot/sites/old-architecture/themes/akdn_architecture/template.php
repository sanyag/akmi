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
 * Implements hook_preprocess_page().
 */
function akdn_architecture_preprocess_page(&$variables) {
  drupal_add_js(path_to_theme() . '/js/jquery.lettering.js');
  drupal_add_js(path_to_theme() . '/js/script.js');
}

/**
 * Implements hook_preprocess_html().
 */
function akdn_architecture_preprocess_html(&$variables) {
  // Add conditional stylesheets for IE
  drupal_add_css(drupal_get_path('theme', 'akdn_architecture') . '/css/ie-8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(drupal_get_path('theme', 'akdn_architecture') . '/css/ie-7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(drupal_get_path('theme', 'akdn_architecture') . '/css/ie-6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));

  if ($node = menu_get_object()) {
    $video = field_get_items('node', $node, 'field_speech_video');
    if (isset($video[0]['uri']) && !empty($video[0]['uri'])) {
      $variables['attributes_array']['class'][] = 'video-present';
    }
  }
}


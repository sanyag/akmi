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

function ak_museum_preprocess_page(&$variables) {
  global $language;
  drupal_add_js('sites/all/libraries/jquery.infield/jquery.infieldlabel.min.js');
  drupal_add_js('sites/all/libraries/jquery.hoverIntent/jquery.hoverIntent.minified.js');
  drupal_add_js('sites/museum/themes/ak_museum/js/ak_museum.js');
  drupal_add_js('sites/museum/themes/ak_museum/js/jquery.royalslider.min.js');


  drupal_add_css('sites/museum/themes/ak_museum/css/royalslider.css');
  drupal_add_css('sites/museum/themes/ak_museum/css/rs-default.css');
  drupal_add_css('sites/museum/themes/ak_museum/css/gallery-slideshow.css');

  drupal_add_css('sites/museum/themes/ak_museum/css/collections.css');
  drupal_add_css('sites/museum/themes/ak_museum/css/hub-pages.css');
  drupal_add_css('sites/museum/themes/ak_museum/css/search.css');
  drupal_add_css('sites/museum/themes/ak_museum/css/imagecrop-custom.css');

  drupal_add_css('sites/museum/themes/ak_museum/css/ie7.css', array('browsers' => array('IE' => 'IE 7', '!IE' => FALSE)));

  if (isset($variables['node'])) {
    $lang = $variables['node']->language;
    // Add sub-title support to ever node which may have the field.
    if (isset($variables['node']->field_sub_title)) {
      $sub = '';
      if (isset($variables['node']->field_sub_title[$lang])) {
        $sub = $variables['node']->field_sub_title[$lang][0]['value'];
      }

      $variables['title'] = '<span class="clearfix"><span class="title">'. drupal_get_title() . '</span><span class="sub-title">'. nl2br($sub) .'</span></span>';
    }
  }
}

function ak_museum_html_head_alter(&$head_elements) {
  if (drupal_is_front_page()) {
    $viewport = 'width=device-width, initial-scale=.35, maximum-scale=.5, minimum-scale=.35, user-scalable=yes';
    $head_elements['alpha-viewport']['#attributes']['content'] = $viewport;
  }
}

function ak_museum_preprocess_html(&$variables) {

  // Add main image class if it is present.
  $node = menu_get_object();
  if (isset($node->field_image)) {
    foreach ($node->field_image as $lang => $data) {
      $variables['attributes_array']['class'][] = 'with-main-image';
    }
  }
}

/**
 * Minimal markup for Gallery images.
 */
function ak_museum_field__field_images_captions__gallery(&$vars) {
  $output = '<div id="ak-gallery" class="royalSlider rsDefault contentSlider">';

  foreach ($vars['items'] as $gallery_image) {
    foreach ($gallery_image['entity']['field_collection_item'] as $img_field) {
      $caption = !empty($img_field['field_gallery_image']['#object']->field_gallery_caption) ?
        $img_field['field_gallery_image']['#object']->field_gallery_caption['und'][0]['value'] : '';
      $img_path = file_uri_target($img_field['field_gallery_image']['#object']->field_gallery_image['und'][0]['uri']);
      $img_lg = image_style_url('gallery_large', $img_path);
      $img_thumb = image_style_url('square_thumbnail', $img_path);
      $img_orig = file_create_url($img_field['field_gallery_image']['#object']->field_gallery_image['und'][0]['uri']);

      // todo: use the l() function?
      $output .= '<div class="rsContent">';
      // show large image
      $output .= '<img class="rsImg" src="'. $img_lg .'" />';
      $output .= '<div class="rsCaption">';
      // show copyright, if populated
      if ($copyright != '') {
        $output .= '<div class="copyright">&copy; '. $copyright .'</div>';
      }
      // show caption, if populated
      if ($caption != '') {
        $output .= '<div class="caption">'. $caption .'</div>';
      }
      // show the thumbnail pager image
      $output .= '<img class="rsTmb" src="'. $img_thumb .'" />';
      $output .= '</div>'; // rsCaption
      $output .= '</div>'; // rsContent
      //<a class="rsImg"  data-rsDelay="1000" data-rsBigImg="../img/paintings/1.jpg" href="../img/paintings/700x500/1.jpg">Vincent van Gogh - Still Life: Vase with Twelve Sunflowers<img width="96" height="72" class="rsTmb" src="../img/paintings/t/1.jpg" /></a>
    }
  }

  $output .= '</div>';

  return $output;
}

/**
 * Add a special template file for the artefact search results.
 * Modify the info line
 */
function ak_museum_preprocess_search_result(&$variables) {
  $arguments = arg();
  $result = $variables['result'];

  if ($variables['module'] == 'apachesolr_search' && $arguments[0] == 'collections' && $arguments[1] == 'artefact-browser') {
    $variables['full_node'] = node_load($result['node']->entity_id);
    $variables['theme_hook_suggestions'][] = 'search_result__artefact_search__' . $result['entity_type'] . '__' . $result['bundle'];
  }
  elseif ($variables['module'] == 'apachesolr_search' && $arguments[0] == 'search' && $arguments[1] == 'site') {
    $variables['full_node'] = node_load($result['node']->entity_id);
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

/**
 * Customize breadcrumbs.
 */
function ak_museum_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  //dpm($breadcrumb);

  // Optionally get rid of the homepage link.
  //$show_breadcrumb_home = theme_get_setting('omega_breadcrumb_home');
  //if (!$show_breadcrumb_home) {
    //array_shift($breadcrumb);
  //}

  // Return the breadcrumb with separators.
  if (!empty($breadcrumb)) {

    // SEARCH PAGE
    // Alter search page breadcrumb to be Home > Search > [search_term]
    // FIXME this IS a hack, but I couldn't find any other way to alter search
    // page breadcrumbs.
    $args = arg();
    if (isset($args[0]) && $args[0] == 'search' && isset($args[1]) && $args[1] == 'site') {
      $new_breadcrumb = array();
      $new_breadcrumb[] = l(t('Home'), '<front>');
      $new_breadcrumb[] = l(t('Search'), 'search/site');
      if (isset($args[2])) {
        $new_breadcrumb[] = l(urldecode(check_plain($args[2])), 'search/site/'. $args[2]);
      }
      $breadcrumb = $new_breadcrumb;
    }

    // COLLECTION SEARCH
    // Alter collection search breadcrumb to be Home > Collection Search > [search_term]
    // FIXME this IS a hack, but I couldn't find any other way to alter search
    // page breadcrumbs.
    $args = arg();
    if (isset($args[0]) && $args[0] == 'collections' && isset($args[1]) && $args[1] == 'artefact-browser') {
      $new_breadcrumb = array();
      $new_breadcrumb[] = l(t('Home'), '<front>');
      $new_breadcrumb[] = l(t('Collection Search'), 'collections/artefact-browser');
      if (isset($args[2])) {
        $new_breadcrumb[] = l(urldecode(check_plain($args[2])), 'collections/artefact-browser/'. $args[2]);
      }
      $breadcrumb = $new_breadcrumb;
    }

    // test the 2nd element
    if (!empty($breadcrumb[1])) {
      // the breadcrumb string looks like: <a href="/museum/akdntoken-2612">Connect</a>
      preg_match('/(akdntoken)-([0-9]+)/i', $breadcrumb[1], $matches);

      // if the token matches, look up the hub page via term id, and re-build the breadcrumb
      if (isset($matches[1]) && $matches[1] == 'akdntoken') {
        $new_path = _ak_museum_find_hub_page($matches[2]);

        if ($new_path) {
          // re-build the breadcrumb
          $searchfor = '/akdntoken-'. $matches[2] .'/i';
          $breadcrumb[1] = preg_replace($searchfor, $new_path, $breadcrumb[1]);
        } else {
          // unset the breadcrumb, since we can't find a hub page with matching term
          unset($breadcrumb[1]);
        }
      }
    }

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $breadcrumb_separator = '<span class="breadcrumb-separator"> &raquo; </span>';

    $output .= '<div class="breadcrumb">' . implode($breadcrumb_separator, $breadcrumb) . '</div>';
    return $output;
  }
  // Otherwise, return an empty string.
  return '';
}
function _ak_museum_find_hub_page($tid) {
  $nid = db_query("SELECT entity_id FROM {field_data_field_category} WHERE bundle = 'hub_page' AND field_category_tid = :tid", array(':tid' => $tid))->fetchField();
  if ($nid) {
    $alias = drupal_get_path_alias('node/'. $nid);
    return $alias;
  }
  return FALSE;
}


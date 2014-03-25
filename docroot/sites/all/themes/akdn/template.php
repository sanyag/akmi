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
function akdn_preprocess_page(&$variables) {
  drupal_add_js('sites/all/libraries/jquery.replacetext/jquery.replacetext.js');

  //dpm($variables);
  //drupal_add_js(path_to_theme() . '/js/script.js');
  if (arg(0) == "geographies") {
    drupal_add_js(path_to_theme() . '/js/map.js');
  }
  //drupal_add_js(path_to_theme() . '/js/jquery.touchSwipe.min.js');
  // dpm($variables['node']);


}

/**
 * Implements hook_preprocess_html().
 */
function akdn_alpha_preprocess_html(&$variables) {
  // Add conditional stylesheets for IE
  drupal_add_css(drupal_get_path('theme', 'akdn') . '/css/ie-8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(drupal_get_path('theme', 'akdn') . '/css/ie-7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(drupal_get_path('theme', 'akdn') . '/css/ie-6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));

  if ($node = menu_get_object()) {
    $video = field_get_items('node', $node, 'field_speech_video');
    if (isset($video[0]['uri']) && !empty($video[0]['uri'])) {
      $variables['attributes_array']['class'][] = 'video-present';
    }
  }
}



function akdn_preprocess_search_result(&$variables) {
  if (isset($variables['result']['fields']['ss_node_search_info'])){
    $variables['info'] = $variables['result']['fields']['ss_node_search_info'];
  }
}


/**
 * Override Solr recommended items block
 */
function akdn_apachesolr_search_mlt_recommendation_block($vars) {
  $docs = $vars['docs'];
  $links = array();
  foreach ($docs as $result) {
    $result_node = node_load($result->entity_id);
    // Suitable for single-site mode. Label is already safe.
    $links[] = l($result->label, $result->path, array('html' => TRUE));
    if ($result_node) {
      if (in_array($result_node->type, array("project", "article", "event", "gallery", "person", "podcast", "publication", "speech"))) {
        if ($result_node->type != "gallery") {
          $image_type = "field_".$result_node->type."_image";
        } else {
          $image_type = "field_gallery_images";
        }

        $image = field_get_items('node', $result_node, $image_type);
        if ($image[0]) {
          $output = field_view_value('node', $result_node, $image_type, $image[0], array(
            'type' => 'image',
            'settings' => array(
              'image_style' => 'small_thumbnail',
              'image_link' => 'content',
            ),
          ));
          $thumbs[] = '<div class="mlt-row mlt-project"><div class="mlt-row-img">' . render($output) . '</div>' . $result_node->type.": " . l($result->label, $result->path, array('html' => TRUE)) . '</div>';
        } else {
          $thumbs[] = '<div class="mlt-row">' . $result_node->type.": " . l($result->label, $result->path, array('html' => TRUE)) . '</div>';
        }
      } else {
        $thumbs[] = '<div class="mlt-row">' . $result_node->type.": " . l($result->label, $result->path, array('html' => TRUE)) . '</div>';
      }
    }
    //drupal_set_message('<pre>'.print_r($image,true).'</pre>');
  }
  /*$links = array(
    '#theme' => 'item_list',
    '#items' => $links,
  );*/
  return theme('item_list', array('items' => $thumbs, 'attributes' => array('class' => 'related-content')));
  //return render($links);
}

function akdn_addthis_button($variables) {
  $build_mode = $variables['build_mode'];
  $https = isset($_SERVER['HTTPS']) && $_SERVER['HTTPS'] == 'on';
  if (variable_get('addthis_dropdown_disabled', '0')) {
    return ( sprintf('
      <a class="custom-addthis-button" href="http://www.addthis.com/bookmark.php"
        onclick="addthis_url   = location.href; addthis_title = document.title; return addthis_click(this);">Share</a>
      ',
      $https ? addslashes(variable_get('addthis_image_secure', 'https://secure.addthis.com/button1-share.gif')) : addslashes(variable_get('addthis_image', 'http://s9.addthis.com/button1-share.gif')),
      addslashes(variable_get('addthis_image_width', '125')),
      addslashes(variable_get('addthis_image_height', '16')),
      addslashes(variable_get('addthis_image_attributes', 'alt=""'))
    ));
  }
  else {
    return ( sprintf('
      <a class="custom-addthis-button" href="http://www.addthis.com/bookmark.php"
        onmouseover="return addthis_open(this, \'\', \'%s\', \'%s\')"
        onmouseout="addthis_close()"
        onclick="return addthis_sendto()">Share</a>
      ',
      ($build_mode == 'teaser') ? url('node/'. $node->nid, array('absolute' => 1) ) : '[URL]',
      ($build_mode == 'teaser') ? addslashes($node->title) : '[TITLE]',
      $https == 'on' ? addslashes(check_plain(variable_get('addthis_image_secure', 'https://secure.addthis.com/button1-share.gif'))) : addslashes(check_plain(variable_get('addthis_image', 'http://s9.addthis.com/button1-share.gif'))),
      addslashes(variable_get('addthis_image_width', '125')),
      addslashes(variable_get('addthis_image_height', '16')),
      filter_xss(variable_get('addthis_image_attributes', 'alt=""')),
      $https == 'on' ? 'https://secure.addthis.com' : 'http://s7.addthis.com'
    ));
  }
}

function akdn_apachesolr_mlt_recommendation_block($vars) {
  // Realtead Artefacts block. Replace link with thumbnails
  drupal_set_message('<pre>'.$vars['delta'].'</pre>');
  return;
  if ($vars['delta'] == 'mlt-001'){
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

function akdn_preprocess_pager(&$variables) {
  $variables['quantity'] = 8;
}

function akdn_preprocess_pager_previous(&$variables) {
  if (!is_numeric($variables['text'])) {
    $variables['text'] = t('‹ prev');
  }
}

function akdn_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  $li_ellipsis = "";
  if ($_GET['page'] != $pager_max  - 1) {
   $li_ellipsis = theme('pager_link', array('text' => $pager_max, 'page_new' => pager_load_array($pager_total[$element] - 1, $element, $pager_page_array), 'element' => $element, 'parameters' => $parameters));
  }

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…' . $li_ellipsis,
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
  }
}

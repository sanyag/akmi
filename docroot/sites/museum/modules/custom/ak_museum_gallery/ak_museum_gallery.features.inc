<?php
/**
 * @file
 * ak_museum_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_museum_gallery_ctools_plugin_api() {
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
 * Implements hook_image_default_styles().
 */
function ak_museum_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_large.
  $styles['gallery_large'] = array(
    'name' => 'gallery_large',
    'effects' => array(
      110 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => '960',
          'height' => '720',
          'xoffset' => 'center',
          'yoffset' => 'center',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => '',
          'disable_if_no_data' => 1,
        ),
        'weight' => '-10',
      ),
      112 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '960',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '-9',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_microdata_mappings_defaults().
 */
function ak_museum_gallery_microdata_mappings_defaults() {
  $microdata_mappings = array();

  // Exported Microdata mapping: gallery
  $microdata_mappings['node']['gallery'] = array(
    'title_field' => array(
      '#itemprop' => array(
        0 => 'name',
      ),
      '#is_item' => FALSE,
    ),
    'field_short_title' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    'field_image' => array(
      '#itemprop' => array(
        0 => 'image',
      ),
      '#is_item' => FALSE,
    ),
    'field_gallery_images' => array(
      '#itemprop' => array(),
      '#is_item' => FALSE,
    ),
    'body' => array(
      'value' => array(
        '#itemprop' => array(
          0 => 'text',
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
    '#itemtype' => array(
      0 => 'http://schema.org/ImageGallery',
    ),
    'title' => array(
      '#itemprop' => array(
        0 => 'name',
      ),
    ),
    '#is_item' => TRUE,
    '#itemid_token' => '[node:url]',
    '#use_schema_url' => 1,
    'field_category' => array(
      '#itemprop' => array(
        0 => 'speciality',
      ),
      '#is_item' => FALSE,
    ),
  );

  return $microdata_mappings;
}

/**
 * Implements hook_node_info().
 */
function ak_museum_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('A <em>gallery</em> is a collection of images displayed in a grid.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

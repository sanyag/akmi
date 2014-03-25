<?php
/**
 * @file
 * ak_panel_variants.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_panel_variants_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ak_panel_variants_image_default_styles() {
  $styles = array();

  // Exported image style: agency_listing_logo_full.
  $styles['agency_listing_logo_full'] = array(
    'name' => 'agency_listing_logo_full',
    'effects' => array(
      71 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => '100',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

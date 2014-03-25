<?php
/**
 * @file
 * ak_image_inline_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ak_image_inline_styles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ak_image_inline_styles_image_default_styles() {
  $styles = array();

  // Exported image style: inline_full_width.
  $styles['inline_full_width'] = array(
    'name' => 'inline_full_width',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '660',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      13 => NULL,
    ),
  );

  // Exported image style: inline_half_width.
  $styles['inline_half_width'] = array(
    'name' => 'inline_half_width',
    'effects' => array(
      14 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '330',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      15 => NULL,
    ),
  );

  // Exported image style: inline_one_third_width.
  $styles['inline_one_third_width'] = array(
    'name' => 'inline_one_third_width',
    'effects' => array(
      16 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '220',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      17 => NULL,
    ),
  );

  return $styles;
}

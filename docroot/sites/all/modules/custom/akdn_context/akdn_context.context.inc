<?php
/**
 * @file
 * akdn_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function akdn_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press-centre';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'press-centre' => 'press-centre',
        'press-centre/*' => 'press-centre/*',
        'speeches-centre' => 'speeches-centre',
        'speeches-centre/*' => 'speeches-centre/*',
        '~press-centre/publications' => '~press-centre/publications',
        '~press-centre/speeches' => '~press-centre/speeches',
        '~press-centre/in-the-media' => '~press-centre/in-the-media',
        '~press-centre/press-releases' => '~press-centre/press-releases',
        '~press-centre/events' => '~press-centre/events',
        '~press-centre/news' => '~press-centre/news',
        '~press-centre/galleries' => '~press-centre/galleries',
        '~press-centre/videos' => '~press-centre/videos',
        '~press-centre/projects' => '~press-centre/projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-ac_lang_switch' => array(
          'module' => 'akdn_custom',
          'delta' => 'ac_lang_switch',
          'region' => 'footer_first',
          'weight' => '-9',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'footer_first',
          'weight' => '-8',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'press_centre',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['press-centre'] = $context;

  return $export;
}

<?php
/**
 * @file
 * ak_hub_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_hub_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'focus_area_listing';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'focus_areas:page' => 'focus_areas:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'content',
          'weight' => '-40',
        ),
        'bean-further-information---thematic-a' => array(
          'module' => 'bean',
          'delta' => 'further-information---thematic-a',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
        'views-projects-block_7' => array(
          'module' => 'views',
          'delta' => 'projects-block_7',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['focus_area_listing'] = $context;

  return $export;
}

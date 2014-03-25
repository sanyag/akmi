<?php
/**
 * @file
 * ak_podcast.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_podcast_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'podcast_pages';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'podcast' => 'podcast',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_related_content' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_related_content',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['podcast_pages'] = $context;

  return $export;
}

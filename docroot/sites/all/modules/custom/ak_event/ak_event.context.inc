<?php
/**
 * @file
 * ak_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_pages';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~*/edit' => '~*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_related_content' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_related_content',
          'region' => 'content',
          'weight' => '9',
        ),
        'views-events-block_2' => array(
          'module' => 'views',
          'delta' => 'events-block_2',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['event_pages'] = $context;

  return $export;
}

<?php
/**
 * @file
 * ak_slideshow.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_slideshow_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = 'Home page layout for the AK Museum Teaser site.';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'full_width',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page layout for the AK Museum Teaser site.');
  t('layout');
  $export['home_page'] = $context;

  return $export;
}

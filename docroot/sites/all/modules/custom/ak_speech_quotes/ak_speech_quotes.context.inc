<?php
/**
 * @file
 * ak_speech_quotes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_speech_quotes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech_quotes';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speech_quote' => 'speech_quote',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-speech_quotes-block_1' => array(
          'module' => 'views',
          'delta' => 'speech_quotes-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'akdn_custom-ac_lang_switch' => array(
          'module' => 'akdn_custom',
          'delta' => 'ac_lang_switch',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'addthis-addthis' => array(
          'module' => 'addthis',
          'delta' => 'addthis',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'ds_extras-right_sidebar' => array(
          'module' => 'ds_extras',
          'delta' => 'right_sidebar',
          'region' => 'sidebar_second',
          'weight' => '5',
        ),
        'views-galleries-block_1' => array(
          'module' => 'views',
          'delta' => 'galleries-block_1',
          'region' => 'sidebar_second',
          'weight' => '6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speech_quotes'] = $context;

  return $export;
}

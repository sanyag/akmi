<?php
/**
 * @file
 * ak_speech_themes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_speech_themes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech_themes';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speech_theme' => 'speech_theme',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-9',
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
        'addthis-addthis' => array(
          'module' => 'addthis',
          'delta' => 'addthis',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speech_themes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech_themes_listing';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'speech_themes:page_2' => 'speech_themes:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-36' => array(
          'module' => 'block',
          'delta' => '36',
          'region' => 'content',
          'weight' => '-50',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-9',
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
        'addthis-addthis' => array(
          'module' => 'addthis',
          'delta' => 'addthis',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-speeches-block_2' => array(
          'module' => 'views',
          'delta' => 'speeches-block_2',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speech_themes_listing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech_themes_page';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speech_theme' => 'speech_theme',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-speech_themes-block_1' => array(
          'module' => 'views',
          'delta' => 'speech_themes-block_1',
          'region' => 'content',
          'weight' => '-10',
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
        'addthis-addthis' => array(
          'module' => 'addthis',
          'delta' => 'addthis',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'block-46' => array(
          'module' => 'block',
          'delta' => '46',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['speech_themes_page'] = $context;

  return $export;
}

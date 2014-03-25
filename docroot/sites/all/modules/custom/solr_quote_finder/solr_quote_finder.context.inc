<?php
/**
 * @file
 * solr_quote_finder.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function solr_quote_finder_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speech_quote_listing_pages';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_quote_finder:page' => 'solr_quote_finder:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-akdn_speech_quotes_heading' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_speech_quotes_heading',
          'region' => 'content',
          'weight' => '-99',
        ),
        'akdn_custom-akdn_speech_tools' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_speech_tools',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-71' => array(
          'module' => 'block',
          'delta' => '71',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'views-659a7742423b0b4adc617dc43de1a221' => array(
          'module' => 'views',
          'delta' => '659a7742423b0b4adc617dc43de1a221',
          'region' => 'preface_first',
          'weight' => '-11',
        ),
        'akdn_custom-ac_lang_switch' => array(
          'module' => 'akdn_custom',
          'delta' => 'ac_lang_switch',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'preface_first',
          'weight' => '-9',
        ),
        'addthis-addthis' => array(
          'module' => 'addthis',
          'delta' => 'addthis',
          'region' => 'preface_first',
          'weight' => '-8',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'preface_first',
          'weight' => '-7',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_listing_pages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speech_quote_listing_pages'] = $context;

  return $export;
}

<?php
/**
 * @file
 * ak_speech.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_speech_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speeches';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speech' => 'speech',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'akdn_custom-ac_node_translations' => array(
          'module' => 'akdn_custom',
          'delta' => 'ac_node_translations',
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
        'ds_extras-right_sidebar' => array(
          'module' => 'ds_extras',
          'delta' => 'right_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'akdn_custom-akdn_related_content' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_related_content',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['speeches'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speeches_listing_pages';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_pages_1:page' => 'solr_search_pages_1:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
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
        'facetapi-Qu8Sfa4df8HQ1QFtjBkkTsNtQ09oSeNQ' => array(
          'module' => 'facetapi',
          'delta' => 'Qu8Sfa4df8HQ1QFtjBkkTsNtQ09oSeNQ',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'facetapi-zupzn7kXAsRK2RcxwqV1dU1fgN1gVYhc' => array(
          'module' => 'facetapi',
          'delta' => 'zupzn7kXAsRK2RcxwqV1dU1fgN1gVYhc',
          'region' => 'sidebar_second',
          'weight' => '-2',
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
  $export['speeches_listing_pages'] = $context;

  return $export;
}

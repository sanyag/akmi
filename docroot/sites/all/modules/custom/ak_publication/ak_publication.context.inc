<?php
/**
 * @file
 * ak_publication.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_publication_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications_listing_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_pages_1:page_4' => 'solr_search_pages_1:page_4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'block-71' => array(
          'module' => 'block',
          'delta' => '71',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'akdn_custom-akdn_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_filter',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'akdn_custom-akdn_date_filter' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_date_filter',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-ip8etEvWlouYC0MzZj2sKWIWx295MRww' => array(
          'module' => 'facetapi',
          'delta' => 'ip8etEvWlouYC0MzZj2sKWIWx295MRww',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo' => array(
          'module' => 'facetapi',
          'delta' => 'fUzGItoo0Fg0DkTDj0nkzbvRGagI8GWo',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS' => array(
          'module' => 'facetapi',
          'delta' => 'IHlsVp9KPZ1EacbIoXtOBNxRJAUKtIyS',
          'region' => 'sidebar_second',
          'weight' => '-5',
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
  $export['publications_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications_page';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'publication' => 'publication',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-show_media_info-block' => array(
          'module' => 'views',
          'delta' => 'show_media_info-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'akdn_custom-ac_node_translations' => array(
          'module' => 'akdn_custom',
          'delta' => 'ac_node_translations',
          'region' => 'content',
          'weight' => '-9',
        ),
        'akdn_custom-akdn_related_content' => array(
          'module' => 'akdn_custom',
          'delta' => 'akdn_related_content',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['publications_page'] = $context;

  return $export;
}

<?php
/**
 * @file
 * ak_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ak_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agency_listing';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'agencies:page' => 'agencies:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-22' => array(
          'module' => 'block',
          'delta' => '22',
          'region' => 'content',
          'weight' => '-40',
        ),
        'views-publications-block_2' => array(
          'module' => 'views',
          'delta' => 'publications-block_2',
          'region' => 'sidebar_second',
          'weight' => '-1',
        ),
        'bean-further-information---link-block' => array(
          'module' => 'bean',
          'delta' => 'further-information---link-block',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'views-projects-block_6' => array(
          'module' => 'views',
          'delta' => 'projects-block_6',
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
  $export['agency_listing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'basic_pages';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = '';
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['basic_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_listing_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_page:page_1' => 'solr_search_page:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
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
        'views-09f4708b34305badafc340b297f2a095' => array(
          'module' => 'views',
          'delta' => '09f4708b34305badafc340b297f2a095',
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
  $export['events_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'galleries_listing_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_page:page_2' => 'solr_search_page:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
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
        'views-d463bed85c77f30040d5ab9eff32ca37' => array(
          'module' => 'views',
          'delta' => 'd463bed85c77f30040d5ab9eff32ca37',
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
  $export['galleries_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general-carousel';
  $context->description = 'This handles the display of general project carousel for numerous content types';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'event' => 'event',
        'page' => 'page',
        'podcast' => 'podcast',
        'publication' => 'publication',
        'speech' => 'speech',
        'speech_quote' => 'speech_quote',
        'speech_theme' => 'speech_theme',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'articles:page' => 'articles:page',
        'articles:page_1' => 'articles:page_1',
        'events:page_past' => 'events:page_past',
        'events:page_upcoming' => 'events:page_upcoming',
        'galleries:page' => 'galleries:page',
        'galleries:page_1' => 'galleries:page_1',
        'podcasts:page' => 'podcasts:page',
        'publications:page' => 'publications:page',
        'speeches:page' => 'speeches:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-projects-block' => array(
          'module' => 'views',
          'delta' => 'projects-block',
          'region' => 'footer_first',
          'weight' => '-98',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This handles the display of general project carousel for numerous content types');
  t('layouts');
  $export['general-carousel'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hub_page';
  $context->description = '';
  $context->tag = 'layouts';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'agency' => 'agency',
        'architecture_project' => 'architecture_project',
        'award_cycle' => 'award_cycle',
        'focus_area' => 'focus_area',
        'geography' => 'geography',
        'hub_page' => 'hub_page',
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
        '<front>' => '<front>',
        'geographies' => 'geographies',
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
      'delta_template' => 'clone_of_front_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layouts');
  $export['hub_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'listing_pages';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'agencies:page' => 'agencies:page',
        'events:page_upcoming' => 'events:page_upcoming',
        'focus_areas:page' => 'focus_areas:page',
        'press_center:page' => 'press_center:page',
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
  $export['listing_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'podcast_listing_page';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'solr_search_page:page_3' => 'solr_search_page:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
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
        'views-150ffa23b6e9e6efaff013e141bb5548' => array(
          'module' => 'views',
          'delta' => '150ffa23b6e9e6efaff013e141bb5548',
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
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'preface_first',
          'weight' => '-8',
        ),
        'addthis-addthis' => array(
          'module' => 'addthis',
          'delta' => 'addthis',
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
  $export['podcast_listing_page'] = $context;

  return $export;
}

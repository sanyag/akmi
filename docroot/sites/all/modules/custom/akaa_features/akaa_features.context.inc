<?php
/**
 * @file
 * akaa_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function akaa_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_general';
  $context->description = '';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'architecture_project' => 'architecture_project',
        'award_cycle' => 'award_cycle',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'architecture/*' => 'architecture/*',
        'architecture' => 'architecture',
      ),
    ),
    'views' => array(
      'values' => array(
        'akaa_projects:page' => 'akaa_projects:page',
        'akaa_projects:page_1' => 'akaa_projects:page_1',
        'akaa_projects:page_2' => 'akaa_projects:page_2',
        'akaa_projects_map:page' => 'akaa_projects_map:page',
        'articles:page_3' => 'articles:page_3',
        'events:page_2' => 'events:page_2',
        'galleries:page_2' => 'galleries:page_2',
        'podcasts:page_1' => 'podcasts:page_1',
        'press_releases:page_1' => 'press_releases:page_1',
        'speeches:page_1' => 'speeches:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-akaa_footer' => array(
          'module' => 'panels_mini',
          'delta' => 'akaa_footer',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  $export['akaa_general'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_header';
  $context->description = '';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'architecture/projects' => 'architecture/projects',
        'architecture/master-jury/*' => 'architecture/master-jury/*',
        'architecture/steering-committee/*' => 'architecture/steering-committee/*',
        'about-aga-khan-award-architecture' => 'about-aga-khan-award-architecture',
        'architecture/*' => 'architecture/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-56' => array(
          'module' => 'block',
          'delta' => '56',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  $export['akaa_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_people_listing';
  $context->description = '';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'people_listing:page' => 'people_listing:page',
        'people_listing:page_1' => 'people_listing:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-award_cycle-block_3' => array(
          'module' => 'views',
          'delta' => 'award_cycle-block_3',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  $export['akaa_people_listing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'akaa_sidebar';
  $context->description = '';
  $context->tag = 'AKAA Specific';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'architecture/*' => 'architecture/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'akaa_projects:page' => 'akaa_projects:page',
        'people_listing:page' => 'people_listing:page',
        'people_listing:page_1' => 'people_listing:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'panels_mini-akaa_sidebar' => array(
          'module' => 'panels_mini',
          'delta' => 'akaa_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AKAA Specific');
  $export['akaa_sidebar'] = $context;

  return $export;
}

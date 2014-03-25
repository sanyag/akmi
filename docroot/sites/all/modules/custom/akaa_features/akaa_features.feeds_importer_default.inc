<?php
/**
 * @file
 * akaa_features.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function akaa_features_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'project_importer';
  $feeds_importer->config = array(
    'name' => 'Project Importer',
    'description' => 'Importer for the AKAA project',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'cycles',
            'target' => 'field_cycle_year',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'title',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'title',
            'target' => 'field_short_title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'building_type1',
            'target' => 'field_building_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'city',
            'target' => 'field_city',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'country',
            'target' => 'field_arch_country',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'region',
            'target' => 'field_region',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'client',
            'target' => 'field_client',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'architect',
            'target' => 'field_architect',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'planner',
            'target' => 'field_planner',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'completed',
            'target' => 'field_completed_date_timestamp:start',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'design',
            'target' => 'field_design_date',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'site_size',
            'target' => 'field_size',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'latitude',
            'target' => 'field_geocode_lat_long:lat',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'longitude',
            'target' => 'field_geocode_lat_long:lon',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'ceremony_location',
            'target' => 'field_ceremony_location',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'winner',
            'target' => 'field_winner',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'winner_embargo',
            'target' => 'field_winner_embargo',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'architecture_project',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['project_importer'] = $feeds_importer;

  return $export;
}

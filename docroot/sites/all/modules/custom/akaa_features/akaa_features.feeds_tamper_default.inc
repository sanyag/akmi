<?php
/**
 * @file
 * akaa_features.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function akaa_features_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'project_importer-building_type_2-rewrite';
  $feeds_tamper->importer = 'project_importer';
  $feeds_tamper->source = 'building_type 2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[building_type1], [building_type2]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['project_importer-building_type_2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'project_importer-winner-convert_to_boolean';
  $feeds_tamper->importer = 'project_importer';
  $feeds_tamper->source = 'winner';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'y',
    'false_value' => 'n',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['project_importer-winner-convert_to_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'project_importer-winner_embargo-convert_to_boolean';
  $feeds_tamper->importer = 'project_importer';
  $feeds_tamper->source = 'winner_embargo';
  $feeds_tamper->plugin_id = 'convert_boolean';
  $feeds_tamper->settings = array(
    'true_value' => 'y',
    'false_value' => 'n',
    'match_case' => 0,
    'no_match' => 'false',
    'other_text' => '',
    'no_match_value' => FALSE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to boolean';
  $export['project_importer-winner_embargo-convert_to_boolean'] = $feeds_tamper;

  return $export;
}

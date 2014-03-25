<?php
/**
 * @file
 * ak_article.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function ak_article_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'clone_of_listing_pages';
  $delta->name = 'Press Releases';
  $delta->description = '';
  $delta->theme = 'akdn';
  $delta->mode = 'preserve';
  $delta->parent = 'listing_pages';
  $delta->settings = array(
    'theme_akdn_settings' => array(
      'alpha_region_preface_second_equal_height_element' => FALSE,
      'alpha_region_preface_third_equal_height_element' => FALSE,
      'alpha_region_user_first_columns' => '5',
      'alpha_region_menu_columns' => '18',
      'alpha_region_menu_css' => 'alpha',
      'alpha_region_content_columns' => '13',
      'alpha_region_sidebar_second_columns' => '10',
    ),
  );
  $export['clone_of_listing_pages'] = $delta;

  return $export;
}

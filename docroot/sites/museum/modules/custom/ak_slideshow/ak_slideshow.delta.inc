<?php
/**
 * @file
 * ak_slideshow.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function ak_slideshow_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'full_width';
  $delta->name = 'Full width';
  $delta->description = 'Full width content region for the home page.';
  $delta->theme = 'ak_museum';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_ak_museum_settings' => array(
      'alpha_grid' => 'alpha_fluid',
      'alpha_responsive' => 1,
      'alpha_region_preface_first_zone' => NULL,
      'alpha_region_preface_first_equal_height_element' => FALSE,
      'alpha_region_postscript_first_zone' => NULL,
      'alpha_region_postscript_first_equal_height_element' => FALSE,
      'alpha_region_postscript_second_zone' => NULL,
      'alpha_region_postscript_second_equal_height_element' => FALSE,
      'alpha_region_preface_second_zone' => NULL,
      'alpha_region_preface_second_equal_height_element' => FALSE,
      'alpha_region_postscript_third_zone' => NULL,
      'alpha_region_postscript_third_equal_height_element' => FALSE,
      'alpha_region_preface_third_zone' => NULL,
      'alpha_region_preface_third_equal_height_element' => FALSE,
      'alpha_region_postscript_fourth_zone' => NULL,
      'alpha_region_postscript_fourth_equal_height_element' => FALSE,
    ),
  );
  $export['full_width'] = $delta;

  return $export;
}

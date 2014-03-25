<?php
/**
 * @file
 * ak_press_centre.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function ak_press_centre_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'listing_pages';
  $delta->name = 'Listing Pages';
  $delta->description = '';
  $delta->theme = 'akdn';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_akdn_settings' => array(
      'alpha_exclude' => array(
        'sites/all/modules/contrib/date/date_api/date.css' => 0,
        'sites/all/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
        'modules/field/theme/field.css' => 0,
        'sites/all/modules/contrib/flexslider/assets/css/flexslider_img.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/contrib/views/css/views.css' => 0,
        'sites/all/themes/akdn/css/print.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_toggle_page_title' => 0,
      'alpha_region_preface_second_zone' => NULL,
      'alpha_region_preface_second_equal_height_element' => FALSE,
      'alpha_region_preface_third_zone' => NULL,
      'alpha_region_preface_third_equal_height_element' => FALSE,
      'alpha_region_user_first_columns' => '5',
      'alpha_region_menu_columns' => '18',
      'alpha_region_menu_css' => 'alpha',
      'alpha_zone_preface_columns' => '24',
      'alpha_zone_preface_css' => 'press-centre-listing-inner',
      'alpha_zone_preface_wrapper_css' => 'press-centre-listing',
      'alpha_region_preface_first_columns' => '24',
    ),
  );
  $export['listing_pages'] = $delta;

  return $export;
}

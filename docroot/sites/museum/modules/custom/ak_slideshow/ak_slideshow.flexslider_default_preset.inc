<?php
/**
 * @file
 * ak_slideshow.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function ak_slideshow_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'home_page_slideshow';
  $preset->title = 'Home page slideshow';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'featured_content';
  $preset->options = array(
    'animation' => 'fade',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 7000,
    'animationLoop' => 1,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 0,
    'controlNav' => 1,
    'keyboardNav' => 0,
    'mousewheel' => 0,
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
    'start' => 'var nav = jQuery(\'.flex-control-nav\');
var current = jQuery(\'.flex-control-nav .active\').parent().index();
var imageHeight = jQuery(\'.flexslider ul li\').eq(current).find(\'img\').height();
var headerHeight = jQuery(\'#section-header\').height();
if (headerHeight + imageHeight >= jQuery(window).height()) {
  jQuery(\'.flexslider ul li\').eq(current).find(\'.views-field-nothing\').css(\'position\', \'fixed\');
  nav.css(\'position\', \'fixed\');
}
else {
  jQuery(\'.flexslider ul li\').eq(current).find(\'.views-field-nothing\').css(\'position\', \'absolute\');
  nav.css(\'position\', \'absolute\');
}
',
    'end' => '',
    'before' => '',
    'after' => 'var nav = jQuery(\'.flex-control-nav\');
var current = jQuery(\'.flex-control-nav .active\').parent().index();
var imageHeight = jQuery(\'.flexslider ul li\').eq(current).find(\'img\').height();
var headerHeight = jQuery(\'#section-header\').height();
if (headerHeight + imageHeight >= jQuery(window).height()) {
  jQuery(\'.flexslider ul li\').eq(current).find(\'.views-field-nothing\').css(\'position\', \'fixed\');
  nav.css(\'position\', \'fixed\');
}
else {
  jQuery(\'.flexslider ul li\').eq(current).find(\'.views-field-nothing\').css(\'position\', \'absolute\');
  nav.css(\'position\', \'absolute\');
}
',
  );
  $export['home_page_slideshow'] = $preset;

  return $export;
}

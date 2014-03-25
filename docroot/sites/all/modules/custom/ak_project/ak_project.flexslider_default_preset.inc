<?php
/**
 * @file
 * ak_project.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function ak_project_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'projects_slider';
  $preset->title = 'Projects Slider';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->options = array(
    'animation' => 'slide',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 15000,
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
    'start' => 'var current = $(\'.flex-control-nav .active\').parent().index();
var slideText = $(\'.flexslider ul li\').eq(current+1).find(\'.slide-text\').html();
$(\'.slider-caption\').html(slideText);
$(\'.slider-caption\').fadeIn(\'fast\');',
    'end' => '',
    'before' => '$(\'.slider-caption\').fadeOut();
$(\'.slider-caption\').text(\'\');',
    'after' => 'var current = $(\'.flex-control-nav .active\').parent().index();
var slideText = $(\'.flexslider ul li\').eq(current+1).find(\'.slide-text\').html();
$(\'.slider-caption\').html(slideText);
$(\'.slider-caption\').fadeIn(\'fast\');',
  );
  $export['projects_slider'] = $preset;

  return $export;
}

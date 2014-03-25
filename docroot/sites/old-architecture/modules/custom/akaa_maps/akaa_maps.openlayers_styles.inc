<?php
/**
 * @file
 * akaa_maps.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function akaa_maps_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'akaa_marker_1';
  $openlayers_styles->title = 'AKAA Marker 1';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/architecture/themes/akdn_architecture/images/google_akaa.gif',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 0,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'square',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['akaa_marker_1'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'akaa_marker_2';
  $openlayers_styles->title = 'AKAA Marker 2';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/architecture/themes/akdn_architecture/images/google_akaa2.gif',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 0,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'square',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 12,
    'graphicHeight' => 12,
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['akaa_marker_2'] = $openlayers_styles;

  return $export;
}

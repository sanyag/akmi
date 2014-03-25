<?php
/**
 * @file
 * akaa_maps.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function akaa_maps_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'project_location';
  $openlayers_maps->title = 'Project Location';
  $openlayers_maps->description = 'The map displayed on a project page';
  $openlayers_maps->data = array(
    'width' => '238px',
    'height' => '238px',
    'image_path' => 'sites/architecture/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/architecture/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0,0',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_zoompanel' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'geofield_formatter',
        'point_zoom_level' => '15',
      ),
    ),
    'default_layer' => 'virtualearth_satellite',
    'layers' => array(
      'virtualearth_satellite' => 'virtualearth_satellite',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'project_locations_openlayers_2' => '0',
      'project_locations_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'project_locations_openlayers_1' => '0',
      'project_locations_openlayers_2' => '0',
      'geofield_formatter' => 'akaa_marker_1',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'project_locations_openlayers_1' => '0',
      'project_locations_openlayers_2' => '0',
      'geofield_formatter' => 'akaa_marker_1',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_geojson_picture_this' => 0,
      'project_locations_openlayers_1' => 0,
      'project_locations_openlayers_2' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'project_locations_openlayers_1' => 0,
      'project_locations_openlayers_2' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'akaa_marker_1',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['project_location'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'projects_map';
  $openlayers_maps->title = 'Project Map';
  $openlayers_maps->description = 'This map displays all projects';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/architecture/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/architecture/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '1',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'project_locations_openlayers_1' => 'project_locations_openlayers_1',
          'project_locations_openlayers_2' => 'project_locations_openlayers_2',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'virtualearth_satellite',
        'point_zoom_level' => '1',
      ),
    ),
    'default_layer' => 'google_satellite',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'mapquest_osm' => 'mapquest_osm',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'virtualearth_satellite' => 'virtualearth_satellite',
      'project_locations_openlayers_1' => 'project_locations_openlayers_1',
      'project_locations_openlayers_2' => 'project_locations_openlayers_2',
    ),
    'layer_weight' => array(
      'project_locations_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
      'project_locations_openlayers_2' => '1',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'akaa_marker_1',
      'openlayers_geojson_picture_this' => '0',
      'project_locations_openlayers_1' => 'akaa_marker_1',
      'project_locations_openlayers_2' => 'akaa_marker_2',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'project_locations_openlayers_1' => 'akaa_marker_1',
      'project_locations_openlayers_2' => 'akaa_marker_2',
    ),
    'layer_activated' => array(
      'project_locations_openlayers_1' => 'project_locations_openlayers_1',
      'project_locations_openlayers_2' => 'project_locations_openlayers_2',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'project_locations_openlayers_1' => 0,
      'project_locations_openlayers_2' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'akaa_marker_1',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['projects_map'] = $openlayers_maps;

  return $export;
}

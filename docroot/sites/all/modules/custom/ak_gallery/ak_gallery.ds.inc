<?php
/**
 * @file
 * ak_gallery.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_gallery_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gallery|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gallery';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'gallery_images' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|gallery|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gallery|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gallery';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'short_title_as_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|gallery|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ak_gallery_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'gallery_images';
  $ds_field->label = 'Gallery Images';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
global $language;

$lang = $language->language;
foreach ($entity->field_gallery_images[$lang] as $key => $img_array) {

  $switch = "";
  if ($key % 2 == 0) {
    $switch = "even";
  }
  else {
    $switch = "odd";
  }

  // Fallback for caption.
  $title = "";
  if (!empty($img_array[\'field_image_caption\'][\'und\'][0][\'value\'])) {
    $title = strip_tags($img_array[\'field_image_caption\'][\'und\'][0][\'value\']);
  }
  elseif (!empty($img_array[\'title\'])) {
    $title = strip_tags($img_array[\'title\']);
  }

  $img_uri = $img_array[\'uri\'];

  $img_vars = array(
    \'style_name\' => \'article_listing_thumbnail\',
    \'path\' => $img_uri,
    \'width\' => $img_array[\'width\'],
    \'height\' => $img_array[\'height\'],
  );

  if (!empty($title)) {
    $img_vars[\'title\'] = $title;
    $img_vars[\'alt\'] = $title;
  }
  $image = theme_image_style($img_vars);

  $large_image = file_create_url($img_uri);

  $link_options = array(
    \'attributes\' => array(
      \'class\' => array(\'colorbox-load\'),
    ),
  );

  $link = "<a href=\'$large_image\' title=\'$title\' class=\'colorbox\' rel=\'gallery\' >$image</a>";
  $img_frame = "<div class=\'field-item-gallery-image $switch\'>" . $link . "</div>";
  print($img_frame);
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['gallery_images'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_gallery_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gallery|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'gallery_images',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'gallery_images' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '2',
    'page_option_title' => '%node:title_field',
  );
  $export['node|gallery|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gallery|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_gallery_images',
      ),
      'right' => array(
        0 => 'short_title_as_link',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_gallery_images' => 'left',
      'short_title_as_link' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'limit' => array(
      'field_gallery_images' => '1',
    ),
    'classes' => array(),
  );
  $export['node|gallery|teaser'] = $ds_layout;

  return $export;
}

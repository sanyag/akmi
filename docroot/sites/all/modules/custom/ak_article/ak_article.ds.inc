<?php
/**
 * @file
 * ak_article.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ak_article_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'article_meta' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'p',
        'fi-cl' => '',
      ),
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|featured_article';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'featured_article';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => '| More',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|article|featured_article'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'image_colorbox_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pdf_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_article_link' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'strong',
        'lb-col' => TRUE,
        'fis' => TRUE,
        'fis-el' => 'p',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => 'article-related-link',
      ),
    ),
  );
  $export['node|article|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|search_index';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'search_index';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|article|search_index'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
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
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'field_article_img' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ak_article_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'article_meta';
  $ds_field->label = 'Article Meta';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<span>[node:field-article-cat:name]</span> <?php if(!empty($entity->field_article_author)): ?> | by [node:field-article-author] <?php endif; ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['article_meta'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'image_colorbox_link';
  $ds_field->label = 'Image + Colorbox Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php

// Map which image field to use for which content type.
$entity_array;
switch ($entity->type) {
  case \'article\':
    $entity_array = $entity->field_article_img;
    break;
  case \'page\':
  case \'hub_page\':
    $entity_array = $entity->field_hub_page_image;
    break;
  case \'event\':
    $entity_array = $entity->field_event_image;
    break;
  case \'publication\':
    $entity_array = $entity->field_publication_image;
    break;
  case \'speech\':
    $entity_array = $entity->field_speech_image;
    break;
  case \'podcast\':
    $entity_array = $entity->field_podcast_image;
    break;
  case \'person\':
    $entity_array = $entity->field_person_image;
    break;
}

// Grab the image information for processing.
if (!empty($entity_array)) {

  // Grab the language of the image field.
  foreach ($entity_array as $lang => $this_entity) {
    break;
  }

  if (!empty($entity_array[$lang])) {
    $img_array = array_pop($entity_array[$lang]);
  } elseif (!empty($entity_array[\'und\'])) {
    $img_array = array_pop($entity_array[\'und\']);
  }
  $title = (!empty($img_array[\'title\'])) ? $img_array[\'title\'] : " ";
  $caption = "";

  if (!empty($img_array[\'field_image_caption\'][$lang])) {
    $caption = $img_array[\'field_image_caption\'][$lang][0][\'safe_value\'];
  } elseif (!empty($img_array[\'field_image_caption\'][\'und\'])) {
    $caption = $img_array[\'field_image_caption\'][\'und\'][0][\'safe_value\'];
  }

  $copyright = "";
  if (!empty($img_array[\'field_image_copytight\'][$lang])) {
    $copyright = $img_array[\'field_image_copytight\'][$lang][0][\'safe_value\'];
  } elseif (!empty($img_array[\'field_image_copytight\'][\'und\'])) {
    $copyright = $img_array[\'field_image_copytight\'][\'und\'][0][\'safe_value\'];
  }

  $url = image_style_url(\'download_max\',$img_array[\'uri\']);
  $img = theme(\'image_style\', array(
    \'style_name\' => \'node_page_header\',
    \'path\' => $img_array[\'uri\'],
    \'title\' => $title,
    \'alt\' => $caption,
    ));
  if ($entity->type != \'publication\') {
    $link = l($img, $url, array(
      \'html\' => TRUE,
      \'attributes\' => array(
        \'title\' => $caption,
        \'class\' => array(\'colorbox\'),
      ),
    ));
  } else {
    $entity_array = $entity->field_publication_file;
    if (!empty($entity_array)) {
      foreach ($entity_array as $lang => $this_entity) {
        break;
      }
      if (!empty($entity_array[$lang])) {
        $file_array = array_pop($entity_array[$lang]);
      } elseif (!empty($entity_array[\'und\'])) {
        $file_array = array_pop($entity_array[\'und\']);
      }
    }
    $link = l($img,file_create_url($file_array[\'uri\']),array(\'html\' => TRUE));
  }
  
  print $link;
  if (!empty($caption)) {
    $caption_html = \'<div class="img-caption"><span class="caption-text">\' . $caption;
    if (!empty($copyright)) {
      $caption_html .= " Copyright: " . $copyright;
    }
    $caption_html .= "</span></div>";
    echo $caption_html;
  }
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['image_colorbox_link'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ak_article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_article_img',
        1 => 'group_meta_info',
        2 => 'body',
        3 => 'field_article_link',
        4 => 'field_publish_date',
        5 => 'article_meta',
        6 => 'field_tags',
      ),
    ),
    'fields' => array(
      'field_article_img' => 'ds_content',
      'group_meta_info' => 'ds_content',
      'body' => 'ds_content',
      'field_article_link' => 'ds_content',
      'field_publish_date' => 'ds_content',
      'article_meta' => 'ds_content',
      'field_tags' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|featured_article';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'featured_article';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'field_short_title',
        1 => 'title_field',
        2 => 'title',
        3 => 'body',
        4 => 'node_link',
      ),
      'left' => array(
        0 => 'field_article_img',
      ),
    ),
    'fields' => array(
      'field_short_title' => 'right',
      'field_article_img' => 'left',
      'title_field' => 'right',
      'title' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|article|featured_article'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'image_colorbox_link',
        1 => 'field_media_source',
        2 => 'body',
        3 => 'group_body_wrapper',
        4 => 'field_article_link',
      ),
      'right_sidebar_pr' => array(
        0 => 'pdf_link',
      ),
    ),
    'fields' => array(
      'image_colorbox_link' => 'ds_content',
      'field_media_source' => 'ds_content',
      'body' => 'ds_content',
      'group_body_wrapper' => 'ds_content',
      'field_article_link' => 'ds_content',
      'pdf_link' => 'right_sidebar_pr',
    ),
    'classes' => array(),
    'hide_page_title' => '2',
    'page_option_title' => '%node:title_field',
  );
  $export['node|article|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_article_img',
      ),
      'right' => array(
        0 => 'title',
        1 => 'field_publish_date',
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_article_img' => 'left',
      'title' => 'right',
      'field_publish_date' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|article|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_article_img',
      ),
      'right' => array(
        0 => 'short_title_as_link',
        1 => 'body',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_article_img' => 'left',
      'short_title_as_link' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|article|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ak_article_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured_article';
  $ds_view_mode->label = 'Featured Article';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['featured_article'] = $ds_view_mode;

  return $export;
}

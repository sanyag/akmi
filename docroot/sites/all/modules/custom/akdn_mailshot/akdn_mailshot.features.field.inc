<?php
/**
 * @file
 * akdn_mailshot.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function akdn_mailshot_field_default_fields() {
  $fields = array();

  // Exported field: 'node-simplenews-body'.
  $fields['node-simplenews-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'simplenews',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'entity_translation_sync' => FALSE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-simplenews-field_newsletter'.
  $fields['node-simplenews-field_newsletter'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_newsletter',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'viewfield',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'viewfield',
    ),
    'field_instance' => array(
      'bundle' => 'simplenews',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'viewfield',
          'settings' => array(),
          'type' => 'viewfield_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_newsletter',
      'label' => 'Newsletter',
      'required' => 0,
      'settings' => array(
        'allowed_views' => array(
          'about_us' => 0,
          'about_us_related' => 0,
          'admin_content' => 0,
          'agencies' => 0,
          'akaa_projects' => 0,
          'akaa_projects_map' => 0,
          'akaa_search_pages' => 0,
          'akaa_solr_search_page' => 0,
          'akdn_newsletters' => 'akdn_newsletters',
          'akdn_tweets' => 0,
          'areas_of_activity' => 0,
          'article_reference' => 0,
          'articles' => 0,
          'award_cycle' => 0,
          'award_cycle_news' => 0,
          'bulk_update' => 0,
          'events' => 0,
          'featured_slideshow' => 0,
          'featured_slideshow_manual' => 0,
          'feeds_log' => 0,
          'field_collection_view' => 0,
          'focus_areas' => 0,
          'galleries' => 0,
          'geographies_featured' => 0,
          'hub_pages' => 0,
          'image_edit' => 0,
          'manual_about_page' => 0,
          'manual_project_block' => 0,
          'media_default' => 0,
          'nodequeue_11' => 0,
          'nodequeue_16' => 0,
          'nodequeue_21' => 0,
          'nodequeue_22' => 0,
          'nodequeue_23' => 0,
          'nodequeue_24' => 0,
          'nodequeue_3' => 0,
          'nodequeue_4' => 0,
          'nodequeue_6' => 0,
          'people_listing' => 0,
          'person_type' => 0,
          'podcasts' => 0,
          'press_center' => 0,
          'press_centre_listing_slideshows' => 0,
          'press_releases' => 0,
          'project_pages' => 0,
          'projects' => 0,
          'projects_press_centre' => 0,
          'projects_related_items' => 0,
          'publications' => 0,
          'show_media_info' => 0,
          'solr_press_center_landing_page' => 0,
          'solr_quote_finder' => 0,
          'solr_search_page' => 0,
          'solr_search_pages_1' => 0,
          'solr_site_search' => 0,
          'speech_quotes' => 0,
          'speech_themes' => 0,
          'speeches' => 0,
          'taxonomy_term_update' => 0,
          'tweets' => 0,
          'workbench_current_user' => 0,
          'workbench_edited' => 0,
          'workbench_moderation' => 0,
          'workbench_recent_content' => 0,
        ),
        'entity_translation_sync' => FALSE,
        'force_default' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_select',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'node-simplenews-field_simplenews_term'.
  $fields['node-simplenews-field_simplenews_term'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_simplenews_term',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'newsletter',
            'parent' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'simplenews',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'email_html' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'email_plain' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'email_textalt' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_simplenews_term',
      'label' => 'Newsletter category',
      'required' => TRUE,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '32',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Newsletter');
  t('Newsletter category');

  return $fields;
}

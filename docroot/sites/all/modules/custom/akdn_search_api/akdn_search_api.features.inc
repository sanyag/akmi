<?php
/**
 * @file
 * akdn_search_api.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function akdn_search_api_default_search_api_index() {
  $items = array();
  $items['akdn'] = entity_import('search_api_index', '{
    "name" : "akdn",
    "machine_name" : "akdn",
    "description" : "Index AKDN nodes",
    "server" : "akdn_acquia",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "type" : { "type" : "string" },
        "title" : { "type" : "text" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "boolean" },
        "promote" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "source" : { "type" : "integer", "entity_type" : "node" },
        "publish_date_year" : { "type" : "integer" },
        "event_date_start_year" : { "type" : "integer" },
        "event_date_end_year" : { "type" : "integer" },
        "event_date_start_time" : { "type" : "integer" },
        "start_time" : { "type" : "integer" },
        "publish_time" : { "type" : "date" },
        "image_public_uri" : { "type" : "string" },
        "node_url_alias" : { "type" : "string" },
        "node_summary" : { "type" : "string" },
        "node_short_title" : { "type" : "string" },
        "speech_quotes_count" : { "type" : "integer" },
        "speech_quotes" : { "type" : "string" },
        "speech_quotes_nid" : { "type" : "integer" },
        "quotes_data" : { "type" : "string" },
        "entity_type" : { "type" : "string" },
        "feed_nid" : { "type" : "integer" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "title_field" : { "type" : "text" },
        "field_short_title" : { "type" : "text" },
        "field_enable_project_slider" : { "type" : "boolean" },
        "field_caption" : { "type" : "text" },
        "field_cycle_year" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_pages_to_exclude" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_create_featured_content" : { "type" : "boolean" },
        "field_article_cat" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_article_author" : { "type" : "text" },
        "field_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_focus_area" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_agency" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_publish_date" : { "type" : "date" },
        "field_related_project" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_events_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_date_decade" : { "type" : "text" },
        "field_photos_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_podcasts_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_speeches_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_press_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_in_the_media" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_news" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_publications" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_caption_override" : { "type" : "text" },
        "field_event_location" : { "type" : "text" },
        "field_publication_isbn" : { "type" : "list\\u003Ctext\\u003E" },
        "field_publication_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_publication_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_speech_location" : { "type" : "text" },
        "field_speech_themes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_speech_type" : { "type" : "string" },
        "field_speech_event" : { "type" : "integer", "entity_type" : "node" },
        "field_speech_author" : { "type" : "text" },
        "field_publication_date" : { "type" : "date" },
        "field_speech_speaker" : { "type" : "integer", "entity_type" : "node" },
        "field_person_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_sub_title" : { "type" : "text" },
        "field_summary" : { "type" : "text" },
        "field_project_budget" : { "type" : "text" },
        "field_project_location" : { "type" : "text" },
        "field_project_image_caption" : { "type" : "text" },
        "field_featured_content_area" : { "type" : "boolean" },
        "field_featured_content_nodes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_turn_on_secondary_footer" : { "type" : "boolean" },
        "field_hub_page_project" : { "type" : "integer", "entity_type" : "node" },
        "field_use_focus_area_body_text" : { "type" : "boolean" },
        "field_project_listing_area" : { "type" : "boolean" },
        "field_project_listing_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_speech_reference" : { "type" : "integer", "entity_type" : "node" },
        "field_associated_theme" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_agency_geography" : { "type" : "integer", "entity_type" : "node" },
        "field_arch_country" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_architect" : { "type" : "text" },
        "field_building_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_ceremony_location" : { "type" : "text" },
        "field_city" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_client" : { "type" : "text" },
        "field_completed_date" : { "type" : "text" },
        "field_completed_date_timestamp" : { "type" : "date" },
        "field_design_date" : { "type" : "text" },
        "field_planner" : { "type" : "text" },
        "field_region" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_size" : { "type" : "text" },
        "field_winner" : { "type" : "boolean" },
        "field_award_year" : { "type" : "date" },
        "field_master_jury" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_steering_committee" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_eligibility_criteria" : { "type" : "integer", "entity_type" : "node" },
        "field_award_ceremony" : { "type" : "integer", "entity_type" : "node" },
        "field_chairman_s_award" : { "type" : "integer", "entity_type" : "node" },
        "field_news" : { "type" : "integer", "entity_type" : "node" },
        "field_press_materials" : { "type" : "integer", "entity_type" : "node" },
        "field_award_recipients" : { "type" : "boolean" },
        "field_calendar" : { "type" : "integer", "entity_type" : "node" },
        "field_submission_procedure" : { "type" : "integer", "entity_type" : "node" },
        "field_review_selection_procedure" : { "type" : "integer", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text" },
        "field_cycle_year:tid" : { "type" : "integer" },
        "field_event_date:value" : { "type" : "date" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "agency" : "agency",
              "architecture_project" : "architecture_project",
              "article" : "article",
              "award_cycle" : "award_cycle",
              "featured_content" : "featured_content",
              "page" : "page",
              "event" : "event",
              "gallery" : "gallery",
              "geography" : "geography",
              "hub_page" : "hub_page",
              "person" : "person",
              "podcast" : "podcast",
              "project" : "project",
              "publication" : "publication",
              "speech" : "speech",
              "speech_quote" : "speech_quote"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "lang_field" : "",
            "languages" : {
              "und" : "und",
              "en" : "en",
              "fr" : "fr",
              "ar" : "ar",
              "zh-hans" : "zh-hans",
              "de" : "de",
              "it" : "it",
              "ms" : "ms",
              "fa" : "fa",
              "pt" : "pt",
              "ru" : "ru",
              "es" : "es",
              "tg" : "tg"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "searchtext",
                "type" : "fulltext",
                "fields" : [
                  "title",
                  "author",
                  "field_tags",
                  "field_short_title",
                  "field_use_focus_area_body_text"
                ],
                "description" : "A Fulltext aggregation of the following fields: Title, Author, Tags, Short Title, Use Thematic Area Body Text."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "title_field" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_caption" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_caption" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_caption" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_short_title" : true,
              "field_article_author" : true,
              "field_caption" : true,
              "field_date_decade" : true,
              "field_caption_override" : true,
              "field_event_location" : true,
              "field_publication_isbn" : true,
              "field_speech_location" : true,
              "field_speech_author" : true,
              "field_project_budget" : true,
              "field_project_location" : true,
              "field_sub_title" : true,
              "field_summary" : true,
              "field_project_image_caption" : true,
              "field_architect" : true,
              "field_ceremony_location" : true,
              "field_client" : true,
              "field_completed_date" : true,
              "field_design_date" : true,
              "field_planner" : true,
              "field_size" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function akdn_search_api_default_search_api_server() {
  $items = array();
  $items['akdn_acquia'] = entity_import('search_api_server', '{
    "name" : "akdn_acquia",
    "machine_name" : "akdn_acquia",
    "description" : "",
    "class" : "acquia_search_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "search.acquia.com",
      "port" : "80",
      "path" : "\\/solr\\/GRTV-25551",
      "edismax" : 0,
      "modify_acquia_connection" : 0,
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  $items['akdn_srijan'] = entity_import('search_api_server', '{
    "name" : "akdn_srijan",
    "machine_name" : "akdn_srijan",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "srijan-sites.com",
      "port" : "8080",
      "path" : "\\/solr\\/stag_akdn",
      "http_user" : "admin",
      "http_pass" : "anand2010",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

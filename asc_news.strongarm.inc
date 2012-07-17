<?php
/**
 * @file
 * asc_news.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_news_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__asc_news';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__asc_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_asc_news';
  $strongarm->value = array();
  $export['menu_options_asc_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_asc_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_asc_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_asc_news';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_asc_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_asc_news';
  $strongarm->value = '1';
  $export['node_preview_asc_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_asc_news';
  $strongarm->value = 1;
  $export['node_submitted_asc_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_news_terms_1';
  $strongarm->value = (object) array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'news_terms_1',
    'view_name' => 'asc_news',
    'display' => 'news_page',
    'status' => 1,
  );
  $export['tvi_vocab_news_terms_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_news_terms_2';
  $strongarm->value = (object) array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'news_terms_2',
    'view_name' => 'asc_news',
    'display' => 'news_page',
    'status' => 1,
  );
  $export['tvi_vocab_news_terms_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_news_terms_3';
  $strongarm->value = (object) array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'news_terms_3',
    'view_name' => 'asc_news',
    'display' => 'asc_events_page',
    'status' => 1,
  );
  $export['tvi_vocab_news_terms_3'] = $strongarm;

  return $export;
}

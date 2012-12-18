<?php
/**
 * @file
 * asc_news.entity_path.inc
 */

/**
 * Implements hook_entity_path_config_default().
 */
function asc_news_entity_path_config_default() {
  $export = array();

  $entity_path_config = new stdClass();
  $entity_path_config->disabled = FALSE; /* Edit this to true to make a default entity_path_config disabled initially */
  $entity_path_config->api_version = 1;
  $entity_path_config->cid = '2';
  $entity_path_config->instance = 'taxonomy_term:news_terms_1';
  $entity_path_config->path_pattern = 'news/filters/[term:tid]';
  $entity_path_config->query_pattern = '';
  $entity_path_config->fragment_pattern = '';
  $entity_path_config->config = array(
    'pathauto_cleanstring' => 0,
    'space_separator' => 0,
    'space_separator_char' => '_',
    'path_case' => '',
  );
  $export['taxonomy_term:news_terms_1'] = $entity_path_config;

  $entity_path_config = new stdClass();
  $entity_path_config->disabled = FALSE; /* Edit this to true to make a default entity_path_config disabled initially */
  $entity_path_config->api_version = 1;
  $entity_path_config->cid = '3';
  $entity_path_config->instance = 'taxonomy_term:news_terms_2';
  $entity_path_config->path_pattern = 'news/filters/[term:tid]';
  $entity_path_config->query_pattern = '';
  $entity_path_config->fragment_pattern = '';
  $entity_path_config->config = array(
    'pathauto_cleanstring' => 0,
    'space_separator' => 0,
    'space_separator_char' => '_',
    'path_case' => '',
  );
  $export['taxonomy_term:news_terms_2'] = $entity_path_config;

  $entity_path_config = new stdClass();
  $entity_path_config->disabled = FALSE; /* Edit this to true to make a default entity_path_config disabled initially */
  $entity_path_config->api_version = 1;
  $entity_path_config->cid = '4';
  $entity_path_config->instance = 'taxonomy_term:news_terms_3';
  $entity_path_config->path_pattern = 'news/filters/[term:tid]';
  $entity_path_config->query_pattern = '';
  $entity_path_config->fragment_pattern = '';
  $entity_path_config->config = array(
    'pathauto_cleanstring' => 0,
    'space_separator' => 0,
    'space_separator_char' => '_',
    'path_case' => '',
  );
  $export['taxonomy_term:news_terms_3'] = $entity_path_config;

  return $export;
}

<?php
/**
 * @file
 * asc_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_news_default_fe_block_settings() {
  $export = array();

  // q7
  $theme = array();

  $theme['asc_taxonomy_filter-news_terms_1'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'news_terms_1',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-28',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'news
news/filters*',
    'title' => '',
    'cache' => '1',
  );

  $theme['asc_taxonomy_filter-news_terms_2'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'news_terms_2',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'news
news/filters*',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['asc_taxonomy_filter-news_terms_3'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'news_terms_3',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'news
news/filters*',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['views-asc_news-news_block_large'] = array(
    'module' => 'views',
    'delta' => 'asc_news-news_block_large',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-15',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-asc_news-news_block_list'] = array(
    'module' => 'views',
    'delta' => 'asc_news-news_block_list',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-asc_news-news_block_small'] = array(
    'module' => 'views',
    'delta' => 'asc_news-news_block_small',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $export['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}

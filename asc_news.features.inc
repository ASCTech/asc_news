<?php
/**
 * @file
 * asc_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asc_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function asc_news_node_info() {
  $items = array(
    'asc_news' => array(
      'name' => t('News Story'),
      'base' => 'node_content',
      'description' => t('News and updates for your organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

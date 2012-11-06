<?php
/**
 * @file
 * asc_news.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function asc_news_block_class_features_default_class() {
  return array(
    0 => array(
      'module' => 'views',
      'delta' => 'asc_news-news_block_large',
      'css_classes' => 'feature-whole',
    ),
    1 => array(
      'module' => 'views',
      'delta' => 'asc_news-news_block_small',
      'css_classes' => 'feature-half',
    ),
  );
}

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
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_config_features_default_settings().
 */
function asc_news_custom_breadcrumbs_config_features_default_settings() {
  $custom_breadcrumbs_configs = array();

  $custom_breadcrumbs_configs[] = array(
    'asc_news-1689872192' => array(
      'name' => 'News',
      'machine_name' => 'asc_news-1689872192',
      'titles' => 'News
[node:title]',
      'paths' => 'news
[node:url:path]',
      'visibility_php' => '',
      'node_type' => 'asc_news',
      'language' => '',
    ),
  );
  return $custom_breadcrumbs_configs;
}

/**
 * Implements hook_image_default_styles().
 */
function asc_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_front_thumb.
  $styles['news_front_thumb'] = array(
    'name' => 'news_front_thumb',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '122',
          'height' => '122',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: news_thumb.
  $styles['news_thumb'] = array(
    'name' => 'news_thumb',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '79',
          'height' => '79',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: news_tiny_thumb.
  $styles['news_tiny_thumb'] = array(
    'name' => 'news_tiny_thumb',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '40',
          'height' => '45',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
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

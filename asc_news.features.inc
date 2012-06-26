<?php
/**
 * @file
 * asc_news.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function asc_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_thumb
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

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function asc_news_node_info() {
  $items = array(
    'qs_news' => array(
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
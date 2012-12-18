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
  if ($module == "entity_path" && $api == "entity_path") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
 * Implements hook_image_default_styles().
 */
function asc_news_image_default_styles() {
  $styles = array();

  // Exported image style: 250_square_thumbnail.
  $styles['250_square_thumbnail'] = array(
    'name' => '250_square_thumbnail',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '250',
          'height' => '250',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 40_square.
  $styles['40_square'] = array(
    'name' => '40_square',
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
          'height' => '40',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 70_square.
  $styles['70_square'] = array(
    'name' => '70_square',
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
          'width' => '70',
          'height' => '70',
        ),
        'weight' => '1',
      ),
    ),
  );

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

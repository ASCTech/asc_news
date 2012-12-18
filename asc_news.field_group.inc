<?php
/**
 * @file
 * asc_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function asc_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_terms|node|asc_news|default';
  $field_group->group_name = 'group_terms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'asc_news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Terms',
    'weight' => '2',
    'children' => array(
      0 => 'field_news_terms_1',
      1 => 'field_news_terms_2',
      2 => 'field_news_terms_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Terms',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_terms|node|asc_news|default'] = $field_group;

  return $export;
}

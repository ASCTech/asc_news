<?php
/**
 * @file
 * asc_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create qs_news content.
  $permissions['create qs_news content'] = array(
    'name' => 'create qs_news content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any qs_news content.
  $permissions['delete any qs_news content'] = array(
    'name' => 'delete any qs_news content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own qs_news content.
  $permissions['delete own qs_news content'] = array(
    'name' => 'delete own qs_news content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any qs_news content.
  $permissions['edit any qs_news content'] = array(
    'name' => 'edit any qs_news content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own qs_news content.
  $permissions['edit own qs_news content'] = array(
    'name' => 'edit own qs_news content',
    'roles' => array(
      0 => 'Content Editor',
      1 => 'Content Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}

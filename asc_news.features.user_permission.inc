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

  // Exported permission: create asc_news content.
  $permissions['create asc_news content'] = array(
    'name' => 'create asc_news content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any asc_news content.
  $permissions['delete any asc_news content'] = array(
    'name' => 'delete any asc_news content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own asc_news content.
  $permissions['delete own asc_news content'] = array(
    'name' => 'delete own asc_news content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any asc_news content.
  $permissions['edit any asc_news content'] = array(
    'name' => 'edit any asc_news content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own asc_news content.
  $permissions['edit own asc_news content'] = array(
    'name' => 'edit own asc_news content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}

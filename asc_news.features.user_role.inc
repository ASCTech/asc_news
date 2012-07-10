<?php
/**
 * @file
 * asc_news.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function asc_news_user_default_roles() {
  $roles = array();

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => '4',
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => '3',
  );

  return $roles;
}

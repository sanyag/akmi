<?php
/**
 * @file
 * ak_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ak_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => '3',
  );

  // Exported role: Publisher.
  $roles['Publisher'] = array(
    'name' => 'Publisher',
    'weight' => '6',
  );

  // Exported role: content author.
  $roles['content author'] = array(
    'name' => 'content author',
    'weight' => '2',
  );

  // Exported role: site admin.
  $roles['site admin'] = array(
    'name' => 'site admin',
    'weight' => '4',
  );

  // Exported role: super admin.
  $roles['super admin'] = array(
    'name' => 'super admin',
    'weight' => '5',
  );

  return $roles;
}

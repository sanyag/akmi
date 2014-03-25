<?php
/**
 * @file
 * ak_common.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ak_common_user_default_roles() {
  $roles = array();

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => '2',
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => '3',
  );

  // Exported role: Publisher.
  $roles['Publisher'] = array(
    'name' => 'Publisher',
    'weight' => '4',
  );

  // Exported role: Super Admin.
  $roles['Super Admin'] = array(
    'name' => 'Super Admin',
    'weight' => '6',
  );

  // Exported role: Superuser.
  $roles['Superuser'] = array(
    'name' => 'Superuser',
    'weight' => '5',
  );

  return $roles;
}

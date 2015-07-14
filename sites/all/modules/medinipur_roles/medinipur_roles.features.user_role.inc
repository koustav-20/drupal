<?php
/**
 * @file
 * medinipur_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function medinipur_roles_user_default_roles() {
  $roles = array();

  // Exported role: ADM.
  $roles['ADM'] = array(
    'name' => 'ADM',
    'weight' => 4,
  );

  // Exported role: BDO.
  $roles['BDO'] = array(
    'name' => 'BDO',
    'weight' => 8,
  );

  // Exported role: Content Uploaded.
  $roles['Content Uploaded'] = array(
    'name' => 'Content Uploaded',
    'weight' => 11,
  );

  // Exported role: DM.
  $roles['DM'] = array(
    'name' => 'DM',
    'weight' => 3,
  );

  // Exported role: HO.
  $roles['HO'] = array(
    'name' => 'HO',
    'weight' => 7,
  );

  // Exported role: OC.
  $roles['OC'] = array(
    'name' => 'OC',
    'weight' => 6,
  );

  // Exported role: SDO.
  $roles['SDO'] = array(
    'name' => 'SDO',
    'weight' => 5,
  );

  // Exported role: _user_role_0.
  $roles['_user_role_0'] = array(
    'name' => '_user_role_0',
    'weight' => 9,
  );

  // Exported role: _user_role_2.
  $roles['_user_role_2'] = array(
    'name' => '_user_role_2',
    'weight' => 10,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}

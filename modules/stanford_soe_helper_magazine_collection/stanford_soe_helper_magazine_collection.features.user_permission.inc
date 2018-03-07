<?php
/**
 * @file
 * stanford_soe_helper_magazine_collection.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_soe_helper_magazine_collection_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'convert from stanford_collection'.
  $permissions['convert from stanford_collection'] = array(
    'name' => 'convert from stanford_collection',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to stanford_collection'.
  $permissions['convert to stanford_collection'] = array(
    'name' => 'convert to stanford_collection',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'create stanford_collection content'.
  $permissions['create stanford_collection content'] = array(
    'name' => 'create stanford_collection content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_collection content'.
  $permissions['delete any stanford_collection content'] = array(
    'name' => 'delete any stanford_collection content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_collection content'.
  $permissions['delete own stanford_collection content'] = array(
    'name' => 'delete own stanford_collection content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_collection content'.
  $permissions['edit any stanford_collection content'] = array(
    'name' => 'edit any stanford_collection content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_collection content'.
  $permissions['edit own stanford_collection content'] = array(
    'name' => 'edit own stanford_collection content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished stanford_collection content'.
  $permissions['view any unpublished stanford_collection content'] = array(
    'name' => 'view any unpublished stanford_collection content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}

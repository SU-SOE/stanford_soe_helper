<?php
/**
 * @file
 * stanford_soe_helper_collection_layouts.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stanford_soe_helper_collection_layouts_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_s_collection_cont_label'.
  $field_bases['field_s_collection_cont_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_collection_cont_label',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_s_collectlon_intro_label'.
  $field_bases['field_s_collectlon_intro_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_collectlon_intro_label',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
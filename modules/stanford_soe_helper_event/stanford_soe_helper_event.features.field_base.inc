<?php
/**
 * @file
 * stanford_soe_helper_event.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stanford_soe_helper_event_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_s_event_featured'.
  $field_bases['field_s_event_featured'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_event_featured',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Not featured',
        1 => 'Featured',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}

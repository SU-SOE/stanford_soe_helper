<?php
/**
 * @file
 * stanford_soe_helper_event.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_soe_helper_event_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-stanford_event-field_s_event_featured'.
  $field_instances['node-stanford_event-field_s_event_featured'] = array(
    'bundle' => 'stanford_event',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'This indicates if this event will be featured on the homepage or other places.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'taxonomy' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_event_featured',
    'label' => 'Featured',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured');
  t('This indicates if this event will be featured on the homepage or other places.');

  return $field_instances;
}

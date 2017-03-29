<?php
/**
 * @file
 * stanford_soe_helper_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_soe_helper_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-stanford_page-field_s_apachesolr_index'.
  $field_instances['node-stanford_page-field_s_apachesolr_index'] = array(
    'bundle' => 'stanford_page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_apachesolr_index',
    'label' => 'Apache Solr Index',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Apache Solr Index');

  return $field_instances;
}

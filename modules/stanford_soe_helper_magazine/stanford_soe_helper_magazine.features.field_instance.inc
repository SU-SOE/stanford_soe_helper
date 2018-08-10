<?php
/**
 * @file
 * stanford_soe_helper_magazine.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_soe_helper_magazine_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_accent_color'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_accent_color'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => array(
      0 => array(
        'tid' => 3743,
      ),
    ),
    'deleted' => 0,
    'description' => 'These terms identify the associated accent color. Select a color.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_accent_color',
    'label' => 'Accent color',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accent color');
  t('These terms identify the associated accent color. Select a color.');

  return $field_instances;
}

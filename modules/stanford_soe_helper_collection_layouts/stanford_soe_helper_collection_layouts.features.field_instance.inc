<?php
/**
 * @file
 * stanford_soe_helper_collection_layouts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_soe_helper_collection_layouts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-stanford_collection-field_s_collection_cont_label'.
  $field_instances['node-stanford_collection-field_s_collection_cont_label'] = array(
    'bundle' => 'stanford_collection',
    'default_value' => array(
      0 => array(
        'value' => 'Continue reading articles from',
      ),
    ),
    'deleted' => 0,
    'description' => 'This is the header text for the collection block showing at the bottom of articles in the collection.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_collection_cont_label',
    'label' => 'Continue label',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal_html' => 'minimal_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_collection-field_s_collectlon_intro_label'.
  $field_instances['node-stanford_collection-field_s_collectlon_intro_label'] = array(
    'bundle' => 'stanford_collection',
    'default_value' => array(
      0 => array(
        'value' => 'This article is part of',
      ),
    ),
    'deleted' => 0,
    'description' => 'This is the text that will show up on the grey intro block on the article page for the collection.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_collectlon_intro_label',
    'label' => 'Intro label',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal_html' => 'minimal_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Continue label');
  t('Intro label');
  t('This is the header text for the collection block showing at the bottom of articles in the collection.');
  t('This is the text that will show up on the grey intro block on the article page for the collection.');

  return $field_instances;
}

<?php
/**
 * @file
 * stanford_soe_helper_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_soe_helper_landing_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lead_text_styles|node|stanford_landing_page|full';
  $field_group->group_name = 'group_lead_text_styles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lead text styles',
    'weight' => '13',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lead text styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_lead_text_styles|node|stanford_landing_page|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Lead text styles');

  return $field_groups;
}

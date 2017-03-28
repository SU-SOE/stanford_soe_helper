<?php
/**
 * @file
 * stanford_soe_helper_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_soe_helper_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descriptor_info|node|stanford_event|full';
  $field_group->group_name = 'group_descriptor_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descriptor group',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_event_map_link',
      1 => 'field_s_event_speakers',
      2 => 'field_stanford_event_admission',
      3 => 'field_stanford_event_datetime',
      4 => 'field_stanford_event_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descriptor group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'descriptor group-descriptor-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_descriptor_info|node|stanford_event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_floatright|node|stanford_event|full';
  $field_group->group_name = 'group_floatright';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Float Right',
    'weight' => '0',
    'children' => array(
      0 => 'field_stanford_event_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Float Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'float-right border-simple-nowidth border-shadow group-floatright field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_floatright|node|stanford_event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_event_series_style|node|stanford_event|full';
  $field_group->group_name = 'group_s_event_series_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'This event belongs to the following series',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_event_series',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'This event belongs to the following series',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-event-series-style field-group-div header-striped',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_event_series_style|node|stanford_event|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Descriptor group');
  t('Float Right');
  t('This event belongs to the following series');

  return $field_groups;
}

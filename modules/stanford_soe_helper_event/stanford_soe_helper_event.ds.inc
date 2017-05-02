<?php
/**
 * @file
 * stanford_soe_helper_event.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_soe_helper_event_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|stanford_event|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_soe_helper_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_floatright',
        1 => 'group_descriptor_info',
        2 => 'field_stanford_event_image',
        3 => 'group_s_event_series_style',
        4 => 'field_stanford_event_datetime',
        5 => 'body',
        6 => 'field_stanford_event_location',
        7 => 'field_s_event_map_link',
        8 => 'field_stanford_event_sponsor',
        9 => 'field_stanford_event_email',
        10 => 'field_stanford_event_admission',
        11 => 'field_stanford_event_phone',
        12 => 'field_stanford_event_url',
        14 => 'field_s_event_series',
      ),
      'stanford_event_title' => array(
        13 => 'title',
      ),
    ),
    'fields' => array(
      'group_floatright' => 'ds_content',
      'group_descriptor_info' => 'ds_content',
      'field_stanford_event_image' => 'ds_content',
      'group_s_event_series_style' => 'ds_content',
      'field_stanford_event_datetime' => 'ds_content',
      'body' => 'ds_content',
      'field_stanford_event_location' => 'ds_content',
      'field_s_event_map_link' => 'ds_content',
      'field_stanford_event_sponsor' => 'ds_content',
      'field_stanford_event_email' => 'ds_content',
      'field_stanford_event_admission' => 'ds_content',
      'field_stanford_event_phone' => 'ds_content',
      'field_stanford_event_url' => 'ds_content',
      'title' => 'stanford_event_title',
      'field_s_event_series' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|stanford_event|full'] = $ds_layout;

  return $export;
}

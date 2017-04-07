<?php
/**
 * @file
 * stanford_soe_helper_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_soe_helper_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|stanford_page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_soe_helper_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_s_page_file',
      ),
      'stanford_page_featured_image' => array(
        2 => 'field_s_image_info',
      ),
      'stanford_page_title' => array(
        3 => 'title',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_s_page_file' => 'ds_content',
      'field_s_image_info' => 'stanford_page_featured_image',
      'title' => 'stanford_page_title',
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
  $export['node|stanford_page|full'] = $ds_layout;

  return $export;
}

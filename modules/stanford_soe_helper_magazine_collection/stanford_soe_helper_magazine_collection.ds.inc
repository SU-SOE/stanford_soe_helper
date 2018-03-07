<?php
/**
 * @file
 * stanford_soe_helper_magazine_collection.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_soe_helper_magazine_collection_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_collection|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_collection';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|stanford_collection|default'] = $ds_layout;

  return $export;
}

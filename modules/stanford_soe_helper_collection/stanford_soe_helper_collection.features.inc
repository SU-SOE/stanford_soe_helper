<?php
/**
 * @file
 * stanford_soe_helper_collection.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_soe_helper_collection_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_soe_helper_collection_node_info() {
  $items = array(
    'stanford_collection' => array(
      'name' => t('Collection'),
      'base' => 'node_content',
      'description' => t('This displays a collection of articles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

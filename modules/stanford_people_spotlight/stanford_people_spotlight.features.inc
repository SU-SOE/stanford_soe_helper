<?php
/**
 * @file
 * stanford_people_spotlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_people_spotlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_people_spotlight_node_info() {
  $items = array(
    'stanford_people_spotlight' => array(
      'name' => t('People Spotlight'),
      'base' => 'node_content',
      'description' => t('Highlights a person with a quote and image.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * stanford_soe_helper_magazine.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_soe_helper_magazine_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_soe_helper_magazine_views_api($module = NULL, $api = NULL) {
  /*
  return array(
    'api' => 3,
    'path' => drupal_get_path('module', 'NAME'),
    'template path' => drupal_get_path('module', 'stanford_soe_helper_magazine') . '/templates',
  );
  */
  return array("api" => "3.0");
}

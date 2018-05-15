<?php
/**
 * @file
 * stanford_people_spotlight_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function stanford_people_spotlight_views_views_api($module = NULL, $api = NULL) {
  return array(
    'api' => 3,
    'path' => drupal_get_path('module', 'stanford_people_spotlight_views'),
    'template path' => drupal_get_path('module', 'stanford_people_spotlight_views') . '/templates',
  );
}

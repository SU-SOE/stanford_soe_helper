<?php
/**
 * @file
 * stanford_people_spotlight.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_people_spotlight_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stanford_people_spotlight';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_8_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_extras_single_region' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_news_extras' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_cap' => array(
        'custom_settings' => FALSE,
      ),
      'taxonomy' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__stanford_people_spotlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stanford_people_spotlight';
  $strongarm->value = array();
  $export['menu_options_stanford_people_spotlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stanford_people_spotlight';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stanford_people_spotlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_people_spotlight';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stanford_people_spotlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stanford_people_spotlight';
  $strongarm->value = '0';
  $export['node_preview_stanford_people_spotlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stanford_people_spotlight';
  $strongarm->value = 0;
  $export['node_submitted_stanford_people_spotlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_stanford_people_spotlight_pattern';
  $strongarm->value = 'spotlight/[node:title]';
  $export['pathauto_node_stanford_people_spotlight_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stanford_affiliation_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_stanford_affiliation_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stanford_department_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_stanford_department_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_stanford_people_spotlight';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_stanford_people_spotlight'] = $strongarm;

  return $export;
}

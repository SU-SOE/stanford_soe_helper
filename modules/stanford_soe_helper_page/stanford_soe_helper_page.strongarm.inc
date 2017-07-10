<?php
/**
 * @file
 * stanford_soe_helper_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_soe_helper_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_stanford_page';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.4',
  );
  $export['xmlsitemap_settings_node_stanford_page'] = $strongarm;

  return $export;
}

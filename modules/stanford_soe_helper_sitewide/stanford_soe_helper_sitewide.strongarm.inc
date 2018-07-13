<?php
/**
 * @file
 * stanford_soe_helper_sitewide.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_soe_helper_sitewide_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_soe_accent_color_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_soe_accent_color_pattern'] = $strongarm;

  return $export;
}

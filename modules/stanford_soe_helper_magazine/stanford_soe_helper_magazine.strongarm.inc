<?php
/**
 * @file
 * stanford_soe_helper_magazine.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_soe_helper_magazine_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stanford_magazine_eyebrow_pattern';
  $strongarm->value = 'magazine/[term:name]';
  $export['pathauto_taxonomy_term_stanford_magazine_eyebrow_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stanford_magazine_series_pattern';
  $strongarm->value = 'magazine/[term:name]';
  $export['pathauto_taxonomy_term_stanford_magazine_series_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stanford_magazine_topics_pattern';
  $strongarm->value = 'magazine/[term:name]';
  $export['pathauto_taxonomy_term_stanford_magazine_topics_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-magazine';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_menu_link_menu-magazine'] = $strongarm;

  return $export;
}

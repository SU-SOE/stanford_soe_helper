<?php
/**
 * @file
 * stanford_soe_helper_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_soe_helper_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

<?php
/**
 * @file
 * stanford_soe_helper_magazine.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function stanford_soe_helper_magazine_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-magazine.
  $menus['menu-magazine'] = array(
    'menu_name' => 'menu-magazine',
    'title' => 'Digital Magazine',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Digital Magazine');

  return $menus;
}

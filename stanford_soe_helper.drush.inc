<?php
/**
 * @file
 * drush commands for SoE Helper.
 */

/**
 * Implements hook_drush_command().
 *
 * @return array List of drush commands.
 */
function stanford_soe_helper_drush_command() {
  $items = array();

  $items['delete_intranet_link'] = array(
    'description' => 'Delete the SoE intranet link block.',
    'aliases' => array('soe-dil'),
  );
  $items['delete_news_link'] = array(
    'description' => 'Delete the SoE news link block.',
    'aliases' => array('soe-dnl'),
  );

  return $items;

}

/*
 * Delete the intranet link block
 */
function drush_stanford_soe_helper_delete_intranet_link() {

  // Remove the block we installed
  soe_helper_intranet_link_block_delete();
  drush_log(dt("Deleted the SoE intranet link block."), "ok");
}


/*
 * Delete the news link block
 */
function drush_stanford_soe_helper_delete_news_link() {

  // Remove the block we installed
  stanford_soe_news_link_block_delete();
  drush_log(dt("Deleted the SoE news link block."), "ok");
}

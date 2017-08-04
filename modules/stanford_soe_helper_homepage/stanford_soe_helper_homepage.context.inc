<?php
/**
 * @file
 * stanford_soe_helper_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_jumpstart_soe_home';
  $context->description = 'Homepage: SoE layout';
  $context->tag = 'Home Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home Page');
  t('Homepage: SoE layout');
  $export['stanford_jumpstart_soe_home'] = $context;

  return $export;
}

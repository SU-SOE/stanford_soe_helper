<?php
/**
 * @file
 * stanford_soe_helper_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_landing_page_engineering';
  $context->description = 'Engineering context for Stanford Landing Page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_landing_page' => 'stanford_landing_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-stanford_landing_page_title' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_landing_page_title',
          'region' => 'main_upper',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for Stanford Landing Page');
  $export['stanford_landing_page_engineering'] = $context;

  return $export;
}

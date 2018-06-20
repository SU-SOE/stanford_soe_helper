<?php
/**
 * @file
 * stanford_soe_helper_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_page_engineering';
  $context->description = 'Engineering context for Stanford Page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_page' => 'stanford_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_page_top_banner-block' => array(
          'module' => 'views',
          'delta' => 'stanford_page_top_banner-block',
          'region' => 'fullwidth_top',
          'weight' => '-7',
        ),
        'ds_extras-stanford_page_title' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_page_title',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
        'views-70b72ff865a9d4211659cbdcdea9f13f' => array(
          'module' => 'views',
          'delta' => '70b72ff865a9d4211659cbdcdea9f13f',
          'region' => 'fullwidth_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for Stanford Page');
  $export['stanford_page_engineering'] = $context;

  return $export;
}

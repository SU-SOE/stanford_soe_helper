<?php
/**
 * @file
 * stanford_people_spotlight_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_people_spotlight_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight';
  $context->description = 'Context for Stanford People Spotlight pages';
  $context->tag = 'Spotlight';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_people_spotlight' => 'stanford_people_spotlight',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3ad60fe2b7d0858d07b9190d50bd8b56' => array(
          'module' => 'views',
          'delta' => '3ad60fe2b7d0858d07b9190d50bd8b56',
          'region' => 'fullwidth_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Stanford People Spotlight pages');
  t('Spotlight');
  $export['stanford_people_spotlight'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight_related_departments';
  $context->description = 'Context for Stanford People Spotlight related departments';
  $context->tag = 'Spotlight';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-9fb51998d37801a63e1e394f44e882b9' => array(
          'module' => 'views',
          'delta' => '9fb51998d37801a63e1e394f44e882b9',
          'region' => 'fullwidth_top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Stanford People Spotlight related departments');
  t('Spotlight');
  $export['stanford_people_spotlight_related_departments'] = $context;

  return $export;
}

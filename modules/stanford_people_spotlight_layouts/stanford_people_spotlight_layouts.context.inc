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
  $context->name = 'stanford_people_spotlight_page_engineering';
  $context->description = 'Engineering context for people spotlight landing page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'spotlight' => 'spotlight',
        'spotlight/faculty' => 'spotlight/faculty',
        'spotlight/students' => 'spotlight/students',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-05103c446aaa0fd3489626f207439a35' => array(
          'module' => 'views',
          'delta' => '05103c446aaa0fd3489626f207439a35',
          'region' => 'fullwidth_top',
          'weight' => '-8',
        ),
        'views-4a896ddf5b3f786361686dc4271fd7aa' => array(
          'module' => 'views',
          'delta' => '4a896ddf5b3f786361686dc4271fd7aa',
          'region' => 'content_body_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for people spotlight landing page');
  $export['stanford_people_spotlight_page_engineering'] = $context;

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

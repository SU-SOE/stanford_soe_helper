<?php
/**
 * @file
 * stanford_soe_helper_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_event_engineering';
  $context->description = 'Engineering context for Stanford Event';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_event' => 'stanford_event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-stanford_event_title' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_event_title',
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
  t('Engineering context for Stanford Event');
  $export['stanford_event_engineering'] = $context;

  return $export;
}

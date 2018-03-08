<?php
/**
 * @file
 * stanford_soe_helper_collection_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_collection_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_collection_engineering';
  $context->description = 'Engineering context for Stanford Magazine Collections';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_collection' => 'stanford_collection',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2b6c7ff4f6ce82a33670edba016946ec' => array(
          'module' => 'views',
          'delta' => '2b6c7ff4f6ce82a33670edba016946ec',
          'region' => 'content_body_lower',
          'weight' => '-10',
        ),
        'views-ef5e993e39b3be625bbb88867712757a' => array(
          'module' => 'views',
          'delta' => 'ef5e993e39b3be625bbb88867712757a',
          'region' => 'content_body_lower',
          'weight' => '-9',
        ),
        'views-63198c97a59f0a45ddb3a464311ef4e9' => array(
          'module' => 'views',
          'delta' => '63198c97a59f0a45ddb3a464311ef4e9',
          'region' => 'content_body_lower',
          'weight' => '-8',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'full_width_middle',
          'weight' => '-10',
        ),
        'views-12e01ca9b40028b8fc4b6ee286b4426e' => array(
          'module' => 'views',
          'delta' => '12e01ca9b40028b8fc4b6ee286b4426e',
          'region' => 'content_body_bottom',
          'weight' => '-9',
        ),
        'views-81afc3faf7bc69c8ec1db8fd87d14e52' => array(
          'module' => 'views',
          'delta' => '81afc3faf7bc69c8ec1db8fd87d14e52',
          'region' => 'content_body_bottom',
          'weight' => '-8',
        ),
        'stanford_soe_helper_magazine-soe_all_issues_link' => array(
          'module' => 'stanford_soe_helper_magazine',
          'delta' => 'soe_all_issues_link',
          'region' => 'content_body_bottom',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for Stanford Magazine Collections');
  $export['stanford_magazine_collection_engineering'] = $context;

  return $export;
}

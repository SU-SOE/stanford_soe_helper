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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for Stanford Magazine Collections');
  $export['stanford_magazine_collection_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_collection_list_page';
  $context->description = 'Engineering context for Stanford Magazine Collections';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'magazine/collections' => 'magazine/collections',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-8a1fed7db97eea60e090e427ade80280' => array(
          'module' => 'views',
          'delta' => '8a1fed7db97eea60e090e427ade80280',
          'region' => 'content_upper',
          'weight' => '-10',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'full_width_middle',
          'weight' => '-10',
        ),
        'views-051989bdd2c9899c84c78f70d0fb1e3e' => array(
          'module' => 'views',
          'delta' => '051989bdd2c9899c84c78f70d0fb1e3e',
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
  t('Engineering context for Stanford Magazine Collections');
  $export['stanford_magazine_collection_list_page'] = $context;

  return $export;
}

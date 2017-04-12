<?php
/**
 * @file
 * stanford_soe_helper_magazine.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_magazine_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_article';
  $context->description = 'Context for magazine article nodes';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_magazine_article' => 'stanford_magazine_article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-magazine' => array(
          'module' => 'menu',
          'delta' => 'menu-magazine',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for magazine article nodes');
  t('Engineering');
  $export['stanford_magazine_article'] = $context;

  return $export;
}

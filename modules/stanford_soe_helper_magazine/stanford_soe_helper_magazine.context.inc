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
  $context->name = 'stanford_mag_article_engineering';
  $context->description = 'Engineering context for Stanford Magazine Article';
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
        'views-27e34c6efd8a0fb353befbed9ada5849' => array(
          'module' => 'views',
          'delta' => '27e34c6efd8a0fb353befbed9ada5849',
          'region' => 'content_lower',
          'weight' => '-92',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'content_lower',
          'weight' => '-91',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for Stanford Magazine Article');
  $export['stanford_mag_article_engineering'] = $context;

  return $export;
}

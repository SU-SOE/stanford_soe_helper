<?php
/**
 * @file
 * stanford_soe_helper_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'soe_news_pages';
  $context->description = 'All news pages';
  $context->tag = 'News content type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_news_item' => 'stanford_news_item',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All news pages');
  t('News content type');
  $export['soe_news_pages'] = $context;

  return $export;
}

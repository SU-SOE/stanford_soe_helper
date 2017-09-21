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
  $context->name = 'soe-news';
  $context->description = 'Landing page for News section';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/recent-news' => 'news/recent-news',
        'news/school-news' => 'news/school-news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-stanford_jsa_layouts-1' => array(
          'module' => 'menu_block',
          'delta' => 'stanford_jsa_layouts-1',
          'region' => 'sidebar_first',
          'weight' => '-77',
        ),
        'bean-jumpstart-twitter-block' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-twitter-block',
          'region' => 'sidebar_first',
          'weight' => '-76',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing page for News section');
  t('News');
  $export['soe-news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'soe_news_pages';
  $context->description = 'SoE specific items for news pages';
  $context->tag = 'News';
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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'stanford_soe_helper_news-stanford_soe_news_link' => array(
          'module' => 'stanford_soe_helper_news',
          'delta' => 'stanford_soe_news_link',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('SoE specific items for news pages');
  $export['soe_news_pages'] = $context;

  return $export;
}

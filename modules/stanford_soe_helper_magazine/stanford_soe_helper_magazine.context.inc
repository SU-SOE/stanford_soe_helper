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
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'views-a06b957e34c741c20a352da1b7ce0e12' => array(
          'module' => 'views',
          'delta' => 'a06b957e34c741c20a352da1b7ce0e12',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-ed6257626b15a2207dd0724b1a8cd3c4' => array(
          'module' => 'views',
          'delta' => 'ed6257626b15a2207dd0724b1a8cd3c4',
          'region' => 'content_bottom',
          'weight' => '-9',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_tax_views';
  $context->description = 'Context for Stanford Magazine Taxonomy View';
  $context->tag = 'Magazine';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'stanford_department' => 'stanford_department',
        'stanford_magazine_eyebrow' => 'stanford_magazine_eyebrow',
        'stanford_magazine_series' => 'stanford_magazine_series',
        'stanford_magazine_topics' => 'stanford_magazine_topics',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6f8894d19d8beff01ff86bacacde2e20' => array(
          'module' => 'views',
          'delta' => '6f8894d19d8beff01ff86bacacde2e20',
          'region' => 'content_body_lower',
          'weight' => '-10',
        ),
        'views-stanford_magazine_topics-block' => array(
          'module' => 'views',
          'delta' => 'stanford_magazine_topics-block',
          'region' => 'content_body_lower',
          'weight' => '-9',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'full_width_middle',
          'weight' => '-10',
        ),
        'views-242c54a197666fecc6928193ed5cd672' => array(
          'module' => 'views',
          'delta' => '242c54a197666fecc6928193ed5cd672',
          'region' => 'content_body_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Stanford Magazine Taxonomy View');
  t('Magazine');
  $export['stanford_magazine_tax_views'] = $context;

  return $export;
}

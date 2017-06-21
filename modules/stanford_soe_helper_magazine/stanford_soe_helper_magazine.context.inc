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
        'ds_extras-related_departments' => array(
          'module' => 'ds_extras',
          'delta' => 'related_departments',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'content_lower',
          'weight' => '-9',
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
        'bean-stanford-soe-mag-explore-issues' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-explore-issues',
          'region' => 'content_bottom',
          'weight' => '-8',
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
  $context->name = 'stanford_mag_issue_engineering';
  $context->description = 'Engineering context for Stanford Magazine Issues';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_magazine_issue' => 'stanford_magazine_issue',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-25491480ed5b577d280c639f8d23989b' => array(
          'module' => 'views',
          'delta' => '25491480ed5b577d280c639f8d23989b',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'stanford_soe_helper_magazine-soe_all_issues_link' => array(
          'module' => 'stanford_soe_helper_magazine',
          'delta' => 'soe_all_issues_link',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'fullwidth_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for Stanford Magazine Issues');
  $export['stanford_mag_issue_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_all_articles_engineering';
  $context->description = 'Engineering context for Stanford Magazine Articles page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'magazine/all' => 'magazine/all',
        'magazine/all/*' => 'magazine/all/*',
        'magazine/latest-news' => 'magazine/latest-news',
        'magazine/latest-news/*' => 'magazine/latest-news/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-02b3298cd48cb01faa35a462486ce0d3' => array(
          'module' => 'views',
          'delta' => '02b3298cd48cb01faa35a462486ce0d3',
          'region' => 'content_upper',
          'weight' => '-9',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'full_width_middle',
          'weight' => '-10',
        ),
        'views-866f0c6a4d06665ce5fb808a46c5c048' => array(
          'module' => 'views',
          'delta' => '866f0c6a4d06665ce5fb808a46c5c048',
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
  t('Engineering context for Stanford Magazine Articles page');
  $export['stanford_magazine_all_articles_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_all_engineering';
  $context->description = 'Context for all pages within the magazine on Engineering';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'magazine' => 'magazine',
        'magazine/*' => 'magazine/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-stanford_soe_helper_mag-1' => array(
          'module' => 'menu_block',
          'delta' => 'stanford_soe_helper_mag-1',
          'region' => 'digital_magazine_menu',
          'weight' => '-10',
        ),
        'stanford_search_api-search_api_search_block' => array(
          'module' => 'stanford_search_api',
          'delta' => 'search_api_search_block',
          'region' => 'digital_magazine_menu',
          'weight' => '-9',
        ),
        'views-9015691b85694032e3eae301883c3f68' => array(
          'module' => 'views',
          'delta' => '9015691b85694032e3eae301883c3f68',
          'region' => 'digital_magazine_megamenu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for all pages within the magazine on Engineering');
  t('Engineering');
  $export['stanford_magazine_all_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_landing_page_engineering';
  $context->description = 'Engineering context for Stanford Magazine landing page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'magazine' => 'magazine',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-144213649de048346c08b149f75bc9dc' => array(
          'module' => 'views',
          'delta' => '144213649de048346c08b149f75bc9dc',
          'region' => 'content_body_lower',
          'weight' => '-10',
        ),
        'views-1a6970778b01da2b4df49d4bb1405128' => array(
          'module' => 'views',
          'delta' => '1a6970778b01da2b4df49d4bb1405128',
          'region' => 'content_body_lower',
          'weight' => '-9',
        ),
        'bean-stanford-soe-mag-news-signup' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mag-news-signup',
          'region' => 'full_width_middle',
          'weight' => '-10',
        ),
        'views-6dd00e1f8cffd2bd884b028237a11786' => array(
          'module' => 'views',
          'delta' => '6dd00e1f8cffd2bd884b028237a11786',
          'region' => 'content_body_bottom',
          'weight' => '-10',
        ),
        'views-c3732f74807e62e0b0c0b2b3e91a41f3' => array(
          'module' => 'views',
          'delta' => 'c3732f74807e62e0b0c0b2b3e91a41f3',
          'region' => 'content_body_bottom',
          'weight' => '-9',
        ),
        'views-81afc3faf7bc69c8ec1db8fd87d14e52' => array(
          'module' => 'views',
          'delta' => '81afc3faf7bc69c8ec1db8fd87d14e52',
          'region' => 'content_body_bottom',
          'weight' => '-8',
        ),
        'stanford_soe_helper_magazine-soe_all_articles_link' => array(
          'module' => 'stanford_soe_helper_magazine',
          'delta' => 'soe_all_articles_link',
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
  t('Engineering context for Stanford Magazine landing page');
  $export['stanford_magazine_landing_page_engineering'] = $context;

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

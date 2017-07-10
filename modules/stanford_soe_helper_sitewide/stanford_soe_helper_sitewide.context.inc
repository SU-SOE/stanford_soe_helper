<?php
/**
 * @file
 * stanford_soe_helper_sitewide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_sitewide_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_pages_but_homepage_soe';
  $context->description = 'All pages but the home page for School of Engineering site';
  $context->tag = 'Sub-pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~news/*' => '~news/*',
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
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages but the home page for School of Engineering site');
  t('Sub-pages');
  $export['all_pages_but_homepage_soe'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_jse-soe';
  $context->description = 'Sitewide - All pages for SoE on JSE';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'stanford_search_api-search_api_search_block' => array(
          'module' => 'stanford_search_api',
          'delta' => 'search_api_search_block',
          'region' => 'global_header',
          'weight' => '-10',
        ),
        'menu_block-stanford_jsa_layouts-2' => array(
          'module' => 'menu_block',
          'delta' => 'stanford_jsa_layouts-2',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'bean-jse-linked-logo-block' => array(
          'module' => 'bean',
          'delta' => 'jse-linked-logo-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'bean-jumpstart-footer-contact-block' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-footer-contact-block',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'bean-jumpstart-footer-social-media--0' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-footer-social-media--0',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'bean-jumpstart-custom-footer-block' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-custom-footer-block',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'bean-stanford-soe-mailchimp-footer-bl' => array(
          'module' => 'bean',
          'delta' => 'stanford-soe-mailchimp-footer-bl',
          'region' => 'footer',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Sitewide - All pages for SoE on JSE');
  $export['sitewide_jse-soe'] = $context;

  return $export;
}

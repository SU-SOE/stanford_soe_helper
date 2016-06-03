<?php
/**
 * @file
 * stanford_soe_helper_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_jumpstart_soe_home';
  $context->description = 'Homepage: SoE layout';
  $context->tag = 'Home Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-jumpstart-home-page-full-width-b' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-home-page-full-width-b',
          'region' => 'fullwidth_top',
          'weight' => '-10',
        ),
        'bean-homepage-about-block' => array(
          'module' => 'bean',
          'delta' => 'homepage-about-block',
          'region' => 'content_row3',
          'weight' => '-10',
        ),
        'views-stanford_events_views-block' => array(
          'module' => 'views',
          'delta' => 'stanford_events_views-block',
          'region' => 'content_row3',
          'weight' => '-7',
        ),
        'views-9bf4ec9695a5b13242ba5a4898a6b635' => array(
          'module' => 'views',
          'delta' => '9bf4ec9695a5b13242ba5a4898a6b635',
          'region' => 'content_row3',
          'weight' => '-6',
        ),
        'bean-jumpstart-large-custom-block' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-large-custom-block',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'bean-jumpstart-small-custom-block' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-small-custom-block',
          'region' => 'content_lower',
          'weight' => '-9',
        ),
        'views-3f5a4c4c101b2e6f6d77f52a746a2433' => array(
          'module' => 'views',
          'delta' => '3f5a4c4c101b2e6f6d77f52a746a2433',
          'region' => 'main_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home Page');
  t('Homepage: SoE layout');
  $export['stanford_jumpstart_soe_home'] = $context;

  return $export;
}

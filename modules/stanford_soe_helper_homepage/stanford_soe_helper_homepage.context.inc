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
        'views-0969cf96ba3c89e5f5ea0784f69f7372' => array(
          'module' => 'views',
          'delta' => '0969cf96ba3c89e5f5ea0784f69f7372',
          'region' => 'full_width_middle',
          'weight' => '-10',
        ),
        'views-stanford_news_featured-block_1' => array(
          'module' => 'views',
          'delta' => 'stanford_news_featured-block_1',
          'region' => 'full_width_middle',
          'weight' => '-9',
        ),
        'views-stanford_event_featured-block_1' => array(
          'module' => 'views',
          'delta' => 'stanford_event_featured-block_1',
          'region' => 'full_width_middle',
          'weight' => '-8',
        ),
        'views-d2e3334ce49dc849c9f5c476beaa9871' => array(
          'module' => 'views',
          'delta' => 'd2e3334ce49dc849c9f5c476beaa9871',
          'region' => 'full_width_middle',
          'weight' => '-7',
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

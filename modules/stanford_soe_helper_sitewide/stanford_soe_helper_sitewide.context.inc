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
        'stanford_soe_helper_sitewide-stanford_soe_intranet_link' => array(
          'module' => 'stanford_soe_helper_sitewide',
          'delta' => 'stanford_soe_intranet_link',
          'region' => 'footer',
          'weight' => '-6',
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

<?php
/**
 * @file
 * stanford_soe_helper_sitewide.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_soe_helper_sitewide_taxonomy_default_vocabularies() {
  return array(
    'soe_accent_color' => array(
      'name' => 'SoE Accent Color',
      'machine_name' => 'soe_accent_color',
      'description' => 'Provides colors for accenting content',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

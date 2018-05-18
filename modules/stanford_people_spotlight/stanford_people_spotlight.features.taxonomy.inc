<?php
/**
 * @file
 * stanford_people_spotlight.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_people_spotlight_taxonomy_default_vocabularies() {
  return array(
    'featured_spotlight' => array(
      'name' => 'Featured Spotlight',
      'machine_name' => 'featured_spotlight',
      'description' => '',
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

<?php
/**
 * @file
 * akaa_ak_project_overrides_extras.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function akaa_ak_project_overrides_extras_taxonomy_default_vocabularies() {
  return array(
    'cycle' => array(
      'name' => 'Cycle',
      'machine_name' => 'cycle',
      'description' => 'Award Cycle Years',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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

<?php
/**
 * @file
 * akdn_mailshot.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function akdn_mailshot_filter_default_formats() {
  $formats = array();

  // Exported format: Mailshot format.
  $formats['mailshot_format'] = array(
    'format' => 'mailshot_format',
    'name' => 'Mailshot format',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'transliteration' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'no_known_transliteration' => '?',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '50',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  return $formats;
}

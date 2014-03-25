<?php
/**
 * @file
 * akaa_ak_base_overrides.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function akaa_ak_base_overrides_context_default_contexts_alter(&$data) {
  if (isset($data['article-meta'])) {
    unset($data['article-meta']->reactions['block']);
  }
}

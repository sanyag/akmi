<?php
/**
 * @file
 * akaa_ak_base_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function akaa_ak_base_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.article-meta.reactions|block"]["DELETED"] = TRUE;

 return $overrides;
}

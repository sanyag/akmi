<?php
/**
 * Expose the enable_project_slider field value as a context condition.
 */
class ccontextc_context_condition_enable_project_slider extends context_condition {
  function condition_values() {
    return array(1 => t('Enable this context.'));
  }

  function execute($node) {
    // Grab the value this node has stored for our field.
    if ($items = field_get_items('node', $node, 'field_enable_project_slider', $node->language)) {
      // See if any of the field's values satisfy the condition.
      foreach ($items as $item) {
        if ($item['value'] == 1) {
          foreach ($this->get_contexts() as $context) {
            $this->condition_met($context, 'enable_project_slider');
          }
        }
      }
    }
  }
}

<?php
  $node = node_load($result['node']->entity_id);
  print drupal_render(node_view($node, 'search_result'));
?>

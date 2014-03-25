<?php
  $node = node_load($row->entity_id);
  print l($node->title, "node/{$row->entity_id}");
?>
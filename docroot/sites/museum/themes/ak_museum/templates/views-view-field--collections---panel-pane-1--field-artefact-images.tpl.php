<?php
foreach ($row->_field_data['nid']['entity']->field_artefact_images as $lang => $images) {
  foreach ($images as $delta => $image) {
    print '<a href="'. url("node/{$row->nid}") .'">'. theme('image_style', array('style_name' => 'collection_thumbnail', 'path' => $image['uri'])) .'</a>';
    break;
  }
}
?>
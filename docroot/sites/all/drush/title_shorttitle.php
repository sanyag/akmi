<?php

/*

get all content for content type x
foreach piece of content
  foreach language in content
    get field_title ("Short Title")
    get field_short_title ("Title")
    switch values
    save
  end foreach
end foreach

 */

function swap_titles() {
  $ct = array('article', 'event', 'hub_page', 'page', 'project', 'publication', 'speech');

  // get all nids from DB
  $query = db_select('node', 'n');
  $query->join('field_data_title_field', 'tf', 'n.nid = tf.entity_id');
  $query->join('field_data_field_short_title', 'stf', 'n.nid = stf.entity_id AND stf.language = tf.language AND tf.title_field_value != stf.field_short_title_value');
  $query->fields('n', array('nid'))
    ->isNotNull('stf.field_short_title_value');
  $result = $query->execute();
  // load each node by the nid
  $node_array = array();
  while ($record = $result->fetchAssoc()) {
    $node_array[] = $record['nid'];
  }
  echo count($node_array) . "\n";

  // $node = node_load(4044);
  // //print_r($node);
  // $field = count($node->field_short_title) > count($node->title_field) ? 'field_short_title' : 'title_field';

  // foreach($node->$field as $key => $arr) {
  //   //get the field_short_title value
  //   $field_short_title = $node->field_short_title[$key];
  //   // get the title_field value
  //   $title_field = $node->title_field[$key];
  //   // switch them
  //   $node->field_short_title[$key] = $title_field;
  //   $node->title_field[$key] = $field_short_title;
  // }

  // // http://timonweb.com/how-insert-and-update-only-specific-fields-your-entity-drupal-7

  // $sh_info = field_info_field('field_short_title');
  // $info = field_info_field('title_field');
  // $fields = array($sh_info['id'], $info['id']);
  // field_sql_storage_field_storage_write('node', $node, 'update', $fields);

  // cache_clear_all("field:node:$node->nid", 'cache_field');

  foreach ($node_array as $nid) {
    $node = node_load($nid);
    $field = count($node->field_short_title) > count($node->title_field) ? 'field_short_title' : 'title_field';

    foreach($node->$field as $key => $arr) {
      //get the field_short_title value
      $field_short_title = $node->field_short_title[$key];
      // get the title_field value
      $title_field = $node->title_field[$key];
      // switch them
      $node->field_short_title[$key] = $title_field;
      $node->title_field[$key] = $field_short_title;
    }

    // from http://timonweb.com/how-insert-and-update-only-specific-fields-your-entity-drupal-7

    $sh_info = field_info_field('field_short_title');
    $info = field_info_field('title_field');
    $fields = array($sh_info['id'], $info['id']);
    field_sql_storage_field_storage_write('node', $node, 'update', $fields);

    cache_clear_all("field:node:$node->nid", 'cache_field');
    drush_log("node " . $node->nid . " updated", "ok");

    // if (count($node->title_field) != count($node->field_short_title)) {
    //   echo $nid . "\n";
    //   echo "Short Title\n";
    //   print_r($node->field_short_title);
    //   echo "Title\n";
    //   print_r($node->title_field);
    //   echo "Translations\n";
    //   print_r($node->translations->data);
    // }
  }
}


// Initialize

$args = drush_get_arguments();

if (function_exists($args[2])) {
  $args[2]($args);
  drush_log('completed', 'ok');
}
else {
  drush_log('could not find drush script command', 'error');
}
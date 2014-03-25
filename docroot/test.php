<?php

define('DRUPAL_ROOT', getcwd());
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);



// get file info
$nid=($_GET['nid']) ? $_GET['nid'] : 5766;
$node = node_load($nid);
$file_info = $node->field_publication_file;
foreach ($file_info as $key =>$data) {
  print "<br />";
  print "Language: $key  => ";
  echo 'file path ' . file_create_url($data[0]['uri']);
  print "<br />";
}
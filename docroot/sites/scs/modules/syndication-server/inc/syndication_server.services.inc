<?php
/**
 * @author        : Shea McKinney
 * @date          :
 * @description   : The syndication server
 *
 **/

/**
 * @todo :::::::::::::::::
 *
 *
 * Invoked Functions [so you can hook in!]
 * --------------------------------------------------------
 * 1. sss_query_alter : Allows modification of the db query on a service request
 *
 *
 *
 *
 *
 *
 **/



/**
 * Builds a query from the services request and returns an array of node objects
 *
 * @param $content_type
 *    Used to filter for a certain content type
 * @param $limit
 *    Number of nodes to return
 * @param $date_select
 *    The db date field to select the date range on (created or changed)
 * @param $date_min
 *    Minimum publish date for the node
 * @param $date_max
 *    Maximum publish date for the node
 * @param $sort
 *    Sorting Mechanism to apply to node.created
 * @param $sort_on
 *    The database field name to sort on
 * @param $offset
 *    An offset count to mitigate a limit returning nodes all with the same timestamp
 * @param $pubkey
 *    The Client Public Key
 *
 * @return array of node objects
 **/

function _syndication_server_node_retrieve($content_type = NULL, $limit = 10, $date_min = 0, $date_max = 0, $date_select = 'created', $sort = 'ASC', $sort_on = 'created', $offset = 0, $pubkey = '') {
  // Validate the public key
  ctools_include('syndication_server.utility', 'syndication_server', 'inc');
  _syndication_server_authenticate_client_public_key($_SERVER['HTTP_REFERER'], $pubkey);


  // Carry on retrieving nodes
  $query = db_select('node','n')
            ->fields('n', array('nid'))
            ->orderBy('n.' . $sort_on, $sort);

  if($offset) {
    $query->range(0,($limit * $offset));
  } else {
    $query->range(0, $limit);
  }

  // Append Content Type To conditions
  if($content_type) {
    $query->condition('n.type',explode(',', $content_type),'IN');
  }

  // Add date min condition
  if($date_min) {
    // Support PHP's string to time
    if(!is_numeric($date_min)) {
      $date_min = strtotime($date_min);
    }
    $query->condition('n.'.$date_select, $date_min,">=");
  }

  // Add date min condition
  if($date_max) {
    if(!is_numeric($date_max)) {
      $date = strtotime($date_max);
    }
    $query->condition('n.'.$date_select, $date_max,"<=");
  }

  // // If date select is changed then we should add a condition where only nodes
  // // That have a changed value different from the created should be returnd
  // if($date_select == "changed") {
  //   $query->where('n.created != n.changed');
  // }

  // COLLECT ARGUMENTS
  $args = array();
  $args['pubkey'] = $pubkey;

  // ALLOW OTHER MODULES TO ADJUST THE QUERY
  foreach (module_implements('sss_query_alter') as $module) {
    if($altr = module_invoke($module, 'sss_query_alter', 'syndication_node_retrieve', $query, $args)) {
      $query = $altr;
    }
  }

  // EXECUTE THE LOOKUP
  $result   = $query->execute();

  // Put the nids in an array
  $nids = array();


  // Nothing like mysql_seek in db_abstraction layer :(
  $i = 0;
  $key = ($offset - 1) * $limit;

  while($record = $result->fetchAssoc()) {
      if($i < $key) { $i++; continue; }
      $nids[] = $record['nid'];
  }

  // Return them to the caller
  return node_load_multiple($nids);
}


/**
 * _syndication_server_node_retrieve_deleted
 * Returns an array of deleted node ids for use on the client side
 *
 * @param $limit
 *    Number of nodes to return
 * @param $date_min
 *    Minimum deleted date for the node
 * @param $date_max
 *    Maximum deleted date for the node
 * @param $pubkey
 *    The client public key
 **/

function _syndication_server_node_retrieve_deleted($limit, $date_min, $date_max, $pubkey) {

  // Validate the public key
  ctools_include('syndication_server.utility', 'syndication_server', 'inc');
  _syndication_server_authenticate_client_public_key($_SERVER['HTTP_REFERER'], $pubkey);

  $query = db_select('ss_deleted_nodes', 'ss')
            ->fields('ss')
            ->condition('date', $date_min, ">=")
            ->condition('date', $date_max, "<=")
            ->range(0, $limit)
            ->orderBy('date','ASC');

  // COLLECT ARGUMENTS
  $args = array();
  $args['pubkey'] = $pubkey;

  // ALLOW OTHER MODULES TO ADJUST THE QUERY
  foreach (module_implements('sss_query_alter') as $module) {
    if($altr = module_invoke($module, 'sss_query_alter', 'syndication_node_retrieve_deleted', $query, $args)) {
      $query = $altr;
    }
  }

  $result = $query->execute();

  $return = array();
  while($a = $result->fetchAssoc()) {
    $return[] = $a['nid'];
  }

  // ALLOW OTHER MODULES TO ADJUST THE RESULTS
  foreach (module_implements('sss_delete_result_alter') as $module) {
    $return = module_invoke($module, 'sss_delete_result_alter', $return, $limit, $date_min, $date_max, $pubkey);
  }

  return $return;
}




/**
 * _syndication_server_node_cherry_pick
 * Returns an array of deleted node ids for use on the client side
 *
 * @param $nids
 *    an array of nids to return
 * @param $pubkey
 *    The client public key
 **/

function _syndication_server_node_cherry_pick($nids, $pubkey) {

  // Validate the public key
  ctools_include('syndication_server.utility', 'syndication_server', 'inc');
  _syndication_server_authenticate_client_public_key($_SERVER['HTTP_REFERER'], $pubkey);

  // ALLOW OTHER MODULES TO ADJUST THE NID ARRAY
  // @SHEA: This should be a regular query as well or you should use a different hook.
  module_invoke_all('sss_query_alter', 'syndication_node_cherry_pick', null, $nids);

  return node_load_multiple($nids);
}



/**
 * _syndication_server_taxonomy_get_enabled_vocabs
 *
 * Returns the vocabulary entity information about vocabularies that are enabled for syndication
 * @param $pubkey
 *    The client public key
 * @return array
 *    An array of vocabulary objects
 *
 **/

function _syndication_server_taxonomy_get_enabled_vocabs($pubkey) {

  // Validate the public key
  ctools_include('syndication_server.utility', 'syndication_server', 'inc');
  _syndication_server_authenticate_client_public_key($_SERVER['HTTP_REFERER'], $pubkey);

  $vocabs = array();
  $enabled_vocabs = variable_get('syndication_enabled_vocabularies',array());
  $keys = array();

  // Put machine names into an array where enabled $v == 1
  foreach($enabled_vocabs as $k => $v) {
    if($v) { $keys[] = $k; }
  }

  // ALLOW OTHER MODULES TO ADJUST THE Machine Name ARRAY
  module_invoke_all('sss_query_alter', 'syndication_taxonomy_enabled_vocabs', null, $keys);

  foreach($keys as $machine_name) {
    $tmp = taxonomy_vocabulary_machine_name_load($machine_name);
    $vocabs[$tmp->vid] = $tmp;
  }


  return $vocabs;
}


/**
 * _syndication_server_taxonomy_get_trees
 * Implementation of services getTree for multiple vocabularies
 * @param $vid
 *    An array of vocabulary ids
 * @param $parent
 *    The parent term
 * @param $max_depth
 *    The maximum depth to navigate
 **/

function _syndication_server_taxonomy_get_trees($vid, $parent = 0, $max_depth = NULL) {

  $trees = array();

  foreach($vid as $k => $id) {
    $trees[$id] = taxonomy_get_tree($id, $parent, $max_depth);
  }

  return $trees;
}





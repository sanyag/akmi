<?php
/**
 * @author        : Shea McKinney
 * @date          : Today
 * @description   : A collection of helper function and lookups
 *
 **/




// /////////////////////////////////////////////////////////////////////////////
// NODE UTILITIES
// /////////////////////////////////////////////////////////////////////////////



/**
 * Returns a local node object based off the server nid
 *
 * @param - $nid
 *		The server nid
 *
 * @return $node
 * 		The Local Node object
 **/
function syndication_client_load_node_from_server_nid($nid)
{
	// Bad param
	if(!is_numeric($nid)) { return false; }

	$q = db_select('sc_nodemap', 'scn')
		->fields('scn', array('nid_l'))
		->condition('nid_s', $nid)
		->execute();

	$r = $q->fetchAssoc();

	if(is_numeric($r['nid_l'])) {
		return node_load($r['nid_l']);
	}

	return false;
}



/**
 * Returns a local nid if a lookup finds a match
 * Otherwise returns false
 * @param $nid
 *    - The server nodes nid
 * @return (int)
 *    - The local nid or False
 **/
function _syndication_client_lookup_node_map_by_server_nid($nid)
{

  if(!is_numeric($nid)) { return false; }

  $q = db_select('sc_nodemap', 'sc')
      ->fields('sc', array('nid_l'))
      ->condition('nid_s', $nid)
      ->range(0,1)
      ->execute();

  $r = $q->fetchAssoc();

  if(is_numeric($r['nid_l'])) {
    return $r['nid_l'];
  }

  return false;
}
















// /////////////////////////////////////////////////////////////////////////////
// TAXONOMY UTILITIES
// /////////////////////////////////////////////////////////////////////////////



/**
 * Looks up a vocabulary map
 * @param $mname
 *    The machine name
 * @param $location
 *    Either server or client to determine which machine_name we are looking for
 * @return Array
 *    The machine names and vids or false
 **/

function _syndication_client_vocabulary_lookup_map_by_name($mname, $location = "server") {

  $which = 'machine_name_s';
  if($location == "local") {
    $which = 'machine_name_l';
  }

  $query = db_select('sc_vocabmap', 'sc')
            ->fields('sc', array('machine_name_l', 'vid_l', 'machine_name_s', 'vid_s'))
            ->condition($which, $mname)
            ->range(0,1);

  $result = $query->execute();
  $ar = $result->fetchAssoc();

  if(!isset($ar['machine_name_l'])) { return false; }

  return $ar;

}





/**
 * Looks up a vocabulary map
 * @param $vid
 *    The vid name from the server
 * @param $location
 *    Either server or client to determine which vid we are looking for
 * @return Array
 *    The machine names and vids or false
 **/

function _syndication_client_vocabulary_lookup_map_by_vid($vid, $location = "server") {

  $which = 'vid_s';
  if($location == "local") {
    $which = 'vid_l';
  }

  $query = db_select('sc_vocabmap', 'sc')
            ->fields('sc', array('machine_name_l', 'vid_l', 'machine_name_s', 'vid_s'))
            ->condition($which, $vid)
            ->range(0,1);

  $result = $query->execute();
  $ar = $result->fetchAssoc();

  if(!isset($ar['vid_l'])) { return false; }

  return $ar;

}




/**
 * Lookup a local term id from server term id
 *
 * @param $tid (int)
 *    The server term id
 * @return int
 *    The local term ID or FALSE if not found
 **/
function _syndication_client_lookup_local_tid_by_server_tid($tid)
{
  $q = db_select('sc_termmap', 'sc')
        ->fields('sc', array('tid_l'))
        ->condition('tid_s', $tid)
        ->range(0,1)
        ->execute();

  $r = $q->fetchAssoc();

  if(is_numeric($r['tid_l'])) {
    return $r['tid_l'];
  }

  return FALSE;
}






/**

  [Obsolete]

 * Syndication Client Generate New Machine Name for Vocabulary
 * In order to avoid overwriting a local vocabulary with matching
 * machine names as the server we need to change it
 *
 * @param $vocab
 *    The vocabulary Object
 * @param $exists
 *    Whether or not the generated name still exists
 * @param $try
 *    An integer for creating endless loops!
 **/

function _syndication_client_generate_new_vocab_machine_name(&$vocab, &$exists = TRUE, $try = 0) {

  $name = strtolower($vocab->name);
  $clean_name = drupal_clean_css_identifier($name);
  $cleaner_name = str_replace("-","_", $clean_name);

  // append a serial if for some reason a name exists
  if($try > 0) {
    $cleaner_name .= $try;
  }

  while($exists) {
    $v = taxonomy_vocabulary_machine_name_load($cleaner_name);
    if($v) {
      $try++;
      _syndication_client_generate_new_vocab_machine_name($vocab, $exists, $try);
    } else {
      $vocab->machine_name = $cleaner_name;
      $exists = FALSE;
      return;
    }
  }

  return;
}






















// /////////////////////////////////////////////////////////////////////////////
// FILE UTILITIES
// /////////////////////////////////////////////////////////////////////////////

/**
 * Updates a file's uri to support external file stream wrapper
 *
 * @param $file
 *    The file object
 *
 *
 **/
function _syndication_client_apply_remote_file_steam_uri(&$file)
{
  // Allowed Streams..
  $allowed = array('public','private');

  // replace the w/e stream with the remote one
  $uri = $file->uri;

  // Break up the parts of the URI
  $uri_x = explode('://', $uri);

  // Check to see if the scheme is allowed
  if(!in_array($uri_x[0], $allowed)) {
    return $file;
  }

  // Replace with syn.....
  $uri_x[0] = variable_get('syndication_client_stream_wrapper', 'syndication');
  $uri = implode("://", $uri_x);

  // Assign back to file array
  $file->uri = $uri;

}


/**
 * Returns a fully loaded LOCAL file object if a server match is made
 *
 * @param $fid
 *    The Server's file ID
 *
 * @return (object)
 *    A fully loaded file object or False if none
 **/
function _syndication_client_lookup_remote_file_map($fid)
{

  $q = db_select('sc_filemap', 'scf')
        ->fields('scf',array('fid_l'))
        ->condition('fid_s', $fid)
        ->range(0,1)
        ->execute();

  $r = $q->fetchAssoc();

  if(!isset($r['fid_l'])) {
    return FALSE;
  }

  return file_load($r['fid_l']);

}


/**
 * Trys to retrieve a file by fid from the syndication server
 * @param  int $fid
 *         The file id of the file on the syndication server you are looking for
 * @return mixed
 *         Flase if not found. Otherwise a full file object.
 */

function _syndication_client_get_remote_file($fid) {

  $args = array(
      'what' => 'syndication_files',
      'action' => 'file_object',
      'args' => array(
        'fid' => $fid
      ),
    );

  $file = syndication_client_make_request($args);

  return $file;
}


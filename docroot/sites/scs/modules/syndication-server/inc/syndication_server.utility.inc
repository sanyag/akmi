<?php

/**
 * @file
 * @description
 * A Number of utility and helper functions
 * 
 * 
 **/

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Get Client Keys by domain name 
 * @param - $domain 
 *    Domain name
 * @return array
 *    An array of keys for the domain or false if none
 **/

function _get_keys_by_domain($domain) {
  
  if(empty($domain)) { return; }
  
  $query = db_select('ss_client_keys', 'ss')
            ->fields('ss')
            ->condition('client_domain', $domain)
            ->range(0,1)
            ->execute();
  
  return $query->fetchAssoc();
  
}


/**
 * Get all syndication client keys
 * @return multidimensional array of keys
 **/

function _syndication_server_get_all_keys() {
  
  // $fields = array(
  //   'client_domain',
  //   'client_public',
  //   'client_secret',
  //   'server_public',
  //   'server_secret',
  //   'status',
  // );
  
  $query = db_select('ss_client_keys', 'ss')
            ->fields('ss')
            ->orderBy('client_domain','ASC')
            ->execute();
  
  $ret = array();
  while($ar = $query->fetchAssoc()) {
    $ret[$ar['kid']] = $ar;
  }
  
  return $ret;
}


/**
 * Authentication function from client pubkey on request.
 * If not valid throws out an error and kills all processing
 * 
 * @param $domain
 *    The requesting domain
 * @param $pubkey
 *    The public key string
 * 
 **/
 
function _syndication_server_authenticate_client_public_key($domain, $key) {
  // Check if we are indebgu mode
  $debug = variable_get('syndication_server_debug', 0);
  if ($debug) {
    return TRUE;
  }
  
  $salt = drupal_get_hash_salt();
  $domain = _syndication_server_prepare_domain_name($domain);
  $keys = _get_keys_by_domain($domain);
  
  
  // Check to see if the public key matches the one in the DB 
  if($keys['client_public'] !== $key) { 
    services_error(t('Invalid Public Key'), 401);
    exit();
  }
  
  // Check to see if the pubkey matches the secret
  $secret_key = sha1($domain) . "-" . md5($keys['client_public'] . $salt);
  
  if($secret_key !== $keys['client_secret']) { 
    services_error(t('Invalid Public Key'), 401);
    exit();
  }
  
  return true;
}



/**
 * Takes a domain name string and chops off all the unnecessary parts
 * @param $domain
 *    A string domain name eg: http://www.google.com/abcedfg?s=hijklmnop
 * @return String
 *    A clean domain name eg: www.google.com
 **/

function _syndication_server_prepare_domain_name($domain) {
    
  // remove http stuff
  if(substr($domain,0,7) == "http://") {
    $domain = str_replace("http://",'',$domain);
  }
  
  if(substr($domain,0,8) == "https://") {
    $domain = str_replace("https://",'',$domain);
  }
  
  //remove end slash and sub directories if one
  $xp = explode("/",$domain);
  $domain = $xp[0];
  
  return $domain;
}




























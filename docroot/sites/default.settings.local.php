<?php

/**
 * Local DB connection
 **/

$databases = array(
  'default' => array(
    'default' => array(
      'database' => '',
      'username' => '',
      'password' => '',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => array(
        'default' => '',
        'users' => 'akdnusers.',
        'sessions' => 'akdnusers.',
        'authmap' => 'akdnusers.',
      ),
    ),
  ),
);

$db_prefix = '';
$shared = '';

/**
 * Conf settings
 *
 **/
/*
$conf = array_merge($conf,array(
  'mysetting' => 'something',
  )
);*/

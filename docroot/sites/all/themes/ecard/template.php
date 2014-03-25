<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

 function ecard_preprocess_page(&$vars) {
  drupal_add_js(path_to_theme() . '/js/script.js');
  global $user;
  if ($user->uid === 0) {
    drupal_add_js('sites/all/libraries/history.js/scripts/bundled/html4+html5/jquery.history.js');
    drupal_add_js(array('ecard_admin_history' => array(
      'is_anon' => TRUE,
    )), 'setting');
  }

  if (variable_get('ecard_debug', 0) == 1 && user_access("administer ecards")) {
    drupal_set_message('Debug mode is on; no eCards will be sent.', 'warning', FALSE);
  }
 }
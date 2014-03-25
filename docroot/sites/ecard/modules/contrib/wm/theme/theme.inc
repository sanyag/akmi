<?php

/**
 * @file
 * Template preprocess functions
 */

function template_preprocess_wm_toolbar(&$vars) {
  global $user;

  $vars['profile'] = l($user -> name, 'user/' . $user -> uid);
  $vars['picture'] = theme('user_picture', array('account' => $user));
  $vars['logout_url'] = l(t('logout'), 'user/logout');
  $vars['image_path'] = drupal_get_path('module', 'wm') . '/images/';

  $blocks = $vars['blocks'];

  if (user_access('view notifications')) {
    $vars['status'] = theme('wm_toolbar_block', $blocks['status']);
  }

  unset($blocks['status']);
  uasort($blocks, 'cmp');

  $scollable = array();
  $shortcuts = '';
  foreach ($blocks as $block) {
    $scollable[] = theme('wm_toolbar_block', $block);
    foreach ($block['#items'] as $item) {
      if (isset($item['shortcut']) and $item['shortcut'] == TRUE) {
        $shortcuts .= theme('wm_toolbar_shortcut', $item);
      }
    }
  }
  $vars['scollables'] = $scollable;
  $vars['shortcuts'] = $shortcuts;
}

function cmp($a, $b) {
  if ($a['#weigth'] == $b['#weigth']) {
    return 0;
  }
  return ($a['#weigth'] < $b['#weigth']) ? -1 : 1;
}

function template_preprocess_wm_toolbar_block(&$vars) {

  $vars['title'] = t($vars['#title']);
  $vars['class'] = implode(' ', $vars['#class']);

  $output = '';
  foreach ($vars['#items'] as $item) {
    $output .= theme('wm_toolbar_item', $item);
  }
  $vars['items'] = $output;
}

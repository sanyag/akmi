<?php

/**
 * Implements hook_panels_layouts().
 */
function akdn_omega_24_threerow_stacked_panels_layouts() {
  $items['omega_24_threerow_stacked'] = array(
    'title' => t('Three row stacked'),
    'category' => t('Omega: 24 Column Grid'),
    'icon' => 'omega_24_threerow_stacked.png',
    'theme' => 'omega_24_threerow_stacked',
    'admin css' => '../omega_panels_admin_24.css',
    'regions' => array(
      'top' => t('Top'),
      'middle' => t('Middle'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}

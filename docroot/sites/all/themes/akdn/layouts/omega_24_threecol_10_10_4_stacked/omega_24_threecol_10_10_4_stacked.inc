<?php

/**
 * Implements hook_panels_layouts().
 */
function akdn_omega_24_threecol_10_10_4_stacked_panels_layouts() {
  $items['omega_24_threecol_10_10_4_stacked'] = array(
    'title' => t('Three column 10-10-4 stacked'),
    'category' => t('Omega: 24 Column Grid'),
    'icon' => 'omega_24_threecol_10_10_4_stacked.png',
    'theme' => 'omega_24_threecol_10_10_4_stacked',
    'admin css' => '../omega_panels_admin_24.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}

<?php


function akdn_custom_project_carousel_admin($form, &$form_state) {
  $form['url_add_components'] = array(
    '#type' => 'fieldset',
    '#attributes' => array(
      'class' => array(
        'clearfix',
      ),
    ),
  );
  $form['url_add_components']['url_to_add_field'] = array(
    '#type' => 'textfield',
    '#title' => t('URL to add:'),
    '#size' => '100',
  );
  $form['url_add_components']['url_to_add_submit'] = array(
    '#type' => 'submit',
    '#name' => t('add_url'),
    '#value' => t('Add this URL'),
  );
  $form['url_add_components']['url_to_add_description'] = array(
    '#type' => 'markup',
    '#markup' => '<div class="url-to-add-description">The project carousel shows up on every page by default. To hide the display on a specific page, please add the page\'s URL here. Please use relative paths (eg for akdn.org/press-centre/press-releases, please enter /press-centre/press-releases ). For the home page, please enter [front].</div>',
  );

  $rows = db_query('SELECT * FROM {project_carousel_exceptions}')->fetchAll();

  if (count($rows) > 0) {
    $form['url_list'] = array(
      '#type' => 'markup',
      '#prefix' => '<table id="carousel-url-list">',
      '#suffix' => '</table>'
    );
    $row_count = 0;
    $form['url_list']['header_row'] = array(
      '#type' => 'markup',
      '#prefix' => '<tr class="carousel-url-row">',
      '#suffix' => '</tr>'
    );
    $form['url_list']['header_row']['url'] = array(
      '#type' => 'markup',
      '#markup' => '<th class="carousel-url-field">URLs to hide Project Carousel</th>',
    );
    $form['url_list']['header_row']['url_delete'] = array(
      '#type' => 'markup',
      '#markup' => '<th class="carousel-url-delete">Delete</th>',
    );
    foreach ($rows as $url) {
      $form['url_list']['values'][$row_count] = array(
        '#type' => 'markup',
        '#prefix' => '<tr class="carousel-url-row">',
        '#suffix' => '</tr>'
      );
      $form['url_list']['values'][$row_count]['url'] = array(
        '#type' => 'textfield',
        '#value' => $url,
        '#size' => '100',
        '#disabled' => 'disabled',
        '#prefix' => '<td class="carousel-url-field">',
        '#suffix' => '</td>'
      );
      $form['url_list']['values'][$row_count]['url_delete_'.$row_count] = array(
        '#type' => 'checkbox',
        '#prefix' => '<td class="carousel-url-delete">',
        '#suffix' => '</td>'
      );
      $row_count++;
    }
    $form['url_list_submit'] = array(
      '#type' => 'submit',
      '#name' => t('update'),
      '#value' => t('Update'),
    );
  }


  return $form;
}

function akdn_custom_project_carousel_admin_submit($form, &$form_state) {
  if ($form_state['triggering_element']['#name'] == 'add_url') { // If the user clicked on the "Add this URL" button
    if ($form_state['input']['url_to_add_field'] != '') {
      db_insert('project_carousel_exceptions')
      ->fields(array(
        'url' => $form_state['input']['url_to_add_field'],
      ))
      ->execute();
    }
  } elseif ($form_state['triggering_element']['#name'] == 'update') { //If the user clicked on the "Update" button
    $updated = FALSE;
    foreach ($form_state['complete form']['url_list']['values'] as $key => $value_array) {
      if (isset($value_array['url_delete_'.$key]['#checked'])) {
        if ($value_array['url_delete_'.$key]['#checked'] == 1) {
          db_delete('project_carousel_exceptions')
          ->condition('url',$value_array['url']['#value']->url)
          ->execute();
          $updated = TRUE;
        }
      }
    }
    if ($updated) {
      drupal_set_message('The selected URLs have been removed.');
    } else {
      drupal_set_message('Please select at least one URL to delete.','error');
    }
  }
}

?>

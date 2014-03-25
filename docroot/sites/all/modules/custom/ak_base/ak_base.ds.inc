<?php
/**
 * @file
 * ak_base.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function ak_base_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'summary_more';
  $ds_field->label = 'Summary + More';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
global $language;
$lang = $language->language;
print text_summary(strip_tags($entity->body[$lang][0][\'safe_value\']));
?>
<a class="more-link" href="[node:url]"> | More</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['summary_more'] = $ds_field;

  return $export;
}

<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
$total_quotes = (isset($row->{'_entity_properties'}['speech_quotes_count'])) ? $row->{'_entity_properties'}['speech_quotes_count'] : 1;
$show_more = t('| More Quotations');
$get_quote_link = l($show_more, 'quotes/get/nojs/' . $row->entity, array('html' => TRUE, 'attributes' =>
    array('title' => 'Get quotes',
        'class' => 'use-ajax')
        )
);
$output = '';
if ($total_quotes > 1) {
  $output .= "<span id='show_more_quotes_for_" . $row->entity . "' class='show-more-quotes'>";
  $output .= $get_quote_link;
  $output .= '</span>';
}
$output .= "<div id='get_speech_quotes_for_" . $row->entity . "' class='show-more-quotes'>";
$content .= '<span class="toggle-quote-display"></span>';
$output .= "</div>";
?>
<?php print $output; ?>
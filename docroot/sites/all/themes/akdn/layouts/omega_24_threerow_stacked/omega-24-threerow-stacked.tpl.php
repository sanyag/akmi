<div class="panel-display omega-grid container-24 omega-24-threerow-stacked" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel panel-top grid-24">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  <div class="panel-panel panel-middle grid-24">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
  <div class="panel-panel panel-bottom container-24">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>

<div class="panel-display omega-grid omega-24-threecol-10-10-4-stacked" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-24 alpha omega">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  <div class="panel-panel grid-9 prefix-1">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel grid-9">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
  <div class="panel-panel grid-4 suffix-1">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <div class="panel-panel grid-24">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>

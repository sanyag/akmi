<?php
/**
 * @file
 * Override for PDF print
 *
 * @ingroup print
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $print['language']; ?>" xml:lang="<?php print $print['language']; ?>">
<!-- Begin Hide the Meta info and Footnotes -->
<style type="text/css">
.group_meta_info,
.print-footnote{
display: none;
}
</style>
<!-- End Hide the Meta info and Footnotes -->
<!-- Replace unusual chars with UTF-8 standard -->
<?php
$replaced_chars = array(
"“" => "\"",
"”" => "\"",
"’" => "'",
"–" => "-",
"—" => "-",
);
foreach ($replaced_chars as $key => $value) {
  $print['content'] = str_replace($key, $value, $print['content']);
  $print['title'] = str_replace($key, $value, $print['title']);
}
?>
<!-- End replace -->
  <head>
    <?php print $print['head']; ?>
    <?php print $print['base_href']; ?>
    <title><?php print $print['title']; ?></title>
    <?php print $print['scripts']; ?>
    <?php print $print['sendtoprinter']; ?>
    <?php print $print['robots_meta']; ?>
    <?php print $print['favicon']; ?>
    <?php print $print['css']; ?>
  </head>
  <body>
    <div class="print-logo"><?php print $print['logo']; ?></div>
    <p />
    <div class="print-title"><h1><?php print ucwords($print['title']); ?></h1></div>
    <hr class="print-hr" />
    <div class="print-content"><?php print date('F j, Y' , $node->field_publish_date[LANGUAGE_NONE][0]['value']); ?></div><br>
    <?php
    $matches = array();
    $output = $print['content'];
    preg_match('/(<img[^>]+>)/i', $output , $matches);
    $output = str_replace($matches[1]."</a>", $matches[1]."</a>"."<p style=\"font-style:italic\">".$node->field_article_img['en'][0]['field_image_caption']['und'][0]['value']."</p>", $output);
    ?>
    <div class="print-content"><?php print $output; ?></div>
    <?php print $print['footer_scripts']; ?>
  </body>
</html>

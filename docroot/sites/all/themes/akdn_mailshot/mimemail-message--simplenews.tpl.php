<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
 global $base_url;
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
    <?php endif; ?>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="center">
      <div id="main">
          <div class="logo">
            <img <?php print 'src="' . $base_url . '/sites/all/themes/akdn/images/logo.png"' ?> alt="<?php print t('Home'); ?>" />
          </div>
        <?php print $body ?>
        <div id = "akdn-copyright">
          <?php $block = module_invoke('block', 'block_view', '5');
          print render($block['content']);
          ?>
        </div>
      </div>
    </div>
    <div class="band"></div>
  </body>
</html>

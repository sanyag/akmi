
(function ($) {
namespace('Drupal.media.browser');

Drupal.behaviors.experimentalMediaBrowser = {
  attach: function (context) {
    Drupal.media.browser.resizeIframe();
  }
};

Drupal.media.browser.resizeIframe = function (event) {
  var h = $('body').height();
  $(parent.window.document).find('#mediaBrowser').height(h);
};

}(jQuery));

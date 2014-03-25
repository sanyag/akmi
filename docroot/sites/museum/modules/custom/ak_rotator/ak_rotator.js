(function ($) {

  Drupal.ak_rotator = Drupal.ak_rotator || {};

  Drupal.behaviors.ak_rotator = {
    attach: function (context) {
      $("#slides").slides({
        effect: 'fade',
        fadeSpeed: 300,
        play: 5000
      });
    }
  };

})(jQuery);

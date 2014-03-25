/**
 * @file
 * Set the adaptive image cookie based on the window size
 *
 */

/**
 * Set the cookie with the width value
 */
(function ($) {
  Drupal.behaviors.ais = function () {
    var size = Math.max( $(window).width(), $(window).height() );
    var style = {'name': 'adaptive', 'size': 0};
    for (i in Drupal.settings.ais) {
       if (Drupal.settings.ais[i].size < size && Drupal.settings.ais[i].size > style.size) {
         style = Drupal.settings.ais[i];
       }
    }
    if (style) {
      document.cookie='ais='+style.name+'; path=/';
    }
  }
  $(window).resize(Drupal.behaviors.ais);
}(jQuery));

  // Call the cookie set function right away
  Drupal.behaviors.ais();


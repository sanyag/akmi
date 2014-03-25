(function ($) {
  Drupal.behaviors.akdnArchTheme = {
    attach: function(context) {
      $('.mobile-menu-link', context).click(function(event) {
        event.preventDefault();
        var block = $('#block-menu-block-1');
        if (block.hasClass('open')) {
          block.removeClass('open');
          $('ul li.tmp', block).remove();
        }
        else {
          $('ul', block).prepend('<li class="tmp"><a href="/">Home</a></li>');
          block.addClass('open');
        }
      });
      $(".site-name").lettering('words').children('span').lettering();
    }
  }
})(jQuery);
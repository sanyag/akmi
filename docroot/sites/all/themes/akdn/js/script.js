(function ($) {

  Drupal.behaviors.akdnTheme = {
    attach: function(context) {
      $('h1, h2, h3, h4, a', context).each(function(){
        var inside = $(this).html();
        $(this).html(inside.replace(/Aga Khan/g, 'Aga&nbsp;Khan'));
      })
      // var s = document.getElementById('section-content');
      //s.innerHTML = s.innerHTML.replace(/Aga Khan/g, 'Aga&nbsp;Khan');

      // Search for occurences of Aga Khan.
      $("body *", context).replaceText(/(aga) (khan)/gi, "$1<span>&nbsp;</span>$2");

      // Move main image to 2nd paragraph on basic pages.
      if ($('body.node-type-page .field-name-image-colorbox-link', context).length > 0) {
        if ($('.field-name-body p', context).length > 1) {
          var main_image = $('body.node-type-page .field-name-image-colorbox-link', context);
          $('.field-name-body p:eq(1)', context).prepend(main_image);
        }
      }

      // Function for the mobile menu.
      //$('#block-menu-block-6').hide();
      $('.mobile-menu-link', context).click(function(event) {
        event.preventDefault();
        var block = $('#block-menu-block-6');
        if (block.hasClass('open')) {
          block.removeClass('open');
          $('ul li.tmp', block).remove();
        }
        else {
          $('ul', block).prepend('<li class="tmp"><a href="/">Home</a></li>');
          block.addClass('open');
        }
      });


      // Search form default text.
      $('#block-search-form .form-item-search-block-form input', context).each(function () {
        var input = $(this);
        var placeholder = "Search AKDN";
        if (!input.val()) {
          input.val(placeholder);
        }
        input.focus(function() {
          if (input.val() == placeholder) {
            input.val('');
          }
        });
        input.blur(function() {
          if (input.val() == '') {
            input.val(placeholder);
          }
        });
      });

      // Don't search for default search text.
      $('#search-block-form', context).submit(function() {
        var search_text = $(this).find('.form-text').val();
        if (search_text == 'Search AKDN') {
          $(this).find('.form-text').val('');
        }
      });

      // Add class to last item in press centre view.
      $('.view-press-center.view-display-id-block_2 .views-limit-grouping-group', context).eq(-1).addClass('last');
      //$(".view-id-projects .slide img").reflect({height:0.4, opacity:0.3});

      // Add touch capability to the project slider
      if ($('.view-id-projects .carousel li', context).length) {

        $('.view-id-projects .carousel li', context).swipe({
          swipeRight: function(event, direction, distance, duration, fingerCount) {
            $('div.jcarousel-prev', context).trigger('click');
          },
          swipeLeft: function(event, direction, distance, duration, fingerCount) {
            $('div.jcarousel-next', context).trigger('click');
          },
        });
      }

      if ($('.node-type-podcast #block-ds-extras-media').length) {
        $('.node-type-podcast .field-name-image-colorbox-link').addClass('podcast-has-video');
      }

      if ($('.media-image-wrapper .media-image-right').length) {
        $('.media-image-wrapper .media-image-right').parent('.media-image-wrapper').addClass('media-image-wrapper-right');
      }

      // Make sure e-mail links have domains attached to them.
      $('a[href^="mailto:"]', context).each(function() {
        var email = $(this).html();
        var re = /^(([^<>()[\]\\.,;:\s@\"]+(\.[^<>()[\]\\.,;:\s@\"]+)*)|(\".+\"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
        if (!re.test(email)) {
          $(this).replaceWith(email);
        }
      });

      /*if ($('.view-agencies.view-display-id-block_2 .views-table').length) {
        var last_row = $('.view-agencies.view-display-id-block_2 .views-table tbody tr:last');
        var odd_even_class = 'odd';
        if (last_row.hasClass('odd')) {
          odd_even_class = 'even';
        }
        last_row.removeClass('views-row-last');
        last_row.after('<tr class="'+odd_even_class+' views-row-last"><td class="views-field views-field-view-node views-align-left"><a href="/architecture">AKAA</a></td><td class="views-field views-field-title-field views-align-left"><a href="/architecture">Aga&nbsp;Khan Academies Architecture</a></td></tr>');
      }*/
      $(".site-name").lettering('words').children('span').lettering();
      
      
      //$("#views-exposed-form-akaa-projects-page input[name='body_value']").attr('placeholder','Enter Keyword');
    }
  }

}(jQuery));

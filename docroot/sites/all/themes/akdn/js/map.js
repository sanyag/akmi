(function ($) {

  Drupal.behaviors.akdnMap = {
    attach: function(context) {

      if ($('#world-map', context)[0]) {
        var map = $('#world-map', context);
        var i = 1;
        $('#country-list li a', context).each(function() {
          $(this).data('id', i);
          var c = $(this).clone();
          var m = $(this).clone(); //mobile version
          c.text($(this).text())
            .attr('class', 'country')
            .attr('id', 'country-' + i)
            .attr('alt', $(this).text())
            .css({
              'top': $(this).data('y'),
              'left': $(this).data('x')
            })
            /*.hover(
              function(){Drupal.behaviors.akdnMap.countryCode($(this).attr('id'), 'on')},
              function(){Drupal.behaviors.akdnMap.countryCode($(this).attr('id'), 'off')}
            );*/
          m.text($(this).text())
            .attr('class', 'mobile-country')
            .attr('id', 'mobile-country-' + i)
            .attr('alt', $(this).text())
            .css({
              'top': ($(this).data('y').substr(0,$(this).data('y').length-2)*(540/780))+'px',
              'left': ($(this).data('x').substr(0,$(this).data('x').length-2)*(540/780))+'px'
            });
            /*.hover(
              function(){Drupal.behaviors.akdnMap.countryCode($(this).attr('id'), 'on')},
              function(){Drupal.behaviors.akdnMap.countryCode($(this).attr('id'), 'off')}
            );*/

          map.append(c);
          map.append(m);

          $(this).hover(
            function(){Drupal.behaviors.akdnMap.countryCode('country-' + $(this).data('id'), 'on')},
            function(){Drupal.behaviors.akdnMap.countryCode('country-' + $(this).data('id'), 'off')}
          );
          i++;
        });

        $('#region-stories .region', context).each(function(){
          var r = $(this).clone();
          map.append(r);
        });

        $('#world-map .region', context).each(function(){
          $(this).hover(
            function(){
              $(this).find('.region-cont').show();
            },
            function(){
              $(this).find('.region-cont').hide();
            }
          );
        });
      }
    },

    countryCode: function(id, state){
      var l = $('#' + id);

      if (state == 'on' ) {
        l.data('abbr', l.text())
          .text(l.attr('alt'))
          .addClass('hover');
      }
      else {
        l.text(l.data('abbr')).removeClass('hover');
      }
    }
  }
}(jQuery));

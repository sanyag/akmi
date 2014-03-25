(function($) {
  Drupal.behaviors.akdnSearch = {
    attach: function(context, settings) {
    // Turn Facet API filters into nice select lists

      $('.block-facetapi .content ul', context).each(function() {
        var select = $('<select class="facetapi-jq-select"/>');
        var def = $('<option />');
        def.attr('value', '---').html('---Select---');
        select.append(def);
        var count = 0;
        var selected = $('<div />');
        $(this).find('a').each(function() {
          if ($(this).hasClass('facetapi-active')) {
            selected.append($(this).parent('li').html() + '<br/>');
          }
          else {
            count++;
            var option = $('<option />');
            option.attr('value', $(this).attr('href')).html($(this).html());
            option.find('span').remove();
            select.append(option);
          }
        });
        $(this).before(selected);
        $(selected).find('a').mouseover(function(){
          $(this).text('(remove) ');
        }).mouseout(function(){
          $(this).text('(-) ');
        });
        if (count) {
          $(this).replaceWith(select);
        }
        else {
          $(this).remove();
        }
      });
      $('.facetapi-jq-select', context).change(function(){
        var val = $(this).find('option:selected').val();
        if (val != '---'){
          window.location.replace(val);
        }
      });

    }

  }
})(jQuery);

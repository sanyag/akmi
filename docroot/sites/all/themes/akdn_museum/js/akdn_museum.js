(function($) {
  Drupal.behaviors.akdnMuseum = {
    attach: function (context) {
      // Remove default text from global search bar
      if ($("#green").length){
        var placeholder = $('#green input').val();
        $('#green input').focus(function(){
          $(this).val('');
        });
        $('#green input').blur(function(){
          if ($(this).val() == ""){
            $(this).val(placeholder);
          }
        });
      }
      
      // Create menu as a dropdown that is only shown on the mobile layout
      var menu = $('<select class="facetapi-jq-select"/>');
      $('#block-menu-block-1 ul.menu a', context).each(function(){
        var option = $('<option />');
        var len = $(this).parents("ul.menu").length;
        var pre = '';
        for (i = 1; i < len; i++){
          pre += '-';
        }
        if($(this).hasClass('active')){
          option.attr('selected', 'selected');
        }
        option.attr('value', $(this).attr('href')).html(pre + ' ' + $(this).html());
        menu.append(option);
      });
      // console.log(menu);
      var menuBlock = $('<div id="dd-menu"/>');
      menuBlock.append('<h2>Navigation</h2>');
      menuBlock.append(menu);
      $('#block-menu-block-1').before(menuBlock);
      
      // Turn Solr Search into a select list
      $('.block-apachesolr-sort .content ul', context).each(function(){
        var current = $('<div />');
        var options = $('<select class="facetapi-jq-select"/>');
        var def = $('<option />');
        def.attr('value', '---').html('---Select---');
        options.append(def);
        $(this).find('a').each(function() {
          if ($(this).hasClass('active')) {
            current.append($(this).parent('li').html());
          }
          else {
            var option = $('<option />');
            option.attr('value', $(this).attr('href')).html($(this).html());
            options.append(option);
          }
        });
        $(this).before(current);
        $(this).replaceWith(options);
      });
      
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
            select.append(option);            
          }
        });
        $(this).before(selected);
        $(selected).find('a').mouseover(function(){
          $(this).text('(remove)');
        }).mouseout(function(){
          $(this).text('(-)');
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
  };
})(jQuery);
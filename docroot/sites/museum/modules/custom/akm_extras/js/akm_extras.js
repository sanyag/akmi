(function($) {
  Drupal.behaviors.akmExtras = {
    attach: function (context) {
      // Replace the text in the artefact serach box
      var placeholder = $('#akm-extras-search-block-form input').val();
      $('#akm-extras-search-block-form input').focus(function(){
        $(this).val('');
      });
      $('#akm-extras-search-block-form input').blur(function(){
        if ($(this).val() == ""){
          $(this).val(placeholder);
        }
      });
      $('#akm-extras-search-block-form #edit-submit').click(function(){
        if ($('#akm-extras-search-block-form #edit-keys').val() == placeholder) {
          return false;
        }
      });
    }
  };
})(jQuery);
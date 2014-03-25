(function($) {

})(jQuery);


jQuery(document).ready(function($) {
  $('#searchterm').each(function() {
    var def = $(this).val();

    $(this).focus(function() {
      if ($(this).val() == def) {
        $(this).val("");
      }
      if ($(this).hasClass('nonfocus')) {
        $(this).removeClass('nonfocus').addClass('focus');
      }
    });

    $(this).blur(function() {
      if ($(this).val() == "") {
        $(this).val(def);
        if ($(this).hasClass('focus')) {
          $(this).removeClass('focus').addClass('nonfocus');
        }
      }
    });

  })
});
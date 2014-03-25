jQuery(document).ready(function($) {
  $('#ecard-admin-create div .form-item-sender-message .form-textarea-wrapper').before($('#ecard-admin-create div .form-item-sender-message .description'));

  var History = window.History;
  if ( History && History.enabled ) {
    var pathname = decodeURI(window.location.href);
    if (pathname.indexOf("frmh=") != -1) {
      var isPush = false;
      History.Adapter.bind(window,'popstate',function(){ // Note: We are using statechange instead of popstate
        var State = History.getState(); // Note: We are using History.getState() instead of event.state
        History.log(State.data, State.title, State.url);
        if (isPush) {
          isPush = false;
          History.pushState(null, "", pathname);
        }
        isPush=true;
      });
      History.pushState({state:1}, "", pathname);
    }
  }
});
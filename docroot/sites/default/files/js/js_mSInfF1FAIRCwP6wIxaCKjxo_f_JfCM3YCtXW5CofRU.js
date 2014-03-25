/*global jQuery */
/*!	
* Lettering.JS 0.6.1
*
* Copyright 2010, Dave Rupert http://daverupert.com
* Released under the WTFPL license 
* http://sam.zoy.org/wtfpl/
*
* Thanks to Paul Irish - http://paulirish.com - for the feedback.
*
* Date: Mon Sep 20 17:14:00 2010 -0600
*/
(function($){
	function injector(t, splitter, klass, after) {
		var a = t.text().split(splitter), inject = '';
		if (a.length) {
			$(a).each(function(i, item) {
				inject += '<span class="'+klass+(i+1)+'">'+item+'</span>'+after;
			});	
			t.empty().append(inject);
		}
	}
	
	var methods = {
		init : function() {

			return this.each(function() {
				injector($(this), '', 'char', '');
			});

		},

		words : function() {

			return this.each(function() {
				injector($(this), ' ', 'word', ' ');
			});

		},
		
		lines : function() {

			return this.each(function() {
				var r = "eefec303079ad17405c889e092e105b0";
				// Because it's hard to split a <br/> tag consistently across browsers,
				// (*ahem* IE *ahem*), we replaces all <br/> instances with an md5 hash 
				// (of the word "split").  If you're trying to use this plugin on that 
				// md5 hash string, it will fail because you're being ridiculous.
				injector($(this).children("br").replaceWith(r).end(), r, 'line', '');
			});

		}
	};

	$.fn.lettering = function( method ) {
		// Method calling logic
		if ( method && methods[method] ) {
			return methods[ method ].apply( this, [].slice.call( arguments, 1 ));
		} else if ( method === 'letters' || ! method ) {
			return methods.init.apply( this, [].slice.call( arguments, 0 ) ); // always pass an array
		}
		$.error( 'Method ' +  method + ' does not exist on jQuery.lettering' );
		return this;
	};

})(jQuery);;
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
;
/*
* touchSwipe - jQuery Plugin
* https://github.com/mattbryson/TouchSwipe-Jquery-Plugin
* http://labs.skinkers.com/touchSwipe/
* http://plugins.jquery.com/project/touchSwipe
*
* Copyright (c) 2010 Matt Bryson (www.skinkers.com)
* Dual licensed under the MIT or GPL Version 2 licenses.
*
* $version: 1.3.3
*/(function(g){function P(c){if(c&&void 0===c.allowPageScroll&&(void 0!==c.swipe||void 0!==c.swipeStatus))c.allowPageScroll=G;c||(c={});c=g.extend({},g.fn.swipe.defaults,c);return this.each(function(){var b=g(this),f=b.data(w);f||(f=new W(this,c),b.data(w,f))})}function W(c,b){var f,p,r,s;function H(a){var a=a.originalEvent,c,Q=n?a.touches[0]:a;d=R;n?h=a.touches.length:a.preventDefault();i=0;j=null;k=0;!n||h===b.fingers||b.fingers===x?(r=f=Q.pageX,s=p=Q.pageY,y=(new Date).getTime(),b.swipeStatus&&(c= l(a,d))):t(a);if(!1===c)return d=m,l(a,d),c;e.bind(I,J);e.bind(K,L)}function J(a){a=a.originalEvent;if(!(d===q||d===m)){var c,e=n?a.touches[0]:a;f=e.pageX;p=e.pageY;u=(new Date).getTime();j=S();n&&(h=a.touches.length);d=z;var e=a,g=j;if(b.allowPageScroll===G)e.preventDefault();else{var o=b.allowPageScroll===T;switch(g){case v:(b.swipeLeft&&o||!o&&b.allowPageScroll!=M)&&e.preventDefault();break;case A:(b.swipeRight&&o||!o&&b.allowPageScroll!=M)&&e.preventDefault();break;case B:(b.swipeUp&&o||!o&&b.allowPageScroll!= N)&&e.preventDefault();break;case C:(b.swipeDown&&o||!o&&b.allowPageScroll!=N)&&e.preventDefault()}}h===b.fingers||b.fingers===x||!n?(i=U(),k=u-y,b.swipeStatus&&(c=l(a,d,j,i,k)),b.triggerOnTouchEnd||(e=!(b.maxTimeThreshold?!(k>=b.maxTimeThreshold):1),!0===D()?(d=q,c=l(a,d)):e&&(d=m,l(a,d)))):(d=m,l(a,d));!1===c&&(d=m,l(a,d))}}function L(a){a=a.originalEvent;a.preventDefault();u=(new Date).getTime();i=U();j=S();k=u-y;if(b.triggerOnTouchEnd||!1===b.triggerOnTouchEnd&&d===z)if(d=q,(h===b.fingers||b.fingers=== x||!n)&&0!==f){var c=!(b.maxTimeThreshold?!(k>=b.maxTimeThreshold):1);if((!0===D()||null===D())&&!c)l(a,d);else if(c||!1===D())d=m,l(a,d)}else d=m,l(a,d);else d===z&&(d=m,l(a,d));e.unbind(I,J,!1);e.unbind(K,L,!1)}function t(){y=u=p=f=s=r=h=0}function l(a,c){var d=void 0;b.swipeStatus&&(d=b.swipeStatus.call(e,a,c,j||null,i||0,k||0,h));if(c===m&&b.click&&(1===h||!n)&&(isNaN(i)||0===i))d=b.click.call(e,a,a.target);if(c==q)switch(b.swipe&&(d=b.swipe.call(e,a,j,i,k,h)),j){case v:b.swipeLeft&&(d=b.swipeLeft.call(e, a,j,i,k,h));break;case A:b.swipeRight&&(d=b.swipeRight.call(e,a,j,i,k,h));break;case B:b.swipeUp&&(d=b.swipeUp.call(e,a,j,i,k,h));break;case C:b.swipeDown&&(d=b.swipeDown.call(e,a,j,i,k,h))}(c===m||c===q)&&t(a);return d}function D(){return null!==b.threshold?i>=b.threshold:null}function U(){return Math.round(Math.sqrt(Math.pow(f-r,2)+Math.pow(p-s,2)))}function S(){var a;a=Math.atan2(p-s,r-f);a=Math.round(180*a/Math.PI);0>a&&(a=360-Math.abs(a));return 45>=a&&0<=a?v:360>=a&&315<=a?v:135<=a&&225>=a? A:45<a&&135>a?C:B}function V(){e.unbind(E,H);e.unbind(F,t);e.unbind(I,J);e.unbind(K,L)}var O=n||!b.fallbackToMouseEvents,E=O?"touchstart":"mousedown",I=O?"touchmove":"mousemove",K=O?"touchend":"mouseup",F="touchcancel",i=0,j=null,k=0,e=g(c),d="start",h=0,y=p=f=s=r=0,u=0;try{e.bind(E,H),e.bind(F,t)}catch(P){g.error("events not supported "+E+","+F+" on jQuery.swipe")}this.enable=function(){e.bind(E,H);e.bind(F,t);return e};this.disable=function(){V();return e};this.destroy=function(){V();e.data(w,null); return e}}var v="left",A="right",B="up",C="down",G="none",T="auto",M="horizontal",N="vertical",x="all",R="start",z="move",q="end",m="cancel",n="ontouchstart"in window,w="TouchSwipe";g.fn.swipe=function(c){var b=g(this),f=b.data(w);if(f&&"string"===typeof c){if(f[c])return f[c].apply(this,Array.prototype.slice.call(arguments,1));g.error("Method "+c+" does not exist on jQuery.swipe")}else if(!f&&("object"===typeof c||!c))return P.apply(this,arguments);return b};g.fn.swipe.defaults={fingers:1,threshold:75, maxTimeThreshold:null,swipe:null,swipeLeft:null,swipeRight:null,swipeUp:null,swipeDown:null,swipeStatus:null,click:null,triggerOnTouchEnd:!0,allowPageScroll:"auto",fallbackToMouseEvents:!0};g.fn.swipe.phases={PHASE_START:R,PHASE_MOVE:z,PHASE_END:q,PHASE_CANCEL:m};g.fn.swipe.directions={LEFT:v,RIGHT:A,UP:B,DOWN:C};g.fn.swipe.pageScroll={NONE:G,HORIZONTAL:M,VERTICAL:N,AUTO:T};g.fn.swipe.fingers={ONE:1,TWO:2,THREE:3,ALL:x}})(jQuery);;

(function($) {

	Drupal.behaviors.wmToolbar = {};
	Drupal.behaviors.wmToolbar.attach = function(context) {
		$('#wm-toolbar:not(.processed)').each(function() {
			var toolbar = $(this);
			toolbar.addClass('processed');

			// Set initial toolbar state.
			Drupal.wmToolbar.init(toolbar);

			// Admin toggle.
			$('.wm-toggle-button', this).click(function() {
				Drupal.wmToolbar.toggle(toolbar);
			});
		});

		Drupal.wmToolbar.scroll(toolbar);

		$(window).resize(function() {
			Drupal.wmToolbar.scroll(toolbar);
		});
	};
	
	/**
	 * Wm toolbar methods.
	 */
	Drupal.wmToolbar = {};

	/**
	 * The width of the toolbar.
	 */
	Drupal.wmToolbar.SIZE = 260;

	/**
	 * Set the initial state of the toolbar.
	 */
	Drupal.wmToolbar.init = function(toolbar) {
		// Set expanded state.
		var expanded = this.getState('expanded');
		if(expanded == 1) {
			$(document.body).addClass('wm-expanded');
		} else {
			$(document.body).addClass('wm-collapsed');
		}

		// prevent scroll over borders
		$('.scroll-pane').mousewheel(function(event) {
			event.preventDefault();
		});
		// reset filter on focus
		$('#filter').focus(function() {
			$('input#filter').val('');
		});
		// filter
		$('#filter').keyup(function(event) {
			$('.scroll-pane li').each(function() {
				$(this).show();
			});
			var t = $('input#filter').val().toLowerCase();
			$('.scroll-pane li.item').each(function() {
				var name = $('.item-text a', this).html().toLowerCase();console.log(name);
				if(name.indexOf(t) == -1) {
					$(this).hide();
					var header = $('.header', $(this).parent());
					if($('li:visible', $(this).parent()).size() == 1) {
						header.hide();
					}
				}
			});
			event.preventDefault();
		});
		// set tooltip
		$('#wm-toolbar a[title]').qtip({
			position : {
				my : 'left center',
				at : 'right center'
			}
		});
	};
	Drupal.wmToolbar.scroll = function(toolbar) {
		$('#wm-toolbar').css('height', $(window).height());
		$('.scroll-pane').css('height', ($(window).height() - $('.non-scroll-pane').height() - $('.wm-toggle').height()));
		$('.scroll-pane').jScrollPane();
	};
	/**
	 * Toggle the toolbar open or closed.
	 */
	Drupal.wmToolbar.toggle = function(toolbar) {
		var size = '30px';
		if($(document.body).is('.wm-expanded')) {
			$('div.wm-blocks', toolbar).animate({
				width : size
			}, 'fast');
			$(document.body).animate({
				marginLeft : size
			}, 'fast', function() {
				$(this).toggleClass('wm-expanded');
				$(this).toggleClass('wm-collapsed');
			});
			this.setState('expanded', 0);
		} else {
			size = this.SIZE + 'px';
			$('div.wm-blocks', toolbar).animate({
				width : size
			}, 'fast');
			$(document.body).animate({
				marginLeft : size
			}, 'fast', function() {
				$(this).toggleClass('wm-expanded');
				$(this).toggleClass('wm-collapsed');
			});
			
			// set scroller width
			$('.scroll-pane').width(size);
			$('.jspContainer').width(size);
			$('.jspPane').width(size);
			
			if($(document.body).hasClass('wm-ah')) {
				this.setState('expanded', 0);
			} else {
				this.setState('expanded', 1);
			}
		}
	};
	/**
	 * Get the value of a cookie variable.
	 */
	Drupal.wmToolbar.getState = function(key) {
		if(!Drupal.wmToolbar.state) {
			Drupal.wmToolbar.state = {};
			var cookie = $.cookie('DrupalWmToolbar');
			var query = cookie ? cookie.split('&') : [];
			if(query) {
				for(var i in query) {
					// Extra check to avoid js errors in Chrome, IE and Safari when
					// combined with JS like twitter's widget.js.
					// See http://drupal.org/node/798764.
					if( typeof (query[i]) == 'string' && query[i].indexOf('=') != -1) {
						var values = query[i].split('=');
						if(values.length === 2) {
							Drupal.wmToolbar.state[values[0]] = values[1];
						}
					}
				}
			}
		}
		return Drupal.wmToolbar.state[key] ? Drupal.wmToolbar.state[key] : false;
	};
	/**
	 * Set the value of a cookie variable.
	 */
	Drupal.wmToolbar.setState = function(key, value) {
		var existing = Drupal.wmToolbar.getState(key);
		if(existing != value) {
			Drupal.wmToolbar.state[key] = value;
			var query = [];
			for(var i in Drupal.wmToolbar.state) {
				query.push(i + '=' + Drupal.wmToolbar.state[i]);
			}
			$.cookie('DrupalWmToolbar', query.join('&'), {
				expires : 7,
				path : '/'
			});
		}
	};
})(jQuery);

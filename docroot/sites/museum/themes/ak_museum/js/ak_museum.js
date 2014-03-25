(function ($) {

  Drupal.behaviors.ak_museum_article_page = {
    attach: function(context, settings) {
      
      if ($('body.node-type-article', context).length) {
        if (!$('body.node-type-article #block-system-main .panel-col-top img', context).length) {
          $('body.node-type-article #block-system-main', context).addClass('no-main-image');
        }
      }
      
    }
  }

  Drupal.behaviors.ak_museum_sitewide_menu = {
    attach: function(context, settings) {
      $("#region-menu #block-menu-block-3 ul.menu li").each(function() {
        var mlid;

        $(this).hoverIntent({
          sensitivity: 7,
          hover: 200,
          timeout: 0,
          over: function() {
            if (!$(this).children("a").hasClass("hover")) {
              $(this).children("a").addClass("hover");
            }
            var classes = $(this).attr("class").split(" ");
            for (i = 0; i < classes.length; i++) {
              if (classes[i].search(/menu-mlid/) != -1) {
                mlid = classes[i];
                break;
              }
            }
            mlid = mlid.substr(5);

            // If a submenu exists for the menu you're hovering on, we need to show it.
            if ($("#region-menu .block-menu-block .content .parent-"+mlid).length > 0) {
              // If a submenu is already expanded, hide it and show the new one
              if ($("#region-menu .block-menu-block .content .expanded").length > 0) {
                $("#region-menu .block-menu-block .content .expanded").removeClass('expanded').hide();
                $("#region-menu .block-menu-block .content .parent-"+mlid).addClass('expanded').show();
              } else {
                // A submenu isn't already expanded, so slide the new one down.
                $("#region-menu .block-menu-block .content .parent-"+mlid).slideDown(400);
                $("#region-menu .block-menu-block .content .parent-"+mlid).addClass('expanded');
              }
            } else {
              // A submenu doesn't exist for our new link so we'll just slide up
              // the existing expanded menu if one exists.
              if ($("#region-menu .block-menu-block .content .expanded").length > 0) {
                $("#region-menu .block-menu-block .content .expanded").removeClass('expanded').slideUp(400);
              }
            }

            // Hover handler for expanded menu to add a 'hovering' class when you're hovering on it.
            // this class is used in the 'out' function for the top menu link.
            $("#region-menu .block-menu-block .content .parent-"+mlid).hover(
              function() {
                $(this).addClass("hovering");
              },
              function() {
                $("#region-menu #block-menu-block-3 ul.menu li a.hover").removeClass("hover");
                $(this).removeClass("hovering");
              });
          } ,
          out: function() {
            if (!$("#region-menu .block-menu-block .content .parent-"+mlid).hasClass('hovering')) {
              $(this).children("a").removeClass("hover");
            }
          }
        });
      });

      // Hover handler for the menu region. Adds an 'expanded' class on in,
      // removes class and slides up any showing submenus on out.
      $("#region-menu").hover(
        function() {
          $(this).addClass('expanded');
        },
        function() {
          $("#region-menu .block-menu-block .content .expanded").removeClass('expanded').slideUp(400);
          $(this).removeClass('expanded');
      });
    }
  }


  Drupal.behaviors.ak_museum_infield = {
    attach: function (context, settings) {
      $("#block-block-6 form label", context).inFieldLabels();
      $("#block-search-form form label", context).inFieldLabels();
      $(".view-collections form label", context).inFieldLabels();
    }
  };

  Drupal.behaviors.ak_museum_inline_body_image = {
    attach: function (context, settings) {


      $("body.node-type-article #block-system-main .field-name-body", context).append('<div class="field-name-inline-images"></div>');
      $("body.node-type-article #block-system-main .field-name-body .float-right", context).each(function() {
        $("body.node-type-article #block-system-main .field-name-inline-images", context).append(this);
      });
      $("body.node-type-article #block-system-main .field-name-body .float-left", context).each(function() {
        $("body.node-type-article #block-system-main .field-name-inline-images", context).append(this);
      });


      $(".field-name-body div img.media-element, .field-name-body div img.media-image").each(function(index) {
        var inline_image = $(this);
        //if (inline_image.length > 0) {
          var image_classes = inline_image.attr("class");
          var classes_array = image_classes.split(" ");
          for(i = 0; i < classes_array.length; i++){
            if(classes_array[i].search(/float/) != -1 || classes_array[i].search(/file-inline/) != -1) {
              // don't blow away existing classes on the parent div...
              inline_image.parent().attr("class", function(index, val) {
                if (val == undefined) {
                  return classes_array[i];
                } else {
                  return val + ' ' + classes_array[i];
                }
              });
            }
          }
        //}
      });
    }
  };

  Drupal.behaviors.ak_museum_artefact = {
    attach: function (context, settings) {
      // Change main artefact images on hover.

      if ($('.field-name-all-images img').length <= 1) {
        $('.field-name-all-images').hide();
      }

      $('.field-name-all-images img', context).hoverIntent({
        sensitivity: 7,
        interval: 200,
        timeout: 0,
        // all-images handlerIn
        over: function() {

          var thumbnail_image = $(this).attr('src');
          var large_image = thumbnail_image.replace('styles/featured_thumbnail', 'styles/collection_large');
          var orig_image = large_image.replace('styles/collection_large/public/', '');
          $('.field-name-main-image a', context).attr('href', orig_image);
          $('.field-name-main-image img', context).attr('src', large_image);

          // remove the 'rel' attribute from the main image
          // (to eliminate duplicates from the Colorbox slideshow)
          $('.field-name-main-image a').removeAttr('rel');
        },
        // all-images handlerOut
        out: function() {
          // put the 'rel' attribute back on the main image
          var relvalue = $(this).parent().attr('rel');
          $('.field-name-main-image a').attr('rel', relvalue);
        }
      });

      $('.field-name-main-image img', context).hover(
        // main-image handlerIn
        function() {
          // remove the 'rel' attribute on the matching thumbnail
          var large_image = $(this).attr('src');
          var orig_image = large_image.replace('styles/collection_large/public/', '');
          $('.field-name-all-images a', context).each(function(index) {
            if ($(this).attr('href') ==  orig_image) {
              $(this).removeAttr('rel');
            }
          });
        },
        // main-image handlerOut
        function() {
          // put the 'rel' attribute back on all thumbnails
          var relvalue = $('.field-name-main-image a').attr('rel');
          $('.field-name-all-images a', context).each(function(index) {
            $(this).attr('rel', relvalue);
          });
        }
      );
    }
  };

  Drupal.behaviors.ak_museum_front_slideshow = {
    attach: function(context, settings) {

      // Return if not on the front page.
      if ($('body.front').length <= 0) {
        return;
      }

      // Get the caption field for the front slideshow.
      var nav = $('.flex-control-nav');
      var x;

      // Callback for changing the position of the caption field so it always appears on the front page, even
      // if the image is too large.
      function slideshowTag() {
        //var headerHeight = $('#section-header').height();
        //$('body.front #region-content ul.slides .flexslider-views-slideshow-main-frame-row').each(function() {
          //var imageHeight = $('img', this).height();
          //var image = $('img', this);
          //var newImage = new Image();
          var current = $('.flex-control-nav .active').parent().index();
          var imageHeight = $('.flexslider ul li').eq(current).find('img').height();
          var headerHeight = $('#section-header').height();
          if (headerHeight + imageHeight >= $(window).height()) {
            $('.flexslider ul li').eq(current).find('.views-field-nothing').css('position', 'fixed');
            nav.css('position', 'fixed');
          }
          else {
            $('.flexslider ul li').eq(current).find('.views-field-nothing').css('position', 'absolute');
            nav.css('position', 'absolute');
          }
      //  });
      }

      // On resize, run the callback function.
      $(window).resize(function() {
        clearTimeout(x);
        x = setTimeout(function() {
          slideshowTag();
        }, 50);
      });

      // Run the callback function when the page loads.
      $(window).load(function() {
        slideshowTag();
      });
    }
  };

  Drupal.behaviors.ak_museum_royalslider = {
    attach: function (context, settings) {
      $(document, context)
        .ready(function () {

          var sliderInstance = $('#ak-gallery', context).royalSlider({
            autoScaleSlider: true, // false
            autoScaleSliderWidth: 960, // 800
            autoScaleSliderHeight: 700, // 400
            imageScaleMode: 'fit', // fit-if-smaller (fill, fit, none)
            imageAlignCenter: true, // true
            imageScalePadding: 4, // 4
            controlNavigation: 'thumbnails', // bullets (thumbnails, tabs)
            arrowsNav: true, // true
            arrowsNavAutoHide: false, // true
            arrowsNavHideOnTouch: false, // false
            slideSpacing: 8, // 8
            startSlideId: 0, // 0
            loop: false, // false
            loopRewind: false, // false
            randomizeSlides: false, // false
            numImagesToPreload: 4, // 4
            slidesOrientation: 'horizontal', // horizontal (vertical)
            transitionType: 'move', // move (fade)
            transitionSpeed: 600, // 600 (ms)
            easeInOut: 'easeInOutSine',
            easeOut: 'easeOutSine',
            controlsInside: false, // true
            navigateByClick: true, // true
            sliderDrag: true, // true
            sliderTouch: true, // true
            keyboardNavEnabled: true, // false
            fadeinLoadedSlide: true, // true
            allowCSS3: true, // true
            globalCaption: true, // true
            addActiveClass: false, // false
            minSlideOffset: 10, // 10
            autoHeight: false, // false
            slides: null, // null
            fullscreen: {
              enabled: true
              //nativeFS: true
            },

            thumbs: {
              //autoCenter: false, // true
              autoCenter: true,
              spacing: 14
            }

          }).data('royalSlider');

          if (sliderInstance) {

            // Power the full screen button.
            $('#akdn-gallery-prefix a', context).click(function() {
              $('#ak-gallery', context).royalSlider('enterFullscreen');
            });

            // Power the slide counter.
            $('#akdn-gallery-prefix .slide-counter .total-slides', context).html(sliderInstance.numSlides);
            sliderInstance.ev.on('rsAfterSlideChange', function() {
              $('#akdn-gallery-prefix .slide-counter .current-slide', context).html(sliderInstance.currSlideId + 1);
            });

            // Show the full screen button and slide counter.
            $('#akdn-gallery-prefix a,#akdn-gallery-prefix .slide-counter', context).show();

          }
        });
    }
  };

})(jQuery);

(function ($) {
  Drupal.behaviors.stanfordSoeHelperMagazine = {
    attach: function (context, settings) {
      $( window ).load(function() {
        var soeSocialPathToImages = '/sites/default/modules/stanford/stanford_soe_helper/modules/stanford_soe_helper_magazine/img';
        var soePath = location.pathname;
        var soeEnv = '';
        if (soePath.indexOf("jse-soe-new-") !== -1) {
          var parts = soePath.split("/");
          soeEnv = "/" + parts[1];
        }

        $('.group-s-social-and-print.field-group-div').prepend('<div class="widget-wrapper-linkedin"><a href="" class="share-linkedin"><img src="'+ location.protocol + '//' + location.host + soeEnv + soeSocialPathToImages + '/soe_linkedin_icon_blue.png"></a></div>');
        $('.group-s-social-and-print.field-group-div').prepend('<div class="widget-wrapper-twitter"><a href="" class="share-twitter"><img src="'+ location.protocol + '//' + location.host + soeEnv + soeSocialPathToImages + '/soe_twitter_icon_blue.png"></a></div>');
        $('.group-s-social-and-print.field-group-div').prepend('<div class="widget-wrapper-fb"><a href="" class="share-fb"><img src="'+ location.protocol + '//' + location.host + soeEnv + soeSocialPathToImages + '/soe_facebook_icon_blue.png"></a></div>');
        // Get the current URL
        var pathname = window.location,
          // Data
          shareTitle = $('div[property="dc:title"] h1').text(),
          shareSubtitle = $('.share-sub').text(),

          // URL's
          twurl = 'http://twitter.com/share?url='+encodeURI(pathname)+'&text='+shareTitle+' '+shareSubtitle,
          fburl = 'http://www.facebook.com/sharer.php?u='+pathname+'&display=popup',
          liurl = 'https://www.linkedin.com/shareArticle?mini=true&url='+pathname+'&title='+shareTitle+'&summary='+shareSubtitle;

        // add the URL's to anchors
        $('.share-fb').attr({
          'href' : fburl,
          'target' : '_blank'
        });
        $('.share-twitter').attr({
          'href' : twurl,
          'target' : '_blank'
        });
        $('.share-linkedin').attr({
          'href' : liurl,
          'target' : '_blank'
        });
      });
    }
  };
}(jQuery));
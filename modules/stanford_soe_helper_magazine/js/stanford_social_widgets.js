(function ($) {
  Drupal.behaviors.stanfordSoeHelperMagazine = {
    attach: function (context, settings) {
      $( window ).load(function() {

        var soeSocialPathToImages = '/sites/default/files';
        var pathArray = window.location.pathname.split('/');
        var soeEnv = '';
        var path = pathArray[1];

        //If the first part of the path isn't magazine, then it's on a sites 1.0 dev env.
        if (path.indexOf('magazine') === -1) {
          soeEnv = "/" + pathArray[1];
        }


        $('.group-s-social-and-print.field-group-div').prepend('<div class="widget-wrapper-linkedin"><a href="" class="share-linkedin"><img src="'+ location.protocol + '//' + location.host + soeEnv + soeSocialPathToImages + '/soe_linkedin_icon_blue.svg" alt="linkedin share"></a></div>');
        $('.group-s-social-and-print.field-group-div').prepend('<div class="widget-wrapper-twitter"><a href="" class="share-twitter"><img src="'+ location.protocol + '//' + location.host + soeEnv + soeSocialPathToImages + '/soe_twitter_icon_blue.svg" alt="twitter share"></a></div>');
        $('.group-s-social-and-print.field-group-div').prepend('<div class="widget-wrapper-fb"><a href="" class="share-fb"><img src="'+ location.protocol + '//' + location.host + soeEnv + soeSocialPathToImages + '/soe_facebook_icon_blue.svg" alt="facebook share"></a></div>');
        // Get the current URL
        var pathname = window.location,
          // Data
          shareTitle = $('div[property="dc:title"] h1').text(),
          shareSubtitle = $('.share-sub').text(),

          // URL's
          twurl = 'https://twitter.com/intent/tweet?url='+encodeURI(pathname)+'&text='+shareTitle+' '+shareSubtitle,
          fburl = 'http://www.facebook.com/sharer.php?u='+pathname+'&display=popup',
          liurl = 'https://www.linkedin.com/shareArticle?mini=true&url='+pathname+'&title='+shareTitle+'&summary='+shareSubtitle;

        // add the URL's to anchors
        $('.share-fb').attr({
          'href' : fburl
        });
        $('.share-twitter').attr({
          'href' : twurl
        });
        $('.share-linkedin').attr({
          'href' : liurl
        });
      });
    }
  };
}(jQuery));

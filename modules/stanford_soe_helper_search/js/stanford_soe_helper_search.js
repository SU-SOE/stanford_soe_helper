(function($) {
  $(document).ready(function() {
    $(window).on('load resize', function() {
      //Have some variables.
      var windowSize = $(window).width();
      var randi = $('#digital-magazine-menu .region-digital-magazine-menu .block-menu-block h2');
      var dm_search = $('#digital-magazine-menu .block-stanford-search-api');
      var dm_search_input = $('#digital-magazine-menu .block-stanford-search-api input[type="text"]');
      var searchCloseMarkup = '<div class="dm-search-close">| X</div>';

      if (windowSize < 768) {
        randi.html("Research <br>& Ideas");
        dm_search_input.attr("placeholder", "");
        var dm_height = $('#digital-magazine-menu').height();
        dm_search_input.on('focus', function() {
          dm_search_input.attr("placeholder", "Search");
          $('#digital-magazine-menu').addClass('soe-mobile-search-active');
          dm_search.css({
            'height': dm_height
          });
          if ($('.dm-search-close').length === 0) {
            dm_search.append(searchCloseMarkup);
          }
        });
        dm_search_input.blur(function() {
          $('#digital-magazine-menu').removeClass('soe-mobile-search-active');
          dm_search.css({
            'z-index': '',
            'height': 'auto'
          });
          $('.dm-search-close').remove();
        });
      }
      if (windowSize > 767) {
        randi.html("<a href='/magazine' >Research & Ideas</a>");
        dm_search_input.attr("placeholder", "Search");
        dm_search_input.unbind();
        $('#digital-magazine-menu').removeClass('soe-mobile-search-active');
        dm_search.css({
          'z-index': '',
          'height': 'auto'
        });
        $('.dm-search-close').remove();
      }
    });
  });
})(jQuery);

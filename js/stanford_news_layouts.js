(function ($) {
    Drupal.behaviors.jsinjector1 = {
        attach: function (context, settings) {
            $(".node-type-stanford-news-item .mc-content", context).removeClass("span12").addClass("span10 offset1");

        }
    };
}(jQuery));

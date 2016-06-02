(function ($) {
    Drupal.behaviors.stanford_soe_helper = {
        attach: function (context, settings) {
            $(".node-type-stanford-news-item .mc-content", context).removeClass("span12").addClass("span10 offset1");

        }
    };
}(jQuery));

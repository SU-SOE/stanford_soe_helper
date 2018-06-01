(function ($) {
  Drupal.behaviors.peopleSpotlightViews = {
    attach: function (context, settings) {

        function spotlightTransition() {
            if (document.getElementsByClassName("view-stanford-ppl-spot-3-v-card").length > 0) {
                var element = document.getElementById("main");
                element.classList.add("spotlight-transition");
                if (document.getElementsByClassName("spotlight").length >  0) {
                    element.classList.remove("spotlight");
                }
            }
        }


        function spotlight() {
            if (document.getElementsByClassName("view-stanford-ppl-spot-3-v-card").length > 0) {
                var element = document.getElementById("main");
                if (document.getElementsByClassName("spotlight-transition").length >  0) {
                    element.classList.remove("spotlight-transition");
                }
                element.classList.add("spotlight");
                document.removeEventListener("click", spotlight);

                // Add the listeners
                document.getElementById("edit-field-s-ppl-spot-affiliation-tid").addEventListener("blur", spotlight);
                document.getElementById("edit-field-s-ppl-spot-department-tid").addEventListener("blur", spotlight);
            }
        }

        //Let's kick this thing off...
        spotlight();

        $(document).ajaxStart(function() {
            spotlightTransition();
        });

    }
  };
}(jQuery));

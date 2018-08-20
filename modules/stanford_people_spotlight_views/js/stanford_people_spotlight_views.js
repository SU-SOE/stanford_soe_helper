(function ($) {
  Drupal.behaviors.peopleSpotlightViews = {
    attach: function (context, settings) {

        //Due to the exposed filters, this creates a transition after selection.
        function spotlightTransition() {
            if (document.getElementsByClassName("view-stanford-ppl-spot-3-v-card").length > 0) {
                var element = document.getElementById("main");
                element.classList.add("spotlight-transition");
                if (document.getElementsByClassName("spotlight").length >  0) {
                    element.classList.remove("spotlight");
                }
            }
        }

        //This function controls the transition.
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

        //Starts with a transition.
        spotlight();

        //Triggering a transition after a selection is made.
        $(document).ajaxStart(function() {
            spotlightTransition();
        });

    }
  };
}(jQuery));

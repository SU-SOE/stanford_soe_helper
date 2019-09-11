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
              var uri = window.location.toString();
              // We remove the page= from the url if it exists.
              var fixuri = uri.replace(/&?page=([^&]$|[^&]*)/i, "");

              spotlightTransition();

              // We load the new replace the url with the new fixed url.
              window.history.replaceState({}, document.title, fixuri);
        });

    }
  };
}(jQuery));

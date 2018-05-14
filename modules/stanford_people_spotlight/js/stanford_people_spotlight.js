function spotlightTransition() {
    if (document.getElementsByClassName("view-stanford-ppl-spot-3-v-card").length > 0) {
        var element = document.getElementById("main");
        element.classList.add("spotlight-transition");
        element.classList.remove("spotlight");
    }
}


function spotlight() {
    if (document.getElementsByClassName("view-stanford-ppl-spot-3-v-card").length > 0) {
        var element = document.getElementById("main");
        element.classList.remove("spotlight-transition");
        element.classList.add("spotlight");
        document.removeEventListener("click", spotlight);

        // Add the listeners
        document.getElementById("edit-field-s-ppl-spot-affiliation-tid").addEventListener("blur", spotlight);
        document.getElementById("edit-field-s-ppl-spot-department-tid").addEventListener("blur", spotlight);
    }
}

window.onload = function(){
    spotlight();
};


// Updates the spotlight transition when AJAX completes.
jQuery(document).ajaxComplete(function(event, xhr, settings) {

    // Is from our view?
    if (settings.data.indexOf( "view_name=stanford_ppl_spot_3_v_card") != -1) {
        spotlight();
    }
});


jQuery(document).ajaxStart(function() {
    spotlightTransition();
});

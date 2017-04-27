# [Stanford SoE Helper](https://github.com/SU-SWS/stanford_soe_helper)
##### Version: 7.x-1.x

Maintainers: [boznik](https://github.com/bosnik), [cjwest](https://github.com/cjwest), [josephgknox](https://github.com/josephgknox)  

Changelog: [Changelog.txt](CHANGELOG.txt)

Description
---

The Stanford SoE Helper module provides the custom code for the SoE school site.


Sub Modules
---
**[Stanford SoE Helper Event](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_event/)**
This module provides custom functionality for events.

**[Stanford SoE Helper_Homepage](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_homepage/)**
This module provides custom functionality for the SoE Homepage.

**[Stanford SoE Helper Landing_Page](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_landing_page/)**
This module provides custom functionality for landing pages.

**[Stanford SoE Helper Magazine](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_magazine/)**
This module provides custom functionality for the Stanford Magazine. This includes:
- The newsletter sign-up block that appears on magazine pages
- The Stanford Taxonomy Term view - this view overwrites Drupal's default system for handling taxonomy terms.
- Setting site owner and editor permissions
- TBD - The view that re-writes the department vocabulary term links on magazine article 
pages to redirect to magazine/\<department/>

**[Stanford SoE Helper News](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_news/)**
This module provides custom functionality for news.

**[Stanford SoE Helper Page](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_page/)**
This module provides custom functionality for Stanford Pages.

**[Stanford SoE Helper Sitewide](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_sitewide/)**
This module provides custom functionality for sitewide functionality. 
This includes contexts and vocabulary including:
 - SoE Accent Color vocabulary
 

Accessibility
---
[![WCAG Conformance 2.0 AA Badge](https://www.w3.org/WAI/wcag2AA-blue.png)](https://www.w3.org/TR/WCAG20/)
Evaluation Date: 201X-XX-XX  
This module conforms to level AA WCAG 2.0 standards as required by the university's accessibility policy. For more information on the policy please visit: [https://ucomm.stanford.edu/policies/accessibility-policy.html](https://ucomm.stanford.edu/policies/accessibility-policy.html).

Installation
---

Install this module like any other module. [See Drupal Documentation](https://drupal.org/documentation/install/modules-themes/modules-7)

Configuration
---

If using the Pingdom cache clear functionality in `stanford_soe_helper_cc()`, you need to set a variable with the same value as the token you are setting in Pingdom:
```
drush vset stanford_soe_helper_pingdom_token <token_value>
```



Troubleshooting
---

If you are experiencing issues with this module try reverting the feature first. If you are still experiencing issues try posting an issue on the GitHub issues page.

Developer
---

If you wish to develop on this module you will most likely need to compile some new css. Please use the sass structure provided and compile with the sass compiler packaged in this module. To install:

```
npm install
grunt watch
 or
grunt devmode
```

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)

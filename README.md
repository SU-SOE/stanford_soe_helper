# [Stanford SoE Helper](https://github.com/SU-SWS/stanford_soe_helper)
##### Version: 7.x-2.0-alpha1 

Maintainers: [boznik](https://github.com/bosnik), [cjwest](https://github.com/cjwest), [josephgknox](https://github.com/josephgknox)  

Changelog: [Changelog.txt](CHANGELOG.txt)

Description
---

The Stanford SoE Helper module provides the custom code for the SoE school site.


Sub Modules
---

**[Stanford People Spotlight](https://github.com/SU-SWS/stanford_soe_helper/stanford_people_spotlight)**
This module provides the _People Spotlight_ content type.

- Nodes path is at: /spotlight/<title>

**[Stanford People Spotlight Administration](https://github.com/SU-SWS/stanford_soe_helper/stanford_people_spotlight_adminstration)**
This module provides manage content for _People Spotlight_ content types.

**[Stanford People Spotlight Layouts](https://github.com/SU-SWS/stanford_soe_helper/stanford_people_spotlight_layouts)**
This module provides the context and layouts for _People Spotlight_.

**[Stanford People Spotlight Views](https://github.com/SU-SWS/stanford_soe_helper/stanford_people_spotlight_views)**
This module provides views for _People Spotlight_.


Views Pages:

- All spotlights view at /spotlight
- Student spotlights view at /spotlight/students
- Faculty spotlights view at /spotlight/faculty

***Stanford People Spotlight: 1, Vertical, Span4, Card***
Display: Block.
This randomly selects Stanford People Spotlight nodes, displays 1, and uses span4 and Large Square image style			

***Stanford People Spotlight: 1, Vertical, Span6, Card***
Display: Block.
This randomly selects Stanford People Spotlight nodes, displays 1, and uses span6 and Large Square image style			

***Stanford People Spotlight: 2, Vertical, Span4, Card***
Display: Block.
This randomly selects Stanford People Spotlight nodes, displays 2, and uses span4 and Large Square image style			

***Stanford People Spotlight: 2, Vertical, Span6, Card***
Display: Block.
This randomly selects Stanford People Spotlight nodes, displays 2, and uses span6 and Large Square image style			

***Stanford People Spotlight: 3, Vertical, Card***
Displays: Block, Page - /spotlight.
This randomly selects Stanford People Spotlight nodes, displays 1, and uses span4 and Large Square image style			

***Stanford People Spotlight: FW Banner - No Quote***
Display: Block.
This uses square image size 370x370			

***Stanford People Spotlight: FW Banner - Quote***
Display: Block
This uses square image size 370x370			

***Stanford People Spotlight: Horizontal Card***
Display: Block
This randomly selects Stanford People Spotlight nodes and uses Large Square image style


**[Stanford SoE Helper Bean Types](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_bean_types/)**
This module provides custom functionality for bean types.

**[Stanford SoE Helper Event](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_event/)**
This module provides custom functionality for events.

**[Stanford SoE Helper_Homepage](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_homepage/)**
This module provides custom functionality for the SoE Homepage.

**[Stanford SoE Helper Landing_Page](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_landing_page/)**
This module provides custom functionality for landing pages.

**[Stanford SoE Helper Magazine Views](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_mag_views/)**
This module provides custom magazine views that use template (tpl.php) files. 

**[Stanford SoE Helper Magazine](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_magazine/)**
This module provides custom functionality for the Stanford Magazine. This includes:
- The newsletter sign-up block that appears on magazine pages
- Custom blocks that link to the all articles and all issues pages.
- The Stanford Taxonomy Term view - this view overwrites Drupal's default system for handling taxonomy terms.
- Some site owner and editor permissions

This module uses the _stanford_department_ taxonomy. This taxonomy is defined in the 
[stanford_news_extras](https://github.com/SU-SWS/stanford_news/stanford_news_extras) module.

**[Stanford SoE Helper News](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_news/)**
This module provides custom functionality for news.

**[Stanford SoE Helper Page](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_page/)**
This module provides custom functionality for Stanford Pages.

**[Stanford SoE Helper Sitewide](https://github.com/SU-SWS/stanford_soe_helper/stanford_soe_helper_sitewide/)**
This module provides custom functionality for sitewide functionality. 
This includes contexts and vocabulary including:
 - SoE Accent Color vocabulary
 - Stanford SoE Intranet Link block
 

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

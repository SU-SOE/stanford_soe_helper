#[Stanford SOE Helper](https://github.com/SU-SOE/stanford_soe_helper)
##### Version: 7.x-1.x

Maintainers: [boznik](https://github.com/boznik),  [cjwest](https://github.com/cjwest), [josephgknox](https://github.com/josephgknox)

[Changelog.txt](CHANGELOG.txt)

The Stanford SOE Helper module is used to make modifications to JSE SOE sites.


Sub Modules
---

**[Stanford SoE Helper Homepage]()**
This module provides specific functionality for SoE site homepage.

**[Stanford SoE Helper News]()**
This module provides specific functionality for SoE site news pages.

**[Stanford SoE Helper Sitewide]()**
This module provides sitewide functionality specific for SoE site.

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

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)

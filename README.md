AKMI
====

Repository for the AKDN projects.

AKDN is hosted on an Acquia Managed Cloud instance. It's a single multi-site structure, with all the pros and cons that come with that. Caution is key. If you have any questions, ask the project lead.

Current Projects
----------------

* *Museum*: the Aga Khan Museum project. Work done in sites/museum/
* *Phase 1*: the AKDN.org project. Work done in sites/default/
* *Architecture*: The Aga Khan Award for Architecture subsite. Work done in sites/architecture/

Use pull requests and feature branches, as per our git-flow workflow. Ask if you need assistance.

settings.local.php
------------------

Given the multisite installation, combined with Acquia's and AKDN's unique setup requirements, any local configuration will be confined to a new file you need to create in sites/[project] called settings.local.php (a template, default.settings.local.php, already exists in the sites folder). This file will have your database connection info and any other settings you normally put in settings.php. This file will set you up locally to use that project's database; additionally, it will make the site use the 'akdnusers' database (which is shared across multiple AKDN sites), which holds the 'users', 'session', and 'authmap' tables.

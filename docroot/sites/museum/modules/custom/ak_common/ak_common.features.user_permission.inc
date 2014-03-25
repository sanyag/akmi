<?php
/**
 * @file
 * ak_common.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ak_common_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'views',
  );

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'webform',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
      5 => 'anonymous user',
      6 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'devel',
  );

  // Exported permission: access epostcard.
  $permissions['access epostcard'] = array(
    'name' => 'access epostcard',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: access forward.
  $permissions['access forward'] = array(
    'name' => 'access forward',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: access media backend.
  $permissions['access media backend'] = array(
    'name' => 'access media backend',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: access mollom statistics.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'mollom',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'workbench',
  );

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'ds',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer addthis.
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'addthis',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'block',
  );

  // Exported permission: administer brightcove settings.
  $permissions['administer brightcove settings'] = array(
    'name' => 'administer brightcove settings',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: administer corresponding node references settings.
  $permissions['administer corresponding node references settings'] = array(
    'name' => 'administer corresponding node references settings',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'corresponding_node_references',
  );

  // Exported permission: administer custom breadcrumbs.
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: administer delta blocks.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: administer dependencies.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: administer entity translation.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer file types.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer flexslider.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: administer forward.
  $permissions['administer forward'] = array(
    'name' => 'administer forward',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'image',
  );

  // Exported permission: administer imagecrop.
  $permissions['administer imagecrop'] = array(
    'name' => 'administer imagecrop',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer mailchimp.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: administer mailchimp campaigns.
  $permissions['administer mailchimp campaigns'] = array(
    'name' => 'administer mailchimp campaigns',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'mailchimp_campaign',
  );

  // Exported permission: administer media folders.
  $permissions['administer media folders'] = array(
    'name' => 'administer media folders',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer microdata.
  $permissions['administer microdata'] = array(
    'name' => 'administer microdata',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'microdata',
  );

  // Exported permission: administer mini panels.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer mollom.
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'mollom',
  );

  // Exported permission: administer nodequeue.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panel-nodes.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'views',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench moderation.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: administer xmlsitemap.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: browse videos.
  $permissions['browse videos'] = array(
    'name' => 'browse videos',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: bypass mollom protection.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'authenticated user',
    ),
    'module' => 'mollom',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: bypass workbench moderation.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: create artefact content.
  $permissions['create artefact content'] = array(
    'name' => 'create artefact content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create blog content.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create blog_entry content.
  $permissions['create blog_entry content'] = array(
    'name' => 'create blog_entry content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create did_you_know content.
  $permissions['create did_you_know content'] = array(
    'name' => 'create did_you_know content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create exhibit content.
  $permissions['create exhibit content'] = array(
    'name' => 'create exhibit content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create featured_content content.
  $permissions['create featured_content content'] = array(
    'name' => 'create featured_content content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: create gallery content.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create hub_page content.
  $permissions['create hub_page content'] = array(
    'name' => 'create hub_page content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create layout_page content.
  $permissions['create layout_page content'] = array(
    'name' => 'create layout_page content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create mini panels.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel content.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel-nodes.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: create publication content.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create speech content.
  $permissions['create speech content'] = array(
    'name' => 'create speech content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'path',
  );

  // Exported permission: create video_article content.
  $permissions['create video_article content'] = array(
    'name' => 'create video_article content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: crop any image.
  $permissions['crop any image'] = array(
    'name' => 'crop any image',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: crop own images.
  $permissions['crop own images'] = array(
    'name' => 'crop own images',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete any artefact content.
  $permissions['delete any artefact content'] = array(
    'name' => 'delete any artefact content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog content.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog_entry content.
  $permissions['delete any blog_entry content'] = array(
    'name' => 'delete any blog_entry content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any did_you_know content.
  $permissions['delete any did_you_know content'] = array(
    'name' => 'delete any did_you_know content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any exhibit content.
  $permissions['delete any exhibit content'] = array(
    'name' => 'delete any exhibit content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured_content content.
  $permissions['delete any featured_content content'] = array(
    'name' => 'delete any featured_content content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any files.
  $permissions['delete any files'] = array(
    'name' => 'delete any files',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any gallery content.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any hub_page content.
  $permissions['delete any hub_page content'] = array(
    'name' => 'delete any hub_page content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any layout_page content.
  $permissions['delete any layout_page content'] = array(
    'name' => 'delete any layout_page content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel content.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel-nodes.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete any publication content.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any speech content.
  $permissions['delete any speech content'] = array(
    'name' => 'delete any speech content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any video_article content.
  $permissions['delete any video_article content'] = array(
    'name' => 'delete any video_article content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete own artefact content.
  $permissions['delete own artefact content'] = array(
    'name' => 'delete own artefact content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog content.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog_entry content.
  $permissions['delete own blog_entry content'] = array(
    'name' => 'delete own blog_entry content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own did_you_know content.
  $permissions['delete own did_you_know content'] = array(
    'name' => 'delete own did_you_know content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own exhibit content.
  $permissions['delete own exhibit content'] = array(
    'name' => 'delete own exhibit content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured_content content.
  $permissions['delete own featured_content content'] = array(
    'name' => 'delete own featured_content content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own files.
  $permissions['delete own files'] = array(
    'name' => 'delete own files',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own gallery content.
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own hub_page content.
  $permissions['delete own hub_page content'] = array(
    'name' => 'delete own hub_page content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own layout_page content.
  $permissions['delete own layout_page content'] = array(
    'name' => 'delete own layout_page content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel content.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel-nodes.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete own publication content.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own speech content.
  $permissions['delete own speech content'] = array(
    'name' => 'delete own speech content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own video_article content.
  $permissions['delete own video_article content'] = array(
    'name' => 'delete own video_article content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 10.
  $permissions['delete terms in 10'] = array(
    'name' => 'delete terms in 10',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 11.
  $permissions['delete terms in 11'] = array(
    'name' => 'delete terms in 11',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 12.
  $permissions['delete terms in 12'] = array(
    'name' => 'delete terms in 12',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 8.
  $permissions['delete terms in 8'] = array(
    'name' => 'delete terms in 8',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 9.
  $permissions['delete terms in 9'] = array(
    'name' => 'delete terms in 9',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: download files.
  $permissions['download files'] = array(
    'name' => 'download files',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit any artefact content.
  $permissions['edit any artefact content'] = array(
    'name' => 'edit any artefact content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blog content.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blog_entry content.
  $permissions['edit any blog_entry content'] = array(
    'name' => 'edit any blog_entry content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any did_you_know content.
  $permissions['edit any did_you_know content'] = array(
    'name' => 'edit any did_you_know content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any exhibit content.
  $permissions['edit any exhibit content'] = array(
    'name' => 'edit any exhibit content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured_content content.
  $permissions['edit any featured_content content'] = array(
    'name' => 'edit any featured_content content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any files.
  $permissions['edit any files'] = array(
    'name' => 'edit any files',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any gallery content.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any hub_page content.
  $permissions['edit any hub_page content'] = array(
    'name' => 'edit any hub_page content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any layout_page content.
  $permissions['edit any layout_page content'] = array(
    'name' => 'edit any layout_page content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel content.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel-nodes.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit any publication content.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any speech content.
  $permissions['edit any speech content'] = array(
    'name' => 'edit any speech content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any video_article content.
  $permissions['edit any video_article content'] = array(
    'name' => 'edit any video_article content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit own artefact content.
  $permissions['edit own artefact content'] = array(
    'name' => 'edit own artefact content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog content.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog_entry content.
  $permissions['edit own blog_entry content'] = array(
    'name' => 'edit own blog_entry content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own did_you_know content.
  $permissions['edit own did_you_know content'] = array(
    'name' => 'edit own did_you_know content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own exhibit content.
  $permissions['edit own exhibit content'] = array(
    'name' => 'edit own exhibit content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured_content content.
  $permissions['edit own featured_content content'] = array(
    'name' => 'edit own featured_content content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own files.
  $permissions['edit own files'] = array(
    'name' => 'edit own files',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own gallery content.
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own hub_page content.
  $permissions['edit own hub_page content'] = array(
    'name' => 'edit own hub_page content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own layout_page content.
  $permissions['edit own layout_page content'] = array(
    'name' => 'edit own layout_page content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel content.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel-nodes.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit own publication content.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own speech content.
  $permissions['edit own speech content'] = array(
    'name' => 'edit own speech content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own video_article content.
  $permissions['edit own video_article content'] = array(
    'name' => 'edit own video_article content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 10.
  $permissions['edit terms in 10'] = array(
    'name' => 'edit terms in 10',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 11.
  $permissions['edit terms in 11'] = array(
    'name' => 'edit terms in 11',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 12.
  $permissions['edit terms in 12'] = array(
    'name' => 'edit terms in 12',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 8.
  $permissions['edit terms in 8'] = array(
    'name' => 'edit terms in 8',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 9.
  $permissions['edit terms in 9'] = array(
    'name' => 'edit terms in 9',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'devel',
  );

  // Exported permission: filter media.
  $permissions['filter media'] = array(
    'name' => 'filter media',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: manipulate all queues.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate queues.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: media grid view.
  $permissions['media grid view'] = array(
    'name' => 'media grid view',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: media list view.
  $permissions['media list view'] = array(
    'name' => 'media list view',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: moderate content from draft to needs_review.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_publication to needs_review.
  $permissions['moderate content from needs_publication to needs_review'] = array(
    'name' => 'moderate content from needs_publication to needs_review',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_publication to published.
  $permissions['moderate content from needs_publication to published'] = array(
    'name' => 'moderate content from needs_publication to published',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to draft.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to needs_publication.
  $permissions['moderate content from needs_review to needs_publication'] = array(
    'name' => 'moderate content from needs_review to needs_publication',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from published to needs_review.
  $permissions['moderate content from published to needs_review'] = array(
    'name' => 'moderate content from published to needs_review',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: override email address.
  $permissions['override email address'] = array(
    'name' => 'override email address',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: override flood control.
  $permissions['override flood control'] = array(
    'name' => 'override flood control',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: preview media.
  $permissions['preview media'] = array(
    'name' => 'preview media',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'devel',
  );

  // Exported permission: toggle field translatability.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate any entity.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate file entities.
  $permissions['translate file entities'] = array(
    'name' => 'translate file entities',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate node entities.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate rules_config entities.
  $permissions['translate rules_config entities'] = array(
    'name' => 'translate rules_config entities',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate taxonomy_term entities.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate user entities.
  $permissions['translate user entities'] = array(
    'name' => 'translate user entities',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: upload media.
  $permissions['upload media'] = array(
    'name' => 'upload media',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: upload videos.
  $permissions['upload videos'] = array(
    'name' => 'upload videos',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: use PHP for settings.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'php',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'search',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use php in custom breadcrumbs.
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: use text format ds_code.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format mailchimp_campaign.
  $permissions['use text format mailchimp_campaign'] = array(
    'name' => 'use text format mailchimp_campaign',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use workbench_moderation my drafts tab.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation publications tab.
  $permissions['use workbench_moderation publications tab'] = array(
    'name' => 'use workbench_moderation publications tab',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'akm_extras',
  );

  // Exported permission: view addthis.
  $permissions['view addthis'] = array(
    'name' => 'view addthis',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'addthis',
  );

  // Exported permission: view all unpublished content.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'Super Admin',
      3 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      0 => 'Super Admin',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view moderation history.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      0 => 'Publisher',
      1 => 'Super Admin',
      2 => 'Superuser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'Super Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'Publisher',
      3 => 'Super Admin',
      4 => 'Superuser',
    ),
    'module' => 'system',
  );

  return $permissions;
}

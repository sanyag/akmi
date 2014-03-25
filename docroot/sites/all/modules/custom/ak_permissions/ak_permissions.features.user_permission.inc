<?php
/**
 * @file
 * ak_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ak_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access PDF version.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'views',
  );

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'devel',
  );

  // Exported permission: access epostcard.
  $permissions['access epostcard'] = array(
    'name' => 'access epostcard',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: access forward.
  $permissions['access forward'] = array(
    'name' => 'access forward',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'super admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: access media backend.
  $permissions['access media backend'] = array(
    'name' => 'access media backend',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: access print.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'print',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: access send by email.
  $permissions['access send by email'] = array(
    'name' => 'access send by email',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'workbench',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'ds',
  );

  // Exported permission: administer NAT configuration.
  $permissions['administer NAT configuration'] = array(
    'name' => 'administer NAT configuration',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'nat',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer addthis.
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'addthis',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer bean types.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: administer beans.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'block',
  );

  // Exported permission: administer brightcove settings.
  $permissions['administer brightcove settings'] = array(
    'name' => 'administer brightcove settings',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: administer checked out documents.
  $permissions['administer checked out documents'] = array(
    'name' => 'administer checked out documents',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'content_lock',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: administer corresponding node references settings.
  $permissions['administer corresponding node references settings'] = array(
    'name' => 'administer corresponding node references settings',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'corresponding_node_references',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: administer delta blocks.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: administer dependencies.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: administer entity translation.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: administer facets.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer flexslider.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: administer flickr settings.
  $permissions['administer flickr settings'] = array(
    'name' => 'administer flickr settings',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'flickrgallery',
  );

  // Exported permission: administer forward.
  $permissions['administer forward'] = array(
    'name' => 'administer forward',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'image',
  );

  // Exported permission: administer imagecrop.
  $permissions['administer imagecrop'] = array(
    'name' => 'administer imagecrop',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer media folders.
  $permissions['administer media folders'] = array(
    'name' => 'administer media folders',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer mini panels.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodequeue.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer print.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'print',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer save and edit.
  $permissions['administer save and edit'] = array(
    'name' => 'administer save and edit',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'save_edit',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'search',
  );

  // Exported permission: administer services.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'services',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'views',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench moderation.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'system',
  );

  // Exported permission: browse videos.
  $permissions['browse videos'] = array(
    'name' => 'browse videos',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: bypass workbench moderation.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: check out documents.
  $permissions['check out documents'] = array(
    'name' => 'check out documents',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'content_lock',
  );

  // Exported permission: create agency content.
  $permissions['create agency content'] = array(
    'name' => 'create agency content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create any link_block bean.
  $permissions['create any link_block bean'] = array(
    'name' => 'create any link_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: create any twitter_pull bean.
  $permissions['create any twitter_pull bean'] = array(
    'name' => 'create any twitter_pull bean',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: create featured_content content.
  $permissions['create featured_content content'] = array(
    'name' => 'create featured_content content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create focus_area content.
  $permissions['create focus_area content'] = array(
    'name' => 'create focus_area content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create gallery content.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create geography content.
  $permissions['create geography content'] = array(
    'name' => 'create geography content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create hub_page content.
  $permissions['create hub_page content'] = array(
    'name' => 'create hub_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create mini panels.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create person content.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create podcast content.
  $permissions['create podcast content'] = array(
    'name' => 'create podcast content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create project content.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create publication content.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create speech content.
  $permissions['create speech content'] = array(
    'name' => 'create speech content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create speech_quote content.
  $permissions['create speech_quote content'] = array(
    'name' => 'create speech_quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create speech_theme content.
  $permissions['create speech_theme content'] = array(
    'name' => 'create speech_theme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'Editor',
      1 => 'content author',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'path',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: crop any image.
  $permissions['crop any image'] = array(
    'name' => 'crop any image',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: crop own images.
  $permissions['crop own images'] = array(
    'name' => 'crop own images',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete any agency content.
  $permissions['delete any agency content'] = array(
    'name' => 'delete any agency content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured_content content.
  $permissions['delete any featured_content content'] = array(
    'name' => 'delete any featured_content content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any focus_area content.
  $permissions['delete any focus_area content'] = array(
    'name' => 'delete any focus_area content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any gallery content.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any geography content.
  $permissions['delete any geography content'] = array(
    'name' => 'delete any geography content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any hub_page content.
  $permissions['delete any hub_page content'] = array(
    'name' => 'delete any hub_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any link_block bean.
  $permissions['delete any link_block bean'] = array(
    'name' => 'delete any link_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any person content.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any podcast content.
  $permissions['delete any podcast content'] = array(
    'name' => 'delete any podcast content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any project content.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any publication content.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any speech content.
  $permissions['delete any speech content'] = array(
    'name' => 'delete any speech content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any speech_quote content.
  $permissions['delete any speech_quote content'] = array(
    'name' => 'delete any speech_quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any speech_theme content.
  $permissions['delete any speech_theme content'] = array(
    'name' => 'delete any speech_theme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any twitter_pull bean.
  $permissions['delete any twitter_pull bean'] = array(
    'name' => 'delete any twitter_pull bean',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete own agency content.
  $permissions['delete own agency content'] = array(
    'name' => 'delete own agency content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured_content content.
  $permissions['delete own featured_content content'] = array(
    'name' => 'delete own featured_content content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own focus_area content.
  $permissions['delete own focus_area content'] = array(
    'name' => 'delete own focus_area content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own gallery content.
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own geography content.
  $permissions['delete own geography content'] = array(
    'name' => 'delete own geography content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own hub_page content.
  $permissions['delete own hub_page content'] = array(
    'name' => 'delete own hub_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own person content.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own podcast content.
  $permissions['delete own podcast content'] = array(
    'name' => 'delete own podcast content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own project content.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own publication content.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own speech content.
  $permissions['delete own speech content'] = array(
    'name' => 'delete own speech content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own speech_quote content.
  $permissions['delete own speech_quote content'] = array(
    'name' => 'delete own speech_quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own speech_theme content.
  $permissions['delete own speech_theme content'] = array(
    'name' => 'delete own speech_theme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'Publisher',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'Editor',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 11.
  $permissions['delete terms in 11'] = array(
    'name' => 'delete terms in 11',
    'roles' => array(
      0 => 'Editor',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 12.
  $permissions['delete terms in 12'] = array(
    'name' => 'delete terms in 12',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 13.
  $permissions['delete terms in 13'] = array(
    'name' => 'delete terms in 13',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 14.
  $permissions['delete terms in 14'] = array(
    'name' => 'delete terms in 14',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 15.
  $permissions['delete terms in 15'] = array(
    'name' => 'delete terms in 15',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 16.
  $permissions['delete terms in 16'] = array(
    'name' => 'delete terms in 16',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 8.
  $permissions['delete terms in 8'] = array(
    'name' => 'delete terms in 8',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 9.
  $permissions['delete terms in 9'] = array(
    'name' => 'delete terms in 9',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: download files.
  $permissions['download files'] = array(
    'name' => 'download files',
    'roles' => array(),
    'module' => 'media_browser_plus',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit any agency content.
  $permissions['edit any agency content'] = array(
    'name' => 'edit any agency content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured_content content.
  $permissions['edit any featured_content content'] = array(
    'name' => 'edit any featured_content content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any focus_area content.
  $permissions['edit any focus_area content'] = array(
    'name' => 'edit any focus_area content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any gallery content.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any geography content.
  $permissions['edit any geography content'] = array(
    'name' => 'edit any geography content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any hub_page content.
  $permissions['edit any hub_page content'] = array(
    'name' => 'edit any hub_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any link_block bean.
  $permissions['edit any link_block bean'] = array(
    'name' => 'edit any link_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any person content.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any podcast content.
  $permissions['edit any podcast content'] = array(
    'name' => 'edit any podcast content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any project content.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any publication content.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any speech content.
  $permissions['edit any speech content'] = array(
    'name' => 'edit any speech content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any speech_quote content.
  $permissions['edit any speech_quote content'] = array(
    'name' => 'edit any speech_quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any speech_theme content.
  $permissions['edit any speech_theme content'] = array(
    'name' => 'edit any speech_theme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any twitter_pull bean.
  $permissions['edit any twitter_pull bean'] = array(
    'name' => 'edit any twitter_pull bean',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit bean view mode.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit file.
  $permissions['edit file'] = array(
    'name' => 'edit file',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit own agency content.
  $permissions['edit own agency content'] = array(
    'name' => 'edit own agency content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured_content content.
  $permissions['edit own featured_content content'] = array(
    'name' => 'edit own featured_content content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own focus_area content.
  $permissions['edit own focus_area content'] = array(
    'name' => 'edit own focus_area content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own gallery content.
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own geography content.
  $permissions['edit own geography content'] = array(
    'name' => 'edit own geography content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own hub_page content.
  $permissions['edit own hub_page content'] = array(
    'name' => 'edit own hub_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own person content.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own podcast content.
  $permissions['edit own podcast content'] = array(
    'name' => 'edit own podcast content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own project content.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own publication content.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own speech content.
  $permissions['edit own speech content'] = array(
    'name' => 'edit own speech content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own speech_quote content.
  $permissions['edit own speech_quote content'] = array(
    'name' => 'edit own speech_quote content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own speech_theme content.
  $permissions['edit own speech_theme content'] = array(
    'name' => 'edit own speech_theme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 11.
  $permissions['edit terms in 11'] = array(
    'name' => 'edit terms in 11',
    'roles' => array(
      0 => 'Editor',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 12.
  $permissions['edit terms in 12'] = array(
    'name' => 'edit terms in 12',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 13.
  $permissions['edit terms in 13'] = array(
    'name' => 'edit terms in 13',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 14.
  $permissions['edit terms in 14'] = array(
    'name' => 'edit terms in 14',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 15.
  $permissions['edit terms in 15'] = array(
    'name' => 'edit terms in 15',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 16.
  $permissions['edit terms in 16'] = array(
    'name' => 'edit terms in 16',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 8.
  $permissions['edit terms in 8'] = array(
    'name' => 'edit terms in 8',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 9.
  $permissions['edit terms in 9'] = array(
    'name' => 'edit terms in 9',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'devel',
  );

  // Exported permission: filter media.
  $permissions['filter media'] = array(
    'name' => 'filter media',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: get a system variable.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'services',
  );

  // Exported permission: get any binary files.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'services',
  );

  // Exported permission: get own binary files.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'services',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'features',
  );

  // Exported permission: manipulate all queues.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate queues.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: media grid view.
  $permissions['media grid view'] = array(
    'name' => 'media grid view',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: media list view.
  $permissions['media list view'] = array(
    'name' => 'media list view',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: moderate content from archived to draft.
  $permissions['moderate content from archived to draft'] = array(
    'name' => 'moderate content from archived to draft',
    'roles' => array(
      0 => 'Publisher',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from draft to needs_review.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to draft.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to published.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      0 => 'Publisher',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from published to draft.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      0 => 'Publisher',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from published to needs_review.
  $permissions['moderate content from published to needs_review'] = array(
    'name' => 'moderate content from published to needs_review',
    'roles' => array(
      0 => 'Publisher',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: node-specific print configuration.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'print',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: override email address.
  $permissions['override email address'] = array(
    'name' => 'override email address',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: override flood control.
  $permissions['override flood control'] = array(
    'name' => 'override flood control',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'forward',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: perform unlimited index queries.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'services',
  );

  // Exported permission: preview media.
  $permissions['preview media'] = array(
    'name' => 'preview media',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Publisher',
      1 => 'site admin',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: save file information.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'services',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'user',
  );

  // Exported permission: send unlimited emails.
  $permissions['send unlimited emails'] = array(
    'name' => 'send unlimited emails',
    'roles' => array(),
    'module' => 'print_mail',
  );

  // Exported permission: set a system variable.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'services',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'devel',
  );

  // Exported permission: toggle field translatability.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate any entity.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate bean entities.
  $permissions['translate bean entities'] = array(
    'name' => 'translate bean entities',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate file entities.
  $permissions['translate file entities'] = array(
    'name' => 'translate file entities',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'site admin',
      1 => 'super admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate node entities.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate rules_config entities.
  $permissions['translate rules_config entities'] = array(
    'name' => 'translate rules_config entities',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate taxonomy_term entities.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: translate user entities.
  $permissions['translate user entities'] = array(
    'name' => 'translate user entities',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: upload media.
  $permissions['upload media'] = array(
    'name' => 'upload media',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: upload videos.
  $permissions['upload videos'] = array(
    'name' => 'upload videos',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: use PHP for settings.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'php',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'search',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use save and edit.
  $permissions['use save and edit'] = array(
    'name' => 'use save and edit',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'save_edit',
  );

  // Exported permission: use text format ds_code.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'content author',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use workbench_moderation my drafts tab.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view addthis.
  $permissions['view addthis'] = array(
    'name' => 'view addthis',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'addthis',
  );

  // Exported permission: view all unpublished content.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'site admin',
      3 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view any link_block bean.
  $permissions['view any link_block bean'] = array(
    'name' => 'view any link_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: view any twitter_pull bean.
  $permissions['view any twitter_pull bean'] = array(
    'name' => 'view any twitter_pull bean',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'super admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: view file.
  $permissions['view file'] = array(
    'name' => 'view file',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view moderation history.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'super admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: view photosets.
  $permissions['view photosets'] = array(
    'name' => 'view photosets',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'super admin',
    ),
    'module' => 'flickrgallery',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Editor',
      1 => 'Publisher',
      2 => 'content author',
      3 => 'site admin',
      4 => 'super admin',
    ),
    'module' => 'system',
  );

  return $permissions;
}

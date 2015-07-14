<?php
/**
 * @file
 * medinipur_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function medinipur_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'book',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'ADM' => 'ADM',
      'DM' => 'DM',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access users overview'.
  $permissions['access users overview'] = array(
    'name' => 'access users overview',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'access workbench access by role'.
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'BDO' => 'BDO',
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'admin node search exlusions'.
  $permissions['admin node search exlusions'] = array(
    'name' => 'admin node search exlusions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'administer accordion menu'.
  $permissions['administer accordion menu'] = array(
    'name' => 'administer accordion menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'accordion_menu',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer tb_megamenu'.
  $permissions['administer tb_megamenu'] = array(
    'name' => 'administer tb_megamenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tb_megamenu',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench access'.
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(),
    'module' => 'workbench_access',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'assign ADM role'.
  $permissions['assign ADM role'] = array(
    'name' => 'assign ADM role',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign BDO role'.
  $permissions['assign BDO role'] = array(
    'name' => 'assign BDO role',
    'roles' => array(
      'ADM' => 'ADM',
      'DM' => 'DM',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Content Uploaded role'.
  $permissions['assign Content Uploaded role'] = array(
    'name' => 'assign Content Uploaded role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign DM role'.
  $permissions['assign DM role'] = array(
    'name' => 'assign DM role',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign HO role'.
  $permissions['assign HO role'] = array(
    'name' => 'assign HO role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign OC role'.
  $permissions['assign OC role'] = array(
    'name' => 'assign OC role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign SDO role'.
  $permissions['assign SDO role'] = array(
    'name' => 'assign SDO role',
    'roles' => array(
      'ADM' => 'ADM',
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign _user_role_0 role'.
  $permissions['assign _user_role_0 role'] = array(
    'name' => 'assign _user_role_0 role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign _user_role_2 role'.
  $permissions['assign _user_role_2 role'] = array(
    'name' => 'assign _user_role_2 role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign workbench access'.
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(
      'DM' => 'DM',
      '_user_role_2' => '_user_role_2',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'batch update workbench access'.
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel users with role 11'.
  $permissions['cancel users with role 11'] = array(
    'name' => 'cancel users with role 11',
    'roles' => array(),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 12'.
  $permissions['cancel users with role 12'] = array(
    'name' => 'cancel users with role 12',
    'roles' => array(),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 13'.
  $permissions['cancel users with role 13'] = array(
    'name' => 'cancel users with role 13',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 2'.
  $permissions['cancel users with role 2'] = array(
    'name' => 'cancel users with role 2',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 4'.
  $permissions['cancel users with role 4'] = array(
    'name' => 'cancel users with role 4',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 5'.
  $permissions['cancel users with role 5'] = array(
    'name' => 'cancel users with role 5',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 6'.
  $permissions['cancel users with role 6'] = array(
    'name' => 'cancel users with role 6',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 7'.
  $permissions['cancel users with role 7'] = array(
    'name' => 'cancel users with role 7',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 8'.
  $permissions['cancel users with role 8'] = array(
    'name' => 'cancel users with role 8',
    'roles' => array(
      'DM' => 'DM',
      '_user_role_2' => '_user_role_2',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role 9'.
  $permissions['cancel users with role 9'] = array(
    'name' => 'cancel users with role 9',
    'roles' => array(
      'DM' => 'DM',
      '_user_role_2' => '_user_role_2',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear establishment_result feeds'.
  $permissions['clear establishment_result feeds'] = array(
    'name' => 'clear establishment_result feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'BDO' => 'BDO',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ask_for_report content'.
  $permissions['create ask_for_report content'] = array(
    'name' => 'create ask_for_report content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'OC' => 'OC',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create block_page content'.
  $permissions['create block_page content'] = array(
    'name' => 'create block_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'BDO' => 'BDO',
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create bulk photo nodes'.
  $permissions['create bulk photo nodes'] = array(
    'name' => 'create bulk photo nodes',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'Content Uploaded' => 'Content Uploaded',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'bulk_photo_nodes',
  );

  // Exported permission: 'create charges_history content'.
  $permissions['create charges_history content'] = array(
    'name' => 'create charges_history content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create collectorate_times content'.
  $permissions['create collectorate_times content'] = array(
    'name' => 'create collectorate_times content',
    'roles' => array(
      'BDO' => 'BDO',
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create collectorate_times_front_page content'.
  $permissions['create collectorate_times_front_page content'] = array(
    'name' => 'create collectorate_times_front_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create date_migrate_example content'.
  $permissions['create date_migrate_example content'] = array(
    'name' => 'create date_migrate_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create department_intro_page content'.
  $permissions['create department_intro_page content'] = array(
    'name' => 'create department_intro_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create feedback content'.
  $permissions['create feedback content'] = array(
    'name' => 'create feedback content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create feedback_reply content'.
  $permissions['create feedback_reply content'] = array(
    'name' => 'create feedback_reply content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create general_content content'.
  $permissions['create general_content content'] = array(
    'name' => 'create general_content content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create home_programms content'.
  $permissions['create home_programms content'] = array(
    'name' => 'create home_programms content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create image content'.
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'Content Uploaded' => 'Content Uploaded',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create image_gallery content'.
  $permissions['create image_gallery content'] = array(
    'name' => 'create image_gallery content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'Content Uploaded' => 'Content Uploaded',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create import_result content'.
  $permissions['create import_result content'] = array(
    'name' => 'create import_result content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create recent_post content'.
  $permissions['create recent_post content'] = array(
    'name' => 'create recent_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create report content'.
  $permissions['create report content'] = array(
    'name' => 'create report content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create result content'.
  $permissions['create result content'] = array(
    'name' => 'create result content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create share_doc content'.
  $permissions['create share_doc content'] = array(
    'name' => 'create share_doc content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sub_divisional_page content'.
  $permissions['create sub_divisional_page content'] = array(
    'name' => 'create sub_divisional_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create test_report content'.
  $permissions['create test_report content'] = array(
    'name' => 'create test_report content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create users'.
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ask_for_report content'.
  $permissions['delete any ask_for_report content'] = array(
    'name' => 'delete any ask_for_report content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any block_page content'.
  $permissions['delete any block_page content'] = array(
    'name' => 'delete any block_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any charges_history content'.
  $permissions['delete any charges_history content'] = array(
    'name' => 'delete any charges_history content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any collectorate_times content'.
  $permissions['delete any collectorate_times content'] = array(
    'name' => 'delete any collectorate_times content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any collectorate_times_front_page content'.
  $permissions['delete any collectorate_times_front_page content'] = array(
    'name' => 'delete any collectorate_times_front_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any date_migrate_example content'.
  $permissions['delete any date_migrate_example content'] = array(
    'name' => 'delete any date_migrate_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any department_intro_page content'.
  $permissions['delete any department_intro_page content'] = array(
    'name' => 'delete any department_intro_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any feedback content'.
  $permissions['delete any feedback content'] = array(
    'name' => 'delete any feedback content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any feedback_reply content'.
  $permissions['delete any feedback_reply content'] = array(
    'name' => 'delete any feedback_reply content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any general_content content'.
  $permissions['delete any general_content content'] = array(
    'name' => 'delete any general_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any home_programms content'.
  $permissions['delete any home_programms content'] = array(
    'name' => 'delete any home_programms content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any image content'.
  $permissions['delete any image content'] = array(
    'name' => 'delete any image content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image_gallery content'.
  $permissions['delete any image_gallery content'] = array(
    'name' => 'delete any image_gallery content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any import_result content'.
  $permissions['delete any import_result content'] = array(
    'name' => 'delete any import_result content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any recent_post content'.
  $permissions['delete any recent_post content'] = array(
    'name' => 'delete any recent_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any report content'.
  $permissions['delete any report content'] = array(
    'name' => 'delete any report content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any result content'.
  $permissions['delete any result content'] = array(
    'name' => 'delete any result content',
    'roles' => array(
      'DM' => 'DM',
      'HO' => 'HO',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any share_doc content'.
  $permissions['delete any share_doc content'] = array(
    'name' => 'delete any share_doc content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sub_divisional_page content'.
  $permissions['delete any sub_divisional_page content'] = array(
    'name' => 'delete any sub_divisional_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any test_report content'.
  $permissions['delete any test_report content'] = array(
    'name' => 'delete any test_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'BDO' => 'BDO',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ask_for_report content'.
  $permissions['delete own ask_for_report content'] = array(
    'name' => 'delete own ask_for_report content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'OC' => 'OC',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own block_page content'.
  $permissions['delete own block_page content'] = array(
    'name' => 'delete own block_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'BDO' => 'BDO',
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own charges_history content'.
  $permissions['delete own charges_history content'] = array(
    'name' => 'delete own charges_history content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own collectorate_times content'.
  $permissions['delete own collectorate_times content'] = array(
    'name' => 'delete own collectorate_times content',
    'roles' => array(
      'BDO' => 'BDO',
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own collectorate_times_front_page content'.
  $permissions['delete own collectorate_times_front_page content'] = array(
    'name' => 'delete own collectorate_times_front_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own date_migrate_example content'.
  $permissions['delete own date_migrate_example content'] = array(
    'name' => 'delete own date_migrate_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own department_intro_page content'.
  $permissions['delete own department_intro_page content'] = array(
    'name' => 'delete own department_intro_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own feedback content'.
  $permissions['delete own feedback content'] = array(
    'name' => 'delete own feedback content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own feedback_reply content'.
  $permissions['delete own feedback_reply content'] = array(
    'name' => 'delete own feedback_reply content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own general_content content'.
  $permissions['delete own general_content content'] = array(
    'name' => 'delete own general_content content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own home_programms content'.
  $permissions['delete own home_programms content'] = array(
    'name' => 'delete own home_programms content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own image content'.
  $permissions['delete own image content'] = array(
    'name' => 'delete own image content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'Content Uploaded' => 'Content Uploaded',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image_gallery content'.
  $permissions['delete own image_gallery content'] = array(
    'name' => 'delete own image_gallery content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'Content Uploaded' => 'Content Uploaded',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own import_result content'.
  $permissions['delete own import_result content'] = array(
    'name' => 'delete own import_result content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own recent_post content'.
  $permissions['delete own recent_post content'] = array(
    'name' => 'delete own recent_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own report content'.
  $permissions['delete own report content'] = array(
    'name' => 'delete own report content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own result content'.
  $permissions['delete own result content'] = array(
    'name' => 'delete own result content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own share_doc content'.
  $permissions['delete own share_doc content'] = array(
    'name' => 'delete own share_doc content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sub_divisional_page content'.
  $permissions['delete own sub_divisional_page content'] = array(
    'name' => 'delete own sub_divisional_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own test_report content'.
  $permissions['delete own test_report content'] = array(
    'name' => 'delete own test_report content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in department'.
  $permissions['delete terms in department'] = array(
    'name' => 'delete terms in department',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in district'.
  $permissions['delete terms in district'] = array(
    'name' => 'delete terms in district',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in exam'.
  $permissions['delete terms in exam'] = array(
    'name' => 'delete terms in exam',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in month'.
  $permissions['delete terms in month'] = array(
    'name' => 'delete terms in month',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in office'.
  $permissions['delete terms in office'] = array(
    'name' => 'delete terms in office',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in posts'.
  $permissions['delete terms in posts'] = array(
    'name' => 'delete terms in posts',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in year'.
  $permissions['delete terms in year'] = array(
    'name' => 'delete terms in year',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ask_for_report content'.
  $permissions['edit any ask_for_report content'] = array(
    'name' => 'edit any ask_for_report content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any block_page content'.
  $permissions['edit any block_page content'] = array(
    'name' => 'edit any block_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any charges_history content'.
  $permissions['edit any charges_history content'] = array(
    'name' => 'edit any charges_history content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any collectorate_times content'.
  $permissions['edit any collectorate_times content'] = array(
    'name' => 'edit any collectorate_times content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any collectorate_times_front_page content'.
  $permissions['edit any collectorate_times_front_page content'] = array(
    'name' => 'edit any collectorate_times_front_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any date_migrate_example content'.
  $permissions['edit any date_migrate_example content'] = array(
    'name' => 'edit any date_migrate_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any department_intro_page content'.
  $permissions['edit any department_intro_page content'] = array(
    'name' => 'edit any department_intro_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any feedback content'.
  $permissions['edit any feedback content'] = array(
    'name' => 'edit any feedback content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any feedback_reply content'.
  $permissions['edit any feedback_reply content'] = array(
    'name' => 'edit any feedback_reply content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any general_content content'.
  $permissions['edit any general_content content'] = array(
    'name' => 'edit any general_content content',
    'roles' => array(
      'ADM' => 'ADM',
      'DM' => 'DM',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any home_programms content'.
  $permissions['edit any home_programms content'] = array(
    'name' => 'edit any home_programms content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any image content'.
  $permissions['edit any image content'] = array(
    'name' => 'edit any image content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image_gallery content'.
  $permissions['edit any image_gallery content'] = array(
    'name' => 'edit any image_gallery content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any import_result content'.
  $permissions['edit any import_result content'] = array(
    'name' => 'edit any import_result content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any recent_post content'.
  $permissions['edit any recent_post content'] = array(
    'name' => 'edit any recent_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any report content'.
  $permissions['edit any report content'] = array(
    'name' => 'edit any report content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any result content'.
  $permissions['edit any result content'] = array(
    'name' => 'edit any result content',
    'roles' => array(
      'DM' => 'DM',
      'HO' => 'HO',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any share_doc content'.
  $permissions['edit any share_doc content'] = array(
    'name' => 'edit any share_doc content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sub_divisional_page content'.
  $permissions['edit any sub_divisional_page content'] = array(
    'name' => 'edit any sub_divisional_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any test_report content'.
  $permissions['edit any test_report content'] = array(
    'name' => 'edit any test_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'BDO' => 'BDO',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ask_for_report content'.
  $permissions['edit own ask_for_report content'] = array(
    'name' => 'edit own ask_for_report content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'OC' => 'OC',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own block_page content'.
  $permissions['edit own block_page content'] = array(
    'name' => 'edit own block_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'BDO' => 'BDO',
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own charges_history content'.
  $permissions['edit own charges_history content'] = array(
    'name' => 'edit own charges_history content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own collectorate_times content'.
  $permissions['edit own collectorate_times content'] = array(
    'name' => 'edit own collectorate_times content',
    'roles' => array(
      'BDO' => 'BDO',
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own collectorate_times_front_page content'.
  $permissions['edit own collectorate_times_front_page content'] = array(
    'name' => 'edit own collectorate_times_front_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own date_migrate_example content'.
  $permissions['edit own date_migrate_example content'] = array(
    'name' => 'edit own date_migrate_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own department_intro_page content'.
  $permissions['edit own department_intro_page content'] = array(
    'name' => 'edit own department_intro_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own feedback content'.
  $permissions['edit own feedback content'] = array(
    'name' => 'edit own feedback content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own feedback_reply content'.
  $permissions['edit own feedback_reply content'] = array(
    'name' => 'edit own feedback_reply content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own general_content content'.
  $permissions['edit own general_content content'] = array(
    'name' => 'edit own general_content content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own home_programms content'.
  $permissions['edit own home_programms content'] = array(
    'name' => 'edit own home_programms content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own image content'.
  $permissions['edit own image content'] = array(
    'name' => 'edit own image content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'Content Uploaded' => 'Content Uploaded',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image_gallery content'.
  $permissions['edit own image_gallery content'] = array(
    'name' => 'edit own image_gallery content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'Content Uploaded' => 'Content Uploaded',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own import_result content'.
  $permissions['edit own import_result content'] = array(
    'name' => 'edit own import_result content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own recent_post content'.
  $permissions['edit own recent_post content'] = array(
    'name' => 'edit own recent_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own report content'.
  $permissions['edit own report content'] = array(
    'name' => 'edit own report content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own result content'.
  $permissions['edit own result content'] = array(
    'name' => 'edit own result content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own share_doc content'.
  $permissions['edit own share_doc content'] = array(
    'name' => 'edit own share_doc content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sub_divisional_page content'.
  $permissions['edit own sub_divisional_page content'] = array(
    'name' => 'edit own sub_divisional_page content',
    'roles' => array(
      'DM' => 'DM',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own test_report content'.
  $permissions['edit own test_report content'] = array(
    'name' => 'edit own test_report content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in department'.
  $permissions['edit terms in department'] = array(
    'name' => 'edit terms in department',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in district'.
  $permissions['edit terms in district'] = array(
    'name' => 'edit terms in district',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in exam'.
  $permissions['edit terms in exam'] = array(
    'name' => 'edit terms in exam',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in month'.
  $permissions['edit terms in month'] = array(
    'name' => 'edit terms in month',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in office'.
  $permissions['edit terms in office'] = array(
    'name' => 'edit terms in office',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in posts'.
  $permissions['edit terms in posts'] = array(
    'name' => 'edit terms in posts',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in year'.
  $permissions['edit terms in year'] = array(
    'name' => 'edit terms in year',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit users with role 11'.
  $permissions['edit users with role 11'] = array(
    'name' => 'edit users with role 11',
    'roles' => array(
      '_user_role_2' => '_user_role_2',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 12'.
  $permissions['edit users with role 12'] = array(
    'name' => 'edit users with role 12',
    'roles' => array(),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 13'.
  $permissions['edit users with role 13'] = array(
    'name' => 'edit users with role 13',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 2'.
  $permissions['edit users with role 2'] = array(
    'name' => 'edit users with role 2',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 4'.
  $permissions['edit users with role 4'] = array(
    'name' => 'edit users with role 4',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 5'.
  $permissions['edit users with role 5'] = array(
    'name' => 'edit users with role 5',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 6'.
  $permissions['edit users with role 6'] = array(
    'name' => 'edit users with role 6',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 7'.
  $permissions['edit users with role 7'] = array(
    'name' => 'edit users with role 7',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 8'.
  $permissions['edit users with role 8'] = array(
    'name' => 'edit users with role 8',
    'roles' => array(
      'DM' => 'DM',
      '_user_role_2' => '_user_role_2',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role 9'.
  $permissions['edit users with role 9'] = array(
    'name' => 'edit users with role 9',
    'roles' => array(
      'DM' => 'DM',
      '_user_role_2' => '_user_role_2',
      'administrator' => 'administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'execute comment_publish_action'.
  $permissions['execute comment_publish_action'] = array(
    'name' => 'execute comment_publish_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_save_action'.
  $permissions['execute comment_save_action'] = array(
    'name' => 'execute comment_save_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_unpublish_action'.
  $permissions['execute comment_unpublish_action'] = array(
    'name' => 'execute comment_unpublish_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute comment_unpublish_by_keyword_action'.
  $permissions['execute comment_unpublish_by_keyword_action'] = array(
    'name' => 'execute comment_unpublish_by_keyword_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_assign_owner_action'.
  $permissions['execute node_assign_owner_action'] = array(
    'name' => 'execute node_assign_owner_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_make_sticky_action'.
  $permissions['execute node_make_sticky_action'] = array(
    'name' => 'execute node_make_sticky_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_make_unsticky_action'.
  $permissions['execute node_make_unsticky_action'] = array(
    'name' => 'execute node_make_unsticky_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_promote_action'.
  $permissions['execute node_promote_action'] = array(
    'name' => 'execute node_promote_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_publish_action'.
  $permissions['execute node_publish_action'] = array(
    'name' => 'execute node_publish_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_save_action'.
  $permissions['execute node_save_action'] = array(
    'name' => 'execute node_save_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpromote_action'.
  $permissions['execute node_unpromote_action'] = array(
    'name' => 'execute node_unpromote_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpublish_action'.
  $permissions['execute node_unpublish_action'] = array(
    'name' => 'execute node_unpublish_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute node_unpublish_by_keyword_action'.
  $permissions['execute node_unpublish_by_keyword_action'] = array(
    'name' => 'execute node_unpublish_by_keyword_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute role_delegation_delegate_roles_action'.
  $permissions['execute role_delegation_delegate_roles_action'] = array(
    'name' => 'execute role_delegation_delegate_roles_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_block_ip_action'.
  $permissions['execute system_block_ip_action'] = array(
    'name' => 'execute system_block_ip_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_goto_action'.
  $permissions['execute system_goto_action'] = array(
    'name' => 'execute system_goto_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_message_action'.
  $permissions['execute system_message_action'] = array(
    'name' => 'execute system_message_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute system_send_email_action'.
  $permissions['execute system_send_email_action'] = array(
    'name' => 'execute system_send_email_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute user_block_user_action'.
  $permissions['execute user_block_user_action'] = array(
    'name' => 'execute user_block_user_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_archive_action'.
  $permissions['execute views_bulk_operations_archive_action'] = array(
    'name' => 'execute views_bulk_operations_archive_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_argument_selector_action'.
  $permissions['execute views_bulk_operations_argument_selector_action'] = array(
    'name' => 'execute views_bulk_operations_argument_selector_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_delete_item'.
  $permissions['execute views_bulk_operations_delete_item'] = array(
    'name' => 'execute views_bulk_operations_delete_item',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_delete_revision'.
  $permissions['execute views_bulk_operations_delete_revision'] = array(
    'name' => 'execute views_bulk_operations_delete_revision',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_modify_action'.
  $permissions['execute views_bulk_operations_modify_action'] = array(
    'name' => 'execute views_bulk_operations_modify_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_move_to_book_action'.
  $permissions['execute views_bulk_operations_move_to_book_action'] = array(
    'name' => 'execute views_bulk_operations_move_to_book_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_remove_from_book_action'.
  $permissions['execute views_bulk_operations_remove_from_book_action'] = array(
    'name' => 'execute views_bulk_operations_remove_from_book_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_script_action'.
  $permissions['execute views_bulk_operations_script_action'] = array(
    'name' => 'execute views_bulk_operations_script_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_user_cancel_action'.
  $permissions['execute views_bulk_operations_user_cancel_action'] = array(
    'name' => 'execute views_bulk_operations_user_cancel_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute views_bulk_operations_user_roles_action'.
  $permissions['execute views_bulk_operations_user_roles_action'] = array(
    'name' => 'execute views_bulk_operations_user_roles_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'execute workbench_moderation_set_state_action'.
  $permissions['execute workbench_moderation_set_state_action'] = array(
    'name' => 'execute workbench_moderation_set_state_action',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import establishment_result feeds'.
  $permissions['import establishment_result feeds'] = array(
    'name' => 'import establishment_result feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'publish any content'.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable content'.
  $permissions['publish editable content'] = array(
    'name' => 'publish editable content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search all content'.
  $permissions['search all content'] = array(
    'name' => 'search all content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search all excluded entities'.
  $permissions['search all excluded entities'] = array(
    'name' => 'search all excluded entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search article content'.
  $permissions['search article content'] = array(
    'name' => 'search article content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search ask_for_report content'.
  $permissions['search ask_for_report content'] = array(
    'name' => 'search ask_for_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search block_page content'.
  $permissions['search block_page content'] = array(
    'name' => 'search block_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search blog content'.
  $permissions['search blog content'] = array(
    'name' => 'search blog content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: 'search book content'.
  $permissions['search book content'] = array(
    'name' => 'search book content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search charges_history content'.
  $permissions['search charges_history content'] = array(
    'name' => 'search charges_history content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: 'search collectorate_times content'.
  $permissions['search collectorate_times content'] = array(
    'name' => 'search collectorate_times content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search collectorate_times_front_page content'.
  $permissions['search collectorate_times_front_page content'] = array(
    'name' => 'search collectorate_times_front_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'search date_migrate_example content'.
  $permissions['search date_migrate_example content'] = array(
    'name' => 'search date_migrate_example content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: 'search department_intro_page content'.
  $permissions['search department_intro_page content'] = array(
    'name' => 'search department_intro_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search feedback content'.
  $permissions['search feedback content'] = array(
    'name' => 'search feedback content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search feedback_reply content'.
  $permissions['search feedback_reply content'] = array(
    'name' => 'search feedback_reply content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search general_content content'.
  $permissions['search general_content content'] = array(
    'name' => 'search general_content content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search home_programms content'.
  $permissions['search home_programms content'] = array(
    'name' => 'search home_programms content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: 'search image content'.
  $permissions['search image content'] = array(
    'name' => 'search image content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search image_gallery content'.
  $permissions['search image_gallery content'] = array(
    'name' => 'search image_gallery content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search import_result content'.
  $permissions['search import_result content'] = array(
    'name' => 'search import_result content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search page content'.
  $permissions['search page content'] = array(
    'name' => 'search page content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search recent_post content'.
  $permissions['search recent_post content'] = array(
    'name' => 'search recent_post content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: 'search report content'.
  $permissions['search report content'] = array(
    'name' => 'search report content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: 'search result content'.
  $permissions['search result content'] = array(
    'name' => 'search result content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search share_doc content'.
  $permissions['search share_doc content'] = array(
    'name' => 'search share_doc content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search sub_divisional_page content'.
  $permissions['search sub_divisional_page content'] = array(
    'name' => 'search sub_divisional_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: 'search test_report content'.
  $permissions['search test_report content'] = array(
    'name' => 'search test_report content',
    'roles' => array(),
    'module' => 'search_config',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'tamper establishment_result'.
  $permissions['tamper establishment_result'] = array(
    'name' => 'tamper establishment_result',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock establishment_result feeds'.
  $permissions['unlock establishment_result feeds'] = array(
    'name' => 'unlock establishment_result feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unpublish any content'.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      'DM' => 'DM',
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable content'.
  $permissions['unpublish editable content'] = array(
    'name' => 'unpublish editable content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format magazine'.
  $permissions['use text format magazine'] = array(
    'name' => 'use text format magazine',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'HO' => 'HO',
      'OC' => 'OC',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'ADM' => 'ADM',
      'BDO' => 'BDO',
      'DM' => 'DM',
      'SDO' => 'SDO',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view rate results page'.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rate',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view workbench access information'.
  $permissions['view workbench access information'] = array(
    'name' => 'view workbench access information',
    'roles' => array(
      'DM' => 'DM',
      '_user_role_2' => '_user_role_2',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'view workbench taxonomy pages'.
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(
      'DM' => 'DM',
      '_user_role_2' => '_user_role_2',
    ),
    'module' => 'workbench_access',
  );

  return $permissions;
}

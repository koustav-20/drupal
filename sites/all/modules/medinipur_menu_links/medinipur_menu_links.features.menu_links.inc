<?php
/**
 * @file
 * medinipur_menu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function medinipur_menu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_administrative-units:node/7
  $menu_links['main-menu_administrative-units:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Administrative Units',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_administrative-units:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_all-reports:all-reports
  $menu_links['main-menu_all-reports:all-reports'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'all-reports',
    'router_path' => 'all-reports',
    'link_title' => 'All Reports',
    'options' => array(
      'identifier' => 'main-menu_all-reports:all-reports',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_archive:archive
  $menu_links['main-menu_archive:archive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'archive',
    'router_path' => 'archive',
    'link_title' => 'Archive',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_archive:archive',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_whats-new:listing-all-content',
  );
  // Exported menu link: main-menu_bcw:node/17
  $menu_links['main-menu_bcw:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'BCW',
    'options' => array(
      'identifier' => 'main-menu_bcw:node/17',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_blocks:node/11
  $menu_links['main-menu_blocks:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Blocks',
    'options' => array(
      'identifier' => 'main-menu_blocks:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_census:node/24
  $menu_links['main-menu_census:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Census',
    'options' => array(
      'identifier' => 'main-menu_census:node/24',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_charges-history:all-charges-history
  $menu_links['main-menu_charges-history:all-charges-history'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'all-charges-history',
    'router_path' => 'all-charges-history',
    'link_title' => 'Charges History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_charges-history:all-charges-history',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_collectorate-times:book
  $menu_links['main-menu_collectorate-times:book'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Collectorate Times',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_collectorate-times:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_collectorate:node/166
  $menu_links['main-menu_collectorate:node/166'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/166',
    'router_path' => 'node/%',
    'link_title' => 'Collectorate',
    'options' => array(
      'identifier' => 'main-menu_collectorate:node/166',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_cultural:node/3
  $menu_links['main-menu_cultural:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Cultural',
    'options' => array(
      'identifier' => 'main-menu_cultural:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_departments:list-departments
  $menu_links['main-menu_departments:list-departments'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'list-departments',
    'router_path' => 'list-departments',
    'link_title' => 'Departments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_departments:list-departments',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dev--planning:node/22
  $menu_links['main-menu_dev--planning:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Dev & Planning',
    'options' => array(
      'identifier' => 'main-menu_dev--planning:node/22',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_district-at-a-glance:node/6
  $menu_links['main-menu_district-at-a-glance:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'District at a glance',
    'options' => array(
      'identifier' => 'main-menu_district-at-a-glance:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_district-profile:node/2
  $menu_links['main-menu_district-profile:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'District Profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_district-profile:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dl--lro:node/18
  $menu_links['main-menu_dl--lro:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'DL & LRO',
    'options' => array(
      'identifier' => 'main-menu_dl--lro:node/18',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_drdc:node/19
  $menu_links['main-menu_drdc:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'DRDC',
    'options' => array(
      'identifier' => 'main-menu_drdc:node/19',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_education:node/68
  $menu_links['main-menu_education:node/68'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/68',
    'router_path' => 'node/%',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_education:node/68',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_election:node/16
  $menu_links['main-menu_election:node/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Election',
    'options' => array(
      'identifier' => 'main-menu_election:node/16',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_faq:faq
  $menu_links['main-menu_faq:faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faq:faq',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:node/1
  $menu_links['main-menu_home:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_line-departments:node/23
  $menu_links['main-menu_line-departments:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Line Departments',
    'options' => array(
      'identifier' => 'main-menu_line-departments:node/23',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_mkda:node/13
  $menu_links['main-menu_mkda:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'MKDA',
    'options' => array(
      'identifier' => 'main-menu_mkda:node/13',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_p--rd:node/20
  $menu_links['main-menu_p--rd:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'P & RD',
    'options' => array(
      'identifier' => 'main-menu_p--rd:node/20',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_photo-gallery:photo-gallery
  $menu_links['main-menu_photo-gallery:photo-gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'photo-gallery',
    'router_path' => 'photo-gallery',
    'link_title' => 'Photo Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_photo-gallery:photo-gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_political-setup:node/8
  $menu_links['main-menu_political-setup:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Political Setup',
    'options' => array(
      'identifier' => 'main-menu_political-setup:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_result:results
  $menu_links['main-menu_result:results'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'results',
    'router_path' => 'results',
    'link_title' => 'Result',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_result:results',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_whats-new:listing-all-content',
  );
  // Exported menu link: main-menu_right-to-information:node/14
  $menu_links['main-menu_right-to-information:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Right to Information',
    'options' => array(
      'identifier' => 'main-menu_right-to-information:node/14',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: main-menu_sports:node/5
  $menu_links['main-menu_sports:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Sports',
    'options' => array(
      'identifier' => 'main-menu_sports:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_ssa:node/21
  $menu_links['main-menu_ssa:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'SSA',
    'options' => array(
      'identifier' => 'main-menu_ssa:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_education:node/68',
  );
  // Exported menu link: main-menu_sub-division:node/10
  $menu_links['main-menu_sub-division:node/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Sub-Division',
    'options' => array(
      'identifier' => 'main-menu_sub-division:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_tourism:node/4
  $menu_links['main-menu_tourism:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Tourism',
    'options' => array(
      'identifier' => 'main-menu_tourism:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_district-profile:node/2',
  );
  // Exported menu link: main-menu_whats-new:listing-all-content
  $menu_links['main-menu_whats-new:listing-all-content'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'listing-all-content',
    'router_path' => 'listing-all-content',
    'link_title' => 'What’s New',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_whats-new:listing-all-content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_zilla-parishad:http://zpmidwest.org
  $menu_links['main-menu_zilla-parishad:http://zpmidwest.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://zpmidwest.org',
    'router_path' => '',
    'link_title' => 'Zilla Parishad',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_zilla-parishad:http://zpmidwest.org',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_departments:list-departments',
  );
  // Exported menu link: management_accordion-menu:admin/config/user-interface/accordion_menu
  $menu_links['management_accordion-menu:admin/config/user-interface/accordion_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/accordion_menu',
    'router_path' => 'admin/config/user-interface/accordion_menu',
    'link_title' => 'Accordion Menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify accordion menu blocks.',
      ),
      'identifier' => 'management_accordion-menu:admin/config/user-interface/accordion_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_actions:admin/config/system/actions
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_administration:admin
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_appearance:admin/appearance
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_backup-and-migrate:admin/config/system/backup_migrate
  $menu_links['management_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database and files or migrate data to or from another Drupal site.',
      ),
      'identifier' => 'management_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_blocks:admin/structure/block
  $menu_links['management_blocks:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
      'identifier' => 'management_blocks:admin/structure/block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_colorbox:admin/config/media/colorbox
  $menu_links['management_colorbox:admin/config/media/colorbox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/colorbox',
    'router_path' => 'admin/config/media/colorbox',
    'link_title' => 'Colorbox',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust Colorbox settings.',
      ),
      'identifier' => 'management_colorbox:admin/config/media/colorbox',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_comments:admin/content/comment
  $menu_links['management_comments:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
      'identifier' => 'management_comments:admin/content/comment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_configuration:admin/config
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_content-authoring:admin/config/content
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_content-management:admin/structure/menu/manage/menu-content-management
  $menu_links['management_content-management:admin/structure/menu/manage/menu-content-management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-content-management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Content Management',
    'options' => array(
      'identifier' => 'management_content-management:admin/structure/menu/manage/menu-content-management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_content-types:admin/structure/types
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_content:admin/content
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_cron:admin/config/system/cron
  $menu_links['management_cron:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
      'identifier' => 'management_cron:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_dashboard:admin/dashboard
  $menu_links['management_dashboard:admin/dashboard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'View and customize your dashboard.',
      ),
      'identifier' => 'management_dashboard:admin/dashboard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_date-api:admin/config/date
  $menu_links['management_date-api:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
      'identifier' => 'management_date-api:admin/config/date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_date-popup:admin/config/date/date_popup
  $menu_links['management_date-popup:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
      'identifier' => 'management_date-popup:admin/config/date/date_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: management_development:admin/config/development
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_features:admin/structure/features
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_feeds-importers:admin/structure/feeds
  $menu_links['management_feeds-importers:admin/structure/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/feeds',
    'router_path' => 'admin/structure/feeds',
    'link_title' => 'Feeds importers',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure one or more Feeds importers to aggregate RSS and Atom feeds, import CSV files or more.',
      ),
      'identifier' => 'management_feeds-importers:admin/structure/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_feeds-log:admin/reports/feeds
  $menu_links['management_feeds-log:admin/reports/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/feeds',
    'router_path' => 'admin/reports/feeds',
    'link_title' => 'Feeds log',
    'options' => array(
      'attributes' => array(
        'title' => 'Review log messages of imports and subscriptions to feeds.',
      ),
      'identifier' => 'management_feeds-log:admin/reports/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_field-list:admin/reports/fields
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_grid-field-formatter-settings:admin/config/content/grid-field-formatter
  $menu_links['management_grid-field-formatter-settings:admin/config/content/grid-field-formatter'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/grid-field-formatter',
    'router_path' => 'admin/config/content/grid-field-formatter',
    'link_title' => 'Grid Field Formatter Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration form page for the Grid Field Formatter supported field types.',
      ),
      'identifier' => 'management_grid-field-formatter-settings:admin/config/content/grid-field-formatter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_help:admin/help
  $menu_links['management_help:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
      'identifier' => 'management_help:admin/help',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_high-contrast:admin/config/user-interface/high-contrast
  $menu_links['management_high-contrast:admin/config/user-interface/high-contrast'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/high-contrast',
    'router_path' => 'admin/config/user-interface/high-contrast',
    'link_title' => 'High Contrast',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to High Contrast',
      ),
      'identifier' => 'management_high-contrast:admin/config/user-interface/high-contrast',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_media:admin/config/media
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_menus:admin/structure/menu
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_modules:admin/modules
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_my-workbench:admin/workbench
  $menu_links['management_my-workbench:admin/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'My Workbench area',
      ),
      'identifier' => 'management_my-workbench:admin/workbench',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_people:admin/config/people
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_people:admin/people
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_performance:admin/config/development/performance
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_publish-content-settings:admin/config/content/publishcontent
  $menu_links['management_publish-content-settings:admin/config/content/publishcontent'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/publishcontent',
    'router_path' => 'admin/config/content/publishcontent',
    'link_title' => 'Publish content settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings.',
      ),
      'identifier' => 'management_publish-content-settings:admin/config/content/publishcontent',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_rate-widgets:admin/structure/rate
  $menu_links['management_rate-widgets:admin/structure/rate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/rate',
    'router_path' => 'admin/structure/rate',
    'link_title' => 'Rate widgets',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage rating widgets.',
      ),
      'identifier' => 'management_rate-widgets:admin/structure/rate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_regional-and-language:admin/config/regional',
  );
  // Exported menu link: management_reports:admin/reports
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_request:admin/structure/tb-megamenu/request
  $menu_links['management_request:admin/structure/tb-megamenu/request'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/tb-megamenu/request',
    'router_path' => 'admin/structure/tb-megamenu/request',
    'link_title' => 'Request',
    'options' => array(
      'identifier' => 'management_request:admin/structure/tb-megamenu/request',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_tb-mega-menu:admin/structure/tb-megamenu',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );
  // Exported menu link: management_rules:admin/config/workflow/rules
  $menu_links['management_rules:admin/config/workflow/rules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow/rules',
    'router_path' => 'admin/config/workflow/rules',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage reaction rules and rule components.',
      ),
      'identifier' => 'management_rules:admin/config/workflow/rules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_workflow:admin/config/workflow',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_shortcuts:admin/config/user-interface/shortcut
  $menu_links['management_shortcuts:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
      'identifier' => 'management_shortcuts:admin/config/user-interface/shortcut',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_system:admin/config/system',
  );
  // Exported menu link: management_site-map:admin/config/search/sitemap
  $menu_links['management_site-map:admin/config/search/sitemap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/sitemap',
    'router_path' => 'admin/config/search/sitemap',
    'link_title' => 'Site map',
    'options' => array(
      'attributes' => array(
        'title' => 'Control what should be displayed on the site map.',
      ),
      'identifier' => 'management_site-map:admin/config/search/sitemap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_status-report:admin/reports/status
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_structure:admin/structure
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: management_system:admin/config/system
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_tb-mega-menu:admin/structure/tb-megamenu
  $menu_links['management_tb-mega-menu:admin/structure/tb-megamenu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/tb-megamenu',
    'router_path' => 'admin/structure/tb-megamenu',
    'link_title' => 'TB Mega Menu',
    'options' => array(
      'attributes' => array(
        'title' => 'TB Mega Menu',
      ),
      'identifier' => 'management_tb-mega-menu:admin/structure/tb-megamenu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_text-formats:admin/config/content/formats
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_text-resize:admin/config/user-interface/text_resize
  $menu_links['management_text-resize:admin/config/user-interface/text_resize'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/text_resize',
    'router_path' => 'admin/config/user-interface/text_resize',
    'link_title' => 'Text Resize',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for your Text Resize block.',
      ),
      'identifier' => 'management_text-resize:admin/config/user-interface/text_resize',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_views-plugins:admin/reports/views-plugins
  $menu_links['management_views-plugins:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
      'identifier' => 'management_views-plugins:admin/reports/views-plugins',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_views:admin/structure/views
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_voting-api:admin/config/search/votingapi
  $menu_links['management_voting-api:admin/config/search/votingapi'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/votingapi',
    'router_path' => 'admin/config/search/votingapi',
    'link_title' => 'Voting API',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure sitewide settings for user-generated ratings and votes.',
      ),
      'identifier' => 'management_voting-api:admin/config/search/votingapi',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: management_web-services:admin/config/services
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_workbench-access:admin/config/workbench/access
  $menu_links['management_workbench-access:admin/config/workbench/access'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench/access',
    'router_path' => 'admin/config/workbench/access',
    'link_title' => 'Workbench Access',
    'options' => array(
      'attributes' => array(
        'title' => 'Workbench access control settings',
      ),
      'identifier' => 'management_workbench-access:admin/config/workbench/access',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_workbench:admin/config/workbench',
  );
  // Exported menu link: management_workbench-moderation:admin/config/workbench/moderation
  $menu_links['management_workbench-moderation:admin/config/workbench/moderation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench/moderation',
    'router_path' => 'admin/config/workbench/moderation',
    'link_title' => 'Workbench Moderation',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure content moderation.',
      ),
      'identifier' => 'management_workbench-moderation:admin/config/workbench/moderation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_workbench:admin/config/workbench',
  );
  // Exported menu link: management_workbench:admin/config/workbench
  $menu_links['management_workbench:admin/config/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench',
    'router_path' => 'admin/config/workbench',
    'link_title' => 'Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'Workbench',
      ),
      'identifier' => 'management_workbench:admin/config/workbench',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_workflow:admin/config/workflow
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );
  // Exported menu link: management_wysiwyg-profiles:admin/config/content/wysiwyg
  $menu_links['management_wysiwyg-profiles:admin/config/content/wysiwyg'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/wysiwyg',
    'router_path' => 'admin/config/content/wysiwyg',
    'link_title' => 'Wysiwyg profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure client-side editors.',
      ),
      'identifier' => 'management_wysiwyg-profiles:admin/config/content/wysiwyg',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_xml-sitemap:admin/config/search/xmlsitemap
  $menu_links['management_xml-sitemap:admin/config/search/xmlsitemap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/xmlsitemap',
    'router_path' => 'admin/config/search/xmlsitemap',
    'link_title' => 'XML sitemap',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure your site\'s XML sitemaps to help search engines find and index pages on your site.',
      ),
      'identifier' => 'management_xml-sitemap:admin/config/search/xmlsitemap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: navigation_article:node/add/article
  $menu_links['navigation_article:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_article:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_ask-for--report:node/add/ask-for-report
  $menu_links['navigation_ask-for--report:node/add/ask-for-report'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ask-for-report',
    'router_path' => 'node/add/ask-for-report',
    'link_title' => 'Ask For  Report',
    'options' => array(
      'identifier' => 'navigation_ask-for--report:node/add/ask-for-report',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
  );
  // Exported menu link: navigation_basic-page:node/add/page
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: navigation_blog:node/add/blog
  $menu_links['navigation_blog:node/add/blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => 'This is for site blog section',
      ),
      'identifier' => 'navigation_blog:node/add/blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_books:book
  $menu_links['navigation_books:book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Books',
    'options' => array(
      'identifier' => 'navigation_books:book',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_charge-history:admin/workbench/create/node/add/charges-history
  $menu_links['navigation_charge-history:admin/workbench/create/node/add/charges-history'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/workbench/create/node/add/charges-history',
    'router_path' => 'admin/workbench/create/node/add/charges-history',
    'link_title' => 'Charge History',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to Add History of charges held by Officer',
      ),
      'identifier' => 'navigation_charge-history:admin/workbench/create/node/add/charges-history',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_charges-history:node/add/charges-history
  $menu_links['navigation_charges-history:node/add/charges-history'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/charges-history',
    'router_path' => 'node/add/charges-history',
    'link_title' => 'Charges History',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to Add History of charges held by Officer',
      ),
      'identifier' => 'navigation_charges-history:node/add/charges-history',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_collectorate-times-content:node/add/book
  $menu_links['navigation_collectorate-times-content:node/add/book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Collectorate Times Content',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Collectorate Times </em> Use to add collectorate time content.',
      ),
      'identifier' => 'navigation_collectorate-times-content:node/add/book',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_collectorate-times-front-page:node/add/collectorate-times-front-page
  $menu_links['navigation_collectorate-times-front-page:node/add/collectorate-times-front-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/collectorate-times-front-page',
    'router_path' => 'node/add/collectorate-times-front-page',
    'link_title' => 'Collectorate Times Front Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to add front page for Collectorate Times magazine',
      ),
      'identifier' => 'navigation_collectorate-times-front-page:node/add/collectorate-times-front-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: navigation_collectorate-times:node/add/collectorate-times
  $menu_links['navigation_collectorate-times:node/add/collectorate-times'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/collectorate-times',
    'router_path' => 'node/add/collectorate-times',
    'link_title' => 'Collectorate Times',
    'options' => array(
      'attributes' => array(
        'title' => 'use to add page for Collectorate Times.',
      ),
      'identifier' => 'navigation_collectorate-times:node/add/collectorate-times',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: navigation_document-repository:node/add/share-doc
  $menu_links['navigation_document-repository:node/add/share-doc'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/share-doc',
    'router_path' => 'node/add/share-doc',
    'link_title' => 'Document Repository',
    'options' => array(
      'attributes' => array(
        'title' => 'This will use to add doc for sharing with other users.',
      ),
      'identifier' => 'navigation_document-repository:node/add/share-doc',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: navigation_feedback-reply:node/add/feedback-reply
  $menu_links['navigation_feedback-reply:node/add/feedback-reply'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/feedback-reply',
    'router_path' => 'node/add/feedback-reply',
    'link_title' => 'Feedback Reply',
    'options' => array(
      'attributes' => array(
        'title' => 'use to  give reply of any feedback.',
      ),
      'identifier' => 'navigation_feedback-reply:node/add/feedback-reply',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: navigation_feedback:node/add/feedback
  $menu_links['navigation_feedback:node/add/feedback'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/feedback',
    'router_path' => 'node/add/feedback',
    'link_title' => 'Feedback',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to give feedback on content.',
      ),
      'identifier' => 'navigation_feedback:node/add/feedback',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: navigation_home-programms:node/add/home-programms
  $menu_links['navigation_home-programms:node/add/home-programms'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/home-programms',
    'router_path' => 'node/add/home-programms',
    'link_title' => 'Home Programms',
    'options' => array(
      'attributes' => array(
        'title' => 'This is for different kind of prakalpa and programms.',
      ),
      'identifier' => 'navigation_home-programms:node/add/home-programms',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_image-gallery:node/add/image-gallery
  $menu_links['navigation_image-gallery:node/add/image-gallery'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/image-gallery',
    'router_path' => 'node/add/image-gallery',
    'link_title' => 'Image Gallery',
    'options' => array(
      'identifier' => 'navigation_image-gallery:node/add/image-gallery',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
  );
  // Exported menu link: navigation_image:node/add/image
  $menu_links['navigation_image:node/add/image'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/image',
    'router_path' => 'node/add/image',
    'link_title' => 'Image',
    'options' => array(
      'attributes' => array(
        'title' => 'Gallery images.',
      ),
      'identifier' => 'navigation_image:node/add/image',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_import:import
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: navigation_introduction-page-block:node/add/block-page
  $menu_links['navigation_introduction-page-block:node/add/block-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/block-page',
    'router_path' => 'node/add/block-page',
    'link_title' => 'Introduction Page: Block',
    'options' => array(
      'attributes' => array(
        'title' => 'use to add block intro page
',
      ),
      'identifier' => 'navigation_introduction-page-block:node/add/block-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: navigation_introduction-page-department:node/add/department-intro-page
  $menu_links['navigation_introduction-page-department:node/add/department-intro-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/department-intro-page',
    'router_path' => 'node/add/department-intro-page',
    'link_title' => 'Introduction Page: Department',
    'options' => array(
      'attributes' => array(
        'title' => 'This is introduction page for department/ Section.',
      ),
      'identifier' => 'navigation_introduction-page-department:node/add/department-intro-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: navigation_introduction-page-sub-divisional:node/add/sub-divisional-page
  $menu_links['navigation_introduction-page-sub-divisional:node/add/sub-divisional-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sub-divisional-page',
    'router_path' => 'node/add/sub-divisional-page',
    'link_title' => 'Introduction Page: Sub-Divisional',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to add sub division intro pages ',
      ),
      'identifier' => 'navigation_introduction-page-sub-divisional:node/add/sub-divisional-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: navigation_magazine:magazine
  $menu_links['navigation_magazine:magazine'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'magazine',
    'router_path' => 'magazine',
    'link_title' => 'Magazine',
    'options' => array(
      'identifier' => 'navigation_magazine:magazine',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
  );
  // Exported menu link: navigation_migrate-example---dates:node/add/date-migrate-example
  $menu_links['navigation_migrate-example---dates:node/add/date-migrate-example'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/date-migrate-example',
    'router_path' => 'node/add/date-migrate-example',
    'link_title' => 'Migrate example - dates',
    'options' => array(
      'attributes' => array(
        'title' => 'This content type is used for demonstrating and testing migration into Date fields.',
      ),
      'identifier' => 'navigation_migrate-example---dates:node/add/date-migrate-example',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_recent-post:node/add/recent-post
  $menu_links['navigation_recent-post:node/add/recent-post'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/recent-post',
    'router_path' => 'node/add/recent-post',
    'link_title' => 'Recent Post',
    'options' => array(
      'attributes' => array(
        'title' => 'Recent Post',
      ),
      'identifier' => 'navigation_recent-post:node/add/recent-post',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_report:node/add/report
  $menu_links['navigation_report:node/add/report'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/report',
    'router_path' => 'node/add/report',
    'link_title' => 'Report',
    'options' => array(
      'identifier' => 'navigation_report:node/add/report',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_result-import:node/add/import-result
  $menu_links['navigation_result-import:node/add/import-result'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/import-result',
    'router_path' => 'node/add/import-result',
    'link_title' => 'Result: Import',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to import result.',
      ),
      'identifier' => 'navigation_result-import:node/add/import-result',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
  );
  // Exported menu link: navigation_result:node/add/result
  $menu_links['navigation_result:node/add/result'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/result',
    'router_path' => 'node/add/result',
    'link_title' => 'Result',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for result.',
      ),
      'identifier' => 'navigation_result:node/add/result',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
  );
  // Exported menu link: navigation_search:search
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
  );
  // Exported menu link: navigation_site-map:sitemap
  $menu_links['navigation_site-map:sitemap'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Site map',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a site map with RSS feeds.',
      ),
      'identifier' => 'navigation_site-map:sitemap',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -30,
    'customized' => 1,
  );
  // Exported menu link: navigation_test-report:node/add/test-report
  $menu_links['navigation_test-report:node/add/test-report'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/test-report',
    'router_path' => 'node/add/test-report',
    'link_title' => 'test report',
    'options' => array(
      'identifier' => 'navigation_test-report:node/add/test-report',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: user-menu_add-charge-history:node/add/charges-history
  $menu_links['user-menu_add-charge-history:node/add/charges-history'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/charges-history',
    'router_path' => 'node/add/charges-history',
    'link_title' => 'Add Charge History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_add-charge-history:node/add/charges-history',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_charge-history:node/add/charges-history',
  );
  // Exported menu link: user-menu_add-collectorate-times-content:node/add/book
  $menu_links['user-menu_add-collectorate-times-content:node/add/book'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Add Collectorate Times Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Collectorate times
',
      ),
      'identifier' => 'user-menu_add-collectorate-times-content:node/add/book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'user-menu_collectorate-times-section:book',
  );
  // Exported menu link: user-menu_add-content:node/add/general-content
  $menu_links['user-menu_add-content:node/add/general-content'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/general-content',
    'router_path' => 'node/add/general-content',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Use this to add Notice/Tender and Recruitment.',
      ),
      'identifier' => 'user-menu_add-content:node/add/general-content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_notice-tender-and-recruitment:node/add/general-content',
  );
  // Exported menu link: user-menu_add-gallery:node/add/image-gallery
  $menu_links['user-menu_add-gallery:node/add/image-gallery'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/image-gallery',
    'router_path' => 'node/add/image-gallery',
    'link_title' => 'Add Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_add-gallery:node/add/image-gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_image-gallery:node/add/image_gallery',
  );
  // Exported menu link: user-menu_add-image:node/add/image
  $menu_links['user-menu_add-image:node/add/image'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/image',
    'router_path' => 'node/add/image',
    'link_title' => 'Add Image',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to add gallery image.',
      ),
      'identifier' => 'user-menu_add-image:node/add/image',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'user-menu_image-gallery:node/add/image_gallery',
  );
  // Exported menu link: user-menu_all-collectorate-times-content:all-collectorate-times-contents
  $menu_links['user-menu_all-collectorate-times-content:all-collectorate-times-contents'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'all-collectorate-times-contents',
    'router_path' => 'all-collectorate-times-contents',
    'link_title' => 'All Collectorate Times Content',
    'options' => array(
      'identifier' => 'user-menu_all-collectorate-times-content:all-collectorate-times-contents',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'user-menu_collectorate-times-section:book',
  );
  // Exported menu link: user-menu_all-contents:all-content-
  $menu_links['user-menu_all-contents:all-content-'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'all-content-',
    'router_path' => 'all-content-',
    'link_title' => 'All Contents',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing page for all notice,tender and recruitment.',
      ),
      'identifier' => 'user-menu_all-contents:all-content-',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'user-menu_notice-tender-and-recruitment:node/add/general-content',
  );
  // Exported menu link: user-menu_all-galleries:all-galleries
  $menu_links['user-menu_all-galleries:all-galleries'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'all-galleries',
    'router_path' => 'all-galleries',
    'link_title' => 'All Galleries',
    'options' => array(
      'attributes' => array(
        'title' => 'List All Galleries.',
      ),
      'identifier' => 'user-menu_all-galleries:all-galleries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'user-menu_image-gallery:node/add/image_gallery',
  );
  // Exported menu link: user-menu_all-shared-doc:all-shared-docs
  $menu_links['user-menu_all-shared-doc:all-shared-docs'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'all-shared-docs',
    'router_path' => 'all-shared-docs',
    'link_title' => 'All Shared Doc',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_all-shared-doc:all-shared-docs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'user-menu_share-doc:my-shared-docs',
  );
  // Exported menu link: user-menu_charge-history-list:charge-history
  $menu_links['user-menu_charge-history-list:charge-history'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'charge-history',
    'router_path' => 'charge-history',
    'link_title' => 'Charge History List',
    'options' => array(
      'identifier' => 'user-menu_charge-history-list:charge-history',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_charge-history:node/add/charges-history',
  );
  // Exported menu link: user-menu_charge-history:node/add/charges-history
  $menu_links['user-menu_charge-history:node/add/charges-history'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/charges-history',
    'router_path' => 'node/add/charges-history',
    'link_title' => 'Charge History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_charge-history:node/add/charges-history',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: user-menu_collectorate-times-content:my-collectorate-times
  $menu_links['user-menu_collectorate-times-content:my-collectorate-times'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-collectorate-times',
    'router_path' => 'my-collectorate-times',
    'link_title' => 'Collectorate Times Content',
    'options' => array(
      'identifier' => 'user-menu_collectorate-times-content:my-collectorate-times',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_collectorate-times-magazines:book
  $menu_links['user-menu_collectorate-times-magazines:book'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Collectorate Times Magazines',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_collectorate-times-magazines:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_collectorate-times-section:book',
  );
  // Exported menu link: user-menu_collectorate-times-section:book
  $menu_links['user-menu_collectorate-times-section:book'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Collectorate Times Section',
    'options' => array(
      'attributes' => array(
        'title' => 'Book Section',
      ),
      'identifier' => 'user-menu_collectorate-times-section:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_docs-shared-with-me:shared-with-me
  $menu_links['user-menu_docs-shared-with-me:shared-with-me'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'shared-with-me',
    'router_path' => 'shared-with-me',
    'link_title' => 'Docs Shared With Me',
    'options' => array(
      'identifier' => 'user-menu_docs-shared-with-me:shared-with-me',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'user-menu_share-doc:my-shared-docs',
  );
  // Exported menu link: user-menu_edit-contents:all-charges-history
  $menu_links['user-menu_edit-contents:all-charges-history'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'all-charges-history',
    'router_path' => 'all-charges-history',
    'link_title' => 'Edit Contents',
    'options' => array(
      'identifier' => 'user-menu_edit-contents:all-charges-history',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: user-menu_feedback-on-my-content:feedback-on-my-content
  $menu_links['user-menu_feedback-on-my-content:feedback-on-my-content'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'feedback-on-my-content',
    'router_path' => 'feedback-on-my-content',
    'link_title' => 'Feedback On My content',
    'options' => array(
      'identifier' => 'user-menu_feedback-on-my-content:feedback-on-my-content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_feedback-section:node/add',
  );
  // Exported menu link: user-menu_feedback-section:node/add
  $menu_links['user-menu_feedback-section:node/add'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Feedback Section',
    'options' => array(
      'attributes' => array(
        'title' => 'Feedback Section',
      ),
      'identifier' => 'user-menu_feedback-section:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: user-menu_image-gallery:node/add/image_gallery
  $menu_links['user-menu_image-gallery:node/add/image_gallery'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/image_gallery',
    'router_path' => 'node/add',
    'link_title' => 'Image Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_image-gallery:node/add/image_gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: user-menu_images-added-by-me:image-list
  $menu_links['user-menu_images-added-by-me:image-list'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'image-list',
    'router_path' => 'image-list',
    'link_title' => 'Images Added By Me',
    'options' => array(
      'identifier' => 'user-menu_images-added-by-me:image-list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'user-menu_image-gallery:node/add/image_gallery',
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Exported menu link: user-menu_manage-collectorate-times:admin/content/book
  $menu_links['user-menu_manage-collectorate-times:admin/content/book'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/content/book',
    'router_path' => 'admin/content/book',
    'link_title' => 'Manage Collectorate Times',
    'options' => array(
      'attributes' => array(
        'title' => 'To Change Order of pages.',
      ),
      'identifier' => 'user-menu_manage-collectorate-times:admin/content/book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_collectorate-times-section:book',
  );
  // Exported menu link: user-menu_moderator-assignment:admin/config/workbench/access
  $menu_links['user-menu_moderator-assignment:admin/config/workbench/access'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/config/workbench/access',
    'router_path' => 'admin/config/workbench/access',
    'link_title' => 'Moderator Assignment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_moderator-assignment:admin/config/workbench/access',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_my-account:user
  $menu_links['user-menu_my-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Exported menu link: user-menu_my-collectorate-times-front-page:collectorate-front-page
  $menu_links['user-menu_my-collectorate-times-front-page:collectorate-front-page'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'collectorate-front-page',
    'router_path' => 'collectorate-front-page',
    'link_title' => 'My Collectorate Times Front Page',
    'options' => array(
      'identifier' => 'user-menu_my-collectorate-times-front-page:collectorate-front-page',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_collectorate-times-content:my-collectorate-times',
  );
  // Exported menu link: user-menu_my-collectorate-times-pages:my-collectorate-times-contents
  $menu_links['user-menu_my-collectorate-times-pages:my-collectorate-times-contents'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-collectorate-times-contents',
    'router_path' => 'my-collectorate-times-contents',
    'link_title' => 'My Collectorate Times Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_my-collectorate-times-pages:my-collectorate-times-contents',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'user-menu_collectorate-times-section:book',
  );
  // Exported menu link: user-menu_my-feedback-replies:my-replies
  $menu_links['user-menu_my-feedback-replies:my-replies'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-replies',
    'router_path' => 'my-replies',
    'link_title' => 'My Feedback Replies',
    'options' => array(
      'attributes' => array(
        'title' => 'Includes all replies of any feedback  on my contents,',
      ),
      'identifier' => 'user-menu_my-feedback-replies:my-replies',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_feedback-section:node/add',
  );
  // Exported menu link: user-menu_my-gallery:my-galleries
  $menu_links['user-menu_my-gallery:my-galleries'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-galleries',
    'router_path' => 'my-galleries',
    'link_title' => 'My Gallery',
    'options' => array(
      'attributes' => array(
        'title' => 'List  the galleries added by me.',
      ),
      'identifier' => 'user-menu_my-gallery:my-galleries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_image-gallery:node/add/image_gallery',
  );
  // Exported menu link: user-menu_my-noticetenders:my-contents
  $menu_links['user-menu_my-noticetenders:my-contents'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-contents',
    'router_path' => 'my-contents',
    'link_title' => 'My Notice/Tenders',
    'options' => array(
      'identifier' => 'user-menu_my-noticetenders:my-contents',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_notice-tender-and-recruitment:node/add/general-content',
  );
  // Exported menu link: user-menu_my-requested-report:my-requested-report
  $menu_links['user-menu_my-requested-report:my-requested-report'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-requested-report',
    'router_path' => 'my-requested-report',
    'link_title' => 'My Requested Report',
    'options' => array(
      'identifier' => 'user-menu_my-requested-report:my-requested-report',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_report:all-reports',
  );
  // Exported menu link: user-menu_my-shared-docs:my-shared-docs
  $menu_links['user-menu_my-shared-docs:my-shared-docs'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-shared-docs',
    'router_path' => 'my-shared-docs',
    'link_title' => 'My Shared Docs',
    'options' => array(
      'identifier' => 'user-menu_my-shared-docs:my-shared-docs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_share-doc:my-shared-docs',
  );
  // Exported menu link: user-menu_my-submitted-reports:my-submitted-reports1
  $menu_links['user-menu_my-submitted-reports:my-submitted-reports1'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-submitted-reports1',
    'router_path' => 'my-submitted-reports1',
    'link_title' => 'My Submitted Reports',
    'options' => array(
      'identifier' => 'user-menu_my-submitted-reports:my-submitted-reports1',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'user-menu_report:all-reports',
  );
  // Exported menu link: user-menu_notice-tender-and-recruitment:node/add/general-content
  $menu_links['user-menu_notice-tender-and-recruitment:node/add/general-content'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/general-content',
    'router_path' => 'node/add/general-content',
    'link_title' => 'Notice, tender and Recruitment',
    'options' => array(
      'attributes' => array(
        'title' => 'Notice, tender and Recruitment Section',
      ),
      'identifier' => 'user-menu_notice-tender-and-recruitment:node/add/general-content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: user-menu_report-request-:node/add/ask-for-report
  $menu_links['user-menu_report-request-:node/add/ask-for-report'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/ask-for-report',
    'router_path' => 'node/add/ask-for-report',
    'link_title' => 'Report Request ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_report-request-:node/add/ask-for-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_report:all-reports',
  );
  // Exported menu link: user-menu_report-request-for-me:report-request-by-others
  $menu_links['user-menu_report-request-for-me:report-request-by-others'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'report-request-by-others',
    'router_path' => 'report-request-by-others',
    'link_title' => 'Report Request For Me',
    'options' => array(
      'identifier' => 'user-menu_report-request-for-me:report-request-by-others',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'user-menu_report:all-reports',
  );
  // Exported menu link: user-menu_report:all-reports
  $menu_links['user-menu_report:all-reports'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'all-reports',
    'router_path' => 'all-reports',
    'link_title' => 'Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_report:all-reports',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: user-menu_share-doc:my-shared-docs
  $menu_links['user-menu_share-doc:my-shared-docs'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-shared-docs',
    'router_path' => 'my-shared-docs',
    'link_title' => 'Share Doc',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_share-doc:my-shared-docs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: user-menu_share-doc:node/add/share-doc
  $menu_links['user-menu_share-doc:node/add/share-doc'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/share-doc',
    'router_path' => 'node/add/share-doc',
    'link_title' => 'Share Doc',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_share-doc:node/add/share-doc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_share-doc:my-shared-docs',
  );
  // Exported menu link: user-menu_user-list:all-users
  $menu_links['user-menu_user-list:all-users'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'all-users',
    'router_path' => 'all-users',
    'link_title' => 'User list',
    'options' => array(
      'identifier' => 'user-menu_user-list:all-users',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion Menu');
  t('Account settings');
  t('Actions');
  t('Add Charge History');
  t('Add Collectorate Times Content');
  t('Add Content');
  t('Add Gallery');
  t('Add Image');
  t('Add content');
  t('Administration');
  t('Administrative Units');
  t('All Collectorate Times Content');
  t('All Contents');
  t('All Galleries');
  t('All Reports');
  t('All Shared Doc');
  t('Appearance');
  t('Archive');
  t('Article');
  t('Ask For  Report');
  t('BCW');
  t('Backup and Migrate');
  t('Basic page');
  t('Blocks');
  t('Blog');
  t('Books');
  t('Census');
  t('Charge History');
  t('Charge History List');
  t('Charges History');
  t('Clean URLs');
  t('Collectorate');
  t('Collectorate Times');
  t('Collectorate Times Content');
  t('Collectorate Times Front Page');
  t('Collectorate Times Magazines');
  t('Collectorate Times Section');
  t('Colorbox');
  t('Comments');
  t('Compose tips');
  t('Configuration');
  t('Content');
  t('Content Management');
  t('Content authoring');
  t('Content types');
  t('Cron');
  t('Cultural');
  t('DL & LRO');
  t('DRDC');
  t('Dashboard');
  t('Date API');
  t('Date Popup');
  t('Date and time');
  t('Departments');
  t('Dev & Planning');
  t('Development');
  t('District Profile');
  t('District at a glance');
  t('Docs Shared With Me');
  t('Document Repository');
  t('Edit Contents');
  t('Education');
  t('Election');
  t('FAQ');
  t('Features');
  t('Feedback');
  t('Feedback On My content');
  t('Feedback Reply');
  t('Feedback Section');
  t('Feeds importers');
  t('Feeds log');
  t('Field list');
  t('File system');
  t('Grid Field Formatter Settings');
  t('Help');
  t('High Contrast');
  t('Home');
  t('Home Programms');
  t('IP address blocking');
  t('Image');
  t('Image Gallery');
  t('Image styles');
  t('Image toolkit');
  t('Images Added By Me');
  t('Import');
  t('Introduction Page: Block');
  t('Introduction Page: Department');
  t('Introduction Page: Sub-Divisional');
  t('Line Departments');
  t('Log out');
  t('Logging and errors');
  t('MKDA');
  t('Magazine');
  t('Main menu');
  t('Maintenance mode');
  t('Manage Collectorate Times');
  t('Management');
  t('Media');
  t('Menus');
  t('Migrate example - dates');
  t('Moderator Assignment');
  t('Modules');
  t('My Account');
  t('My Collectorate Times Front Page');
  t('My Collectorate Times Pages');
  t('My Feedback Replies');
  t('My Gallery');
  t('My Notice/Tenders');
  t('My Requested Report');
  t('My Shared Docs');
  t('My Submitted Reports');
  t('My Workbench');
  t('Navigation');
  t('Notice, tender and Recruitment');
  t('P & RD');
  t('People');
  t('Performance');
  t('Photo Gallery');
  t('Political Setup');
  t('Publish content settings');
  t('RSS publishing');
  t('Rate widgets');
  t('Recent Post');
  t('Recent log messages');
  t('Regional and language');
  t('Regional settings');
  t('Report');
  t('Report Request ');
  t('Report Request For Me');
  t('Reports');
  t('Request');
  t('Result');
  t('Result: Import');
  t('Right to Information');
  t('Rules');
  t('SSA');
  t('Search');
  t('Search and metadata');
  t('Search settings');
  t('Share Doc');
  t('Shortcuts');
  t('Site information');
  t('Site map');
  t('Sports');
  t('Status report');
  t('Structure');
  t('Sub-Division');
  t('System');
  t('TB Mega Menu');
  t('Taxonomy');
  t('Text Resize');
  t('Text formats');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('Tourism');
  t('URL aliases');
  t('User interface');
  t('User list');
  t('User menu');
  t('Views');
  t('Views plugins');
  t('Voting API');
  t('Web services');
  t('What’s New');
  t('Workbench');
  t('Workbench Access');
  t('Workbench Moderation');
  t('Workflow');
  t('Wysiwyg profiles');
  t('XML sitemap');
  t('Zilla Parishad');
  t('jQuery update');
  t('test report');


  return $menu_links;
}

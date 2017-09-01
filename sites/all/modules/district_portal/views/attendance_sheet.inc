<?php
$view = new view();
$view->name = 'attendance_sheet';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'webform_submissions';
$view->human_name = 'Attendance Sheet';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Attendance Sheet';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  7 => '7',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '24';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'value_5',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['columns'] = array(
  'data' => 'data',
  'data_1' => 'data_1',
  'value' => 'value',
  'value_1' => 'value_1',
  'value_2' => 'value_2',
  'value_3' => 'value_3',
  'value_4' => 'value_4',
  'view_1' => 'view_1',
  'view' => 'view',
  'nothing' => 'nothing',
  'value_5' => 'value_5',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'data' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'data_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'value' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'value_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'value_2' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'value_3' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'value_4' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'view_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'view' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nothing' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'value_5' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Venue */
$handler->display->display_options['relationships']['data']['id'] = 'data';
$handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data']['field'] = 'data';
$handler->display->display_options['relationships']['data']['ui_name'] = 'Venue';
$handler->display->display_options['relationships']['data']['label'] = 'Submission Data :: Venue';
$handler->display->display_options['relationships']['data']['webform_nid'] = '208';
$handler->display->display_options['relationships']['data']['webform_cid'] = '16';
/* Relationship: Submission Data:Photograph */
$handler->display->display_options['relationships']['data_1']['id'] = 'data_1';
$handler->display->display_options['relationships']['data_1']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data_1']['field'] = 'data';
$handler->display->display_options['relationships']['data_1']['ui_name'] = 'Submission Data:Photograph';
$handler->display->display_options['relationships']['data_1']['label'] = 'Submission Data:Photograph';
$handler->display->display_options['relationships']['data_1']['webform_nid'] = '208';
$handler->display->display_options['relationships']['data_1']['webform_cid'] = '8';
/* Relationship: Submission Data:Signature */
$handler->display->display_options['relationships']['data_2']['id'] = 'data_2';
$handler->display->display_options['relationships']['data_2']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data_2']['field'] = 'data';
$handler->display->display_options['relationships']['data_2']['ui_name'] = 'Submission Data:Signature';
$handler->display->display_options['relationships']['data_2']['label'] = 'Submission Data:Signature';
$handler->display->display_options['relationships']['data_2']['webform_nid'] = '208';
$handler->display->display_options['relationships']['data_2']['webform_cid'] = '9';
/* Relationship: Submission Data: Admit Issued */
$handler->display->display_options['relationships']['data_3']['id'] = 'data_3';
$handler->display->display_options['relationships']['data_3']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data_3']['field'] = 'data';
$handler->display->display_options['relationships']['data_3']['ui_name'] = 'Submission Data: Admit Issued';
$handler->display->display_options['relationships']['data_3']['label'] = 'Submission Data: Admit Issued';
$handler->display->display_options['relationships']['data_3']['required'] = TRUE;
$handler->display->display_options['relationships']['data_3']['webform_nid'] = '208';
$handler->display->display_options['relationships']['data_3']['webform_cid'] = '15';
/* Relationship: Submission Data :: Roll No */
$handler->display->display_options['relationships']['data_4']['id'] = 'data_4';
$handler->display->display_options['relationships']['data_4']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data_4']['field'] = 'data';
$handler->display->display_options['relationships']['data_4']['ui_name'] = 'Submission Data :: Roll No';
$handler->display->display_options['relationships']['data_4']['label'] = 'Submission Data :: Roll No';
$handler->display->display_options['relationships']['data_4']['required'] = TRUE;
$handler->display->display_options['relationships']['data_4']['webform_nid'] = '208';
$handler->display->display_options['relationships']['data_4']['webform_cid'] = '17';
/* Field: Submission Data:Photograph */
$handler->display->display_options['fields']['data']['id'] = 'data';
$handler->display->display_options['fields']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['fields']['data']['field'] = 'data';
$handler->display->display_options['fields']['data']['relationship'] = 'data_1';
$handler->display->display_options['fields']['data']['ui_name'] = 'Submission Data:Photograph';
$handler->display->display_options['fields']['data']['label'] = 'Photograph Raw';
$handler->display->display_options['fields']['data']['exclude'] = TRUE;
$handler->display->display_options['fields']['data']['element_label_colon'] = FALSE;
/* Field: Submission Data:Signature */
$handler->display->display_options['fields']['data_1']['id'] = 'data_1';
$handler->display->display_options['fields']['data_1']['table'] = 'webform_submitted_data';
$handler->display->display_options['fields']['data_1']['field'] = 'data';
$handler->display->display_options['fields']['data_1']['relationship'] = 'data_2';
$handler->display->display_options['fields']['data_1']['ui_name'] = 'Submission Data:Signature';
$handler->display->display_options['fields']['data_1']['label'] = '';
$handler->display->display_options['fields']['data_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['data_1']['element_label_colon'] = FALSE;
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['label'] = '';
$handler->display->display_options['fields']['value']['webform_nid'] = '208';
$handler->display->display_options['fields']['value']['webform_cid'] = '17';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['label'] = '';
$handler->display->display_options['fields']['value_1']['webform_nid'] = '208';
$handler->display->display_options['fields']['value_1']['webform_cid'] = '1';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_2']['id'] = 'value_2';
$handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_2']['field'] = 'value';
$handler->display->display_options['fields']['value_2']['label'] = '';
$handler->display->display_options['fields']['value_2']['webform_nid'] = '208';
$handler->display->display_options['fields']['value_2']['webform_cid'] = '3';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_3']['id'] = 'value_3';
$handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_3']['field'] = 'value';
$handler->display->display_options['fields']['value_3']['label'] = '';
$handler->display->display_options['fields']['value_3']['webform_nid'] = '208';
$handler->display->display_options['fields']['value_3']['webform_cid'] = '4';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_4']['id'] = 'value_4';
$handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_4']['field'] = 'value';
$handler->display->display_options['fields']['value_4']['label'] = '';
$handler->display->display_options['fields']['value_4']['webform_nid'] = '208';
$handler->display->display_options['fields']['value_4']['webform_cid'] = '5';
/* Field: Global: View */
$handler->display->display_options['fields']['view_1']['id'] = 'view_1';
$handler->display->display_options['fields']['view_1']['table'] = 'views';
$handler->display->display_options['fields']['view_1']['field'] = 'view';
$handler->display->display_options['fields']['view_1']['label'] = 'Photograph';
$handler->display->display_options['fields']['view_1']['view'] = 'file_view';
$handler->display->display_options['fields']['view_1']['display'] = 'block_1';
$handler->display->display_options['fields']['view_1']['arguments'] = '[!data]';
/* Field: Signature View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['ui_name'] = 'Signature View';
$handler->display->display_options['fields']['view']['label'] = 'Specimen Signature';
$handler->display->display_options['fields']['view']['view'] = 'file_view';
$handler->display->display_options['fields']['view']['display'] = 'block_2';
$handler->display->display_options['fields']['view']['arguments'] = '[!data_1]';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Signature in front of the Invigilator';
/* Field: Webform submission data: Value */
$handler->display->display_options['fields']['value_5']['id'] = 'value_5';
$handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_5']['field'] = 'value';
$handler->display->display_options['fields']['value_5']['label'] = 'Venue';
$handler->display->display_options['fields']['value_5']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_5']['webform_nid'] = '208';
$handler->display->display_options['fields']['value_5']['webform_cid'] = '16';
/* Sort criterion: Webform submission data: Data field */
$handler->display->display_options['sorts']['data']['id'] = 'data';
$handler->display->display_options['sorts']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['sorts']['data']['field'] = 'data';
$handler->display->display_options['sorts']['data']['relationship'] = 'data_4';
/* Filter criterion: Venue Select */
$handler->display->display_options['filters']['data']['id'] = 'data';
$handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['filters']['data']['field'] = 'data';
$handler->display->display_options['filters']['data']['relationship'] = 'data';
$handler->display->display_options['filters']['data']['ui_name'] = 'Venue Select';
$handler->display->display_options['filters']['data']['exposed'] = TRUE;
$handler->display->display_options['filters']['data']['expose']['operator_id'] = 'data_op';
$handler->display->display_options['filters']['data']['expose']['label'] = 'Venue Code';
$handler->display->display_options['filters']['data']['expose']['operator'] = 'data_op';
$handler->display->display_options['filters']['data']['expose']['identifier'] = 'data';
$handler->display->display_options['filters']['data']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  6 => 0,
  5 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['data']['is_grouped'] = TRUE;
$handler->display->display_options['filters']['data']['group_info']['label'] = 'Venue';
$handler->display->display_options['filters']['data']['group_info']['identifier'] = 'data';
$handler->display->display_options['filters']['data']['group_info']['optional'] = FALSE;
$handler->display->display_options['filters']['data']['group_info']['group_items'] = array(
  1 => array(
    'title' => 'Keranitola Sri Sri Mohanananda Vidyamandir',
    'operator' => '=',
    'value' => 'V10',
  ),
  2 => array(
    'title' => 'Nirmal Hriday Ashram School',
    'operator' => '=',
    'value' => 'V11',
  ),
  3 => array(
    'title' => 'Rangamati Kiranmoyee High School',
    'operator' => '=',
    'value' => 'V12',
  ),
);
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '208';
/* Filter criterion: Webform submission data: Data field */
$handler->display->display_options['filters']['data_1']['id'] = 'data_1';
$handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
$handler->display->display_options['filters']['data_1']['field'] = 'data';
$handler->display->display_options['filters']['data_1']['relationship'] = 'data_3';
$handler->display->display_options['filters']['data_1']['value'] = 'Y';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'attendance-sheet';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Attendance Sheet';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'attendance-sheet';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['attendance_bcw'] = array(
  t('Master'),
  t('Attendance Sheet, DEO BCW'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('Submission Data :: Venue'),
  t('Submission Data:Photograph'),
  t('Submission Data:Signature'),
  t('Submission Data: Admit Issued'),
  t('Submission Data :: Roll No'),
  t('Photograph Raw'),
  t('Photograph'),
  t('Specimen Signature'),
  t('Signature in front of the Invigilator'),
  t('Venue'),
  t('Venue Code'),
  t('Page'),
);

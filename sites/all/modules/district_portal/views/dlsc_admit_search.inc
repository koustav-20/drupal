<?php

$view = new view();
$view->name = 'search_admit';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'webform_submissions';
$view->human_name = 'Search Admit Card';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Check Status of Application for Nirman Sahayak';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'input_required';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['text_input_required'] = '<div class="alert alert-info">
  <strong>Hi!</strong> Enter your Application ID and Mobile Number to check status of your application.
</div>
';
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
    'serial' => 'serial',
    'webform_all_fields' => 'webform_all_fields',
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<div class="alert alert-danger">
  <strong>Oops!</strong> Your application with the mentioned id and mobile number does not exists.
</div>
';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Submission Data :: Mobile */
$handler->display->display_options['relationships']['data']['id'] = 'data';
$handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data']['field'] = 'data';
$handler->display->display_options['relationships']['data']['ui_name'] = 'Submission Data :: Mobile';
$handler->display->display_options['relationships']['data']['label'] = 'Submission Data :: Mobile';
$handler->display->display_options['relationships']['data']['required'] = TRUE;
$handler->display->display_options['relationships']['data']['webform_nid'] = '300';
$handler->display->display_options['relationships']['data']['webform_cid'] = '2';
/* Field: Application ID(No Display) */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
$handler->display->display_options['fields']['sid']['ui_name'] = 'Application ID(No Display)';
$handler->display->display_options['fields']['sid']['label'] = '';
$handler->display->display_options['fields']['sid']['exclude'] = TRUE;
$handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sid']['separator'] = '';
/* Field: Mobile No(No Display) */
$handler->display->display_options['fields']['value_7']['id'] = 'value_7';
$handler->display->display_options['fields']['value_7']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_7']['field'] = 'value';
$handler->display->display_options['fields']['value_7']['ui_name'] = 'Mobile No(No Display)';
$handler->display->display_options['fields']['value_7']['label'] = 'Mobile No';
$handler->display->display_options['fields']['value_7']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_7']['webform_nid'] = '301';
$handler->display->display_options['fields']['value_7']['webform_cid'] = '2';
/* Field: Roll No(No Display) */
$handler->display->display_options['fields']['value_3']['id'] = 'value_3';
$handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_3']['field'] = 'value';
$handler->display->display_options['fields']['value_3']['ui_name'] = 'Roll No(No Display)';
$handler->display->display_options['fields']['value_3']['label'] = 'Roll No';
$handler->display->display_options['fields']['value_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_3']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_3']['webform_cid'] = '44';
/* Field: Venue(No Display) */
$handler->display->display_options['fields']['value_6']['id'] = 'value_6';
$handler->display->display_options['fields']['value_6']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_6']['field'] = 'value';
$handler->display->display_options['fields']['value_6']['ui_name'] = 'Venue(No Display)';
$handler->display->display_options['fields']['value_6']['label'] = 'Venue';
$handler->display->display_options['fields']['value_6']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_6']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_6']['webform_cid'] = '43';
/* Field: Applicant Name */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['ui_name'] = 'Applicant Name';
$handler->display->display_options['fields']['value_1']['label'] = 'Name of Applicant';
$handler->display->display_options['fields']['value_1']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_1']['webform_cid'] = '6';
/* Field: Father&#039;s Name */
$handler->display->display_options['fields']['value_4']['id'] = 'value_4';
$handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_4']['field'] = 'value';
$handler->display->display_options['fields']['value_4']['ui_name'] = 'Father\'s Name';
$handler->display->display_options['fields']['value_4']['label'] = 'Father\'s Name';
$handler->display->display_options['fields']['value_4']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_4']['webform_cid'] = '10';
/* Field: Category */
$handler->display->display_options['fields']['value_5']['id'] = 'value_5';
$handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_5']['field'] = 'value';
$handler->display->display_options['fields']['value_5']['ui_name'] = 'Category';
$handler->display->display_options['fields']['value_5']['label'] = 'Category';
$handler->display->display_options['fields']['value_5']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_5']['webform_cid'] = '8';
/* Field: E-Mail */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['ui_name'] = 'E-Mail';
$handler->display->display_options['fields']['value']['label'] = 'E-Mail Address';
$handler->display->display_options['fields']['value']['webform_nid'] = '300';
$handler->display->display_options['fields']['value']['webform_cid'] = '3';
/* Field: Admit Issued(No Display) */
$handler->display->display_options['fields']['value_2']['id'] = 'value_2';
$handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_2']['field'] = 'value';
$handler->display->display_options['fields']['value_2']['ui_name'] = 'Admit Issued(No Display)';
$handler->display->display_options['fields']['value_2']['label'] = 'Admit Card to be Issued';
$handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_2']['format'] = 'text';
$handler->display->display_options['fields']['value_2']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_2']['webform_cid'] = '42';
/* Field: Roll No */
$handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
$handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Roll No';
$handler->display->display_options['fields']['views_conditional_1']['label'] = '';
$handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_1']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional_1']['then'] = '<strong>Roll No:</strong> [value_3]';
$handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
/* Field: Exam Venue */
$handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
$handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_2']['ui_name'] = 'Exam Venue';
$handler->display->display_options['fields']['views_conditional_2']['label'] = '';
$handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_2']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional_2']['then'] = '<strong>Exam Venue:</strong> [value_6]';
$handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
/* Field: Current Status */
$handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Current Status';
$handler->display->display_options['fields']['views_conditional']['label'] = '';
$handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional']['then'] = '<div class="alert alert-success">
  <strong>Current Status:</strong> Approved. <a href="/dlsc/admit-card-ea?sid=[sid]&mobile=[value_7]">Download your provisional AdmitCard in PDF</a>.
</div>';
$handler->display->display_options['fields']['views_conditional']['or'] = '<div class="alert alert-danger">
  <strong>Current Status:</strong>[value_2]
</div>';
$handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
/* Filter criterion: Application ID */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'webform_submissions';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['ui_name'] = 'Application ID';
$handler->display->display_options['filters']['sid']['group'] = 1;
$handler->display->display_options['filters']['sid']['exposed'] = TRUE;
$handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['label'] = 'Application ID:';
$handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
$handler->display->display_options['filters']['sid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
);
/* Filter criterion: Mobile */
$handler->display->display_options['filters']['data']['id'] = 'data';
$handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['filters']['data']['field'] = 'data';
$handler->display->display_options['filters']['data']['relationship'] = 'data';
$handler->display->display_options['filters']['data']['ui_name'] = 'Mobile';
$handler->display->display_options['filters']['data']['exposed'] = TRUE;
$handler->display->display_options['filters']['data']['expose']['operator_id'] = 'data_op';
$handler->display->display_options['filters']['data']['expose']['label'] = 'Mobile No';
$handler->display->display_options['filters']['data']['expose']['operator'] = 'data_op';
$handler->display->display_options['filters']['data']['expose']['identifier'] = 'data';
$handler->display->display_options['filters']['data']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['data']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
);

/* Display: Check NS */
$handler = $view->new_display('block', 'Check NS', 'check_ns');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Nirman Sahayak :: Mobile */
$handler->display->display_options['relationships']['data']['id'] = 'data';
$handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data']['field'] = 'data';
$handler->display->display_options['relationships']['data']['ui_name'] = 'Nirman Sahayak :: Mobile';
$handler->display->display_options['relationships']['data']['label'] = 'Nirman Sahayak :: Mobile';
$handler->display->display_options['relationships']['data']['required'] = TRUE;
$handler->display->display_options['relationships']['data']['webform_nid'] = '300';
$handler->display->display_options['relationships']['data']['webform_cid'] = '2';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Application ID(No Display) */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
$handler->display->display_options['fields']['sid']['ui_name'] = 'Application ID(No Display)';
$handler->display->display_options['fields']['sid']['label'] = '';
$handler->display->display_options['fields']['sid']['exclude'] = TRUE;
$handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sid']['separator'] = '';
/* Field: NS :: Mobile No(No Display) */
$handler->display->display_options['fields']['value_7']['id'] = 'value_7';
$handler->display->display_options['fields']['value_7']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_7']['field'] = 'value';
$handler->display->display_options['fields']['value_7']['ui_name'] = 'NS :: Mobile No(No Display)';
$handler->display->display_options['fields']['value_7']['label'] = 'Mobile No';
$handler->display->display_options['fields']['value_7']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_7']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_7']['webform_cid'] = '2';
/* Field: Roll No(No Display) */
$handler->display->display_options['fields']['value_3']['id'] = 'value_3';
$handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_3']['field'] = 'value';
$handler->display->display_options['fields']['value_3']['ui_name'] = 'Roll No(No Display)';
$handler->display->display_options['fields']['value_3']['label'] = 'Roll No';
$handler->display->display_options['fields']['value_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_3']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_3']['webform_cid'] = '44';
/* Field: Venue(No Display) */
$handler->display->display_options['fields']['value_6']['id'] = 'value_6';
$handler->display->display_options['fields']['value_6']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_6']['field'] = 'value';
$handler->display->display_options['fields']['value_6']['ui_name'] = 'Venue(No Display)';
$handler->display->display_options['fields']['value_6']['label'] = 'Venue';
$handler->display->display_options['fields']['value_6']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_6']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_6']['webform_cid'] = '43';
/* Field: Applicant Name */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['ui_name'] = 'Applicant Name';
$handler->display->display_options['fields']['value_1']['label'] = 'Name of Applicant';
$handler->display->display_options['fields']['value_1']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_1']['webform_cid'] = '6';
/* Field: Father&#039;s Name */
$handler->display->display_options['fields']['value_4']['id'] = 'value_4';
$handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_4']['field'] = 'value';
$handler->display->display_options['fields']['value_4']['ui_name'] = 'Father\'s Name';
$handler->display->display_options['fields']['value_4']['label'] = 'Father\'s Name';
$handler->display->display_options['fields']['value_4']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_4']['webform_cid'] = '10';
/* Field: Category */
$handler->display->display_options['fields']['value_5']['id'] = 'value_5';
$handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_5']['field'] = 'value';
$handler->display->display_options['fields']['value_5']['ui_name'] = 'Category';
$handler->display->display_options['fields']['value_5']['label'] = 'Category';
$handler->display->display_options['fields']['value_5']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_5']['webform_cid'] = '8';
/* Field: E-Mail */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['ui_name'] = 'E-Mail';
$handler->display->display_options['fields']['value']['label'] = 'E-Mail Address';
$handler->display->display_options['fields']['value']['webform_nid'] = '300';
$handler->display->display_options['fields']['value']['webform_cid'] = '3';
/* Field: Admit Issued(No Display) */
$handler->display->display_options['fields']['value_2']['id'] = 'value_2';
$handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_2']['field'] = 'value';
$handler->display->display_options['fields']['value_2']['ui_name'] = 'Admit Issued(No Display)';
$handler->display->display_options['fields']['value_2']['label'] = 'Admit Card to be Issued';
$handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_2']['format'] = 'text';
$handler->display->display_options['fields']['value_2']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_2']['webform_cid'] = '42';
/* Field: Roll No */
$handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
$handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Roll No';
$handler->display->display_options['fields']['views_conditional_1']['label'] = '';
$handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_1']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional_1']['then'] = '<strong>Roll No:</strong> [value_3]';
$handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
/* Field: Exam Venue */
$handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
$handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_2']['ui_name'] = 'Exam Venue';
$handler->display->display_options['fields']['views_conditional_2']['label'] = '';
$handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_2']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional_2']['then'] = '<strong>Exam Venue:</strong> [value_6]';
$handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
/* Field: Current Status */
$handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Current Status';
$handler->display->display_options['fields']['views_conditional']['label'] = '';
$handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional']['then'] = '<div class="alert alert-success">
  <strong>Current Status:</strong> Approved. <a href="/dlsc/admit-card-ea?sid=[sid]&mobile=[value_7]">Download your provisional AdmitCard in PDF</a>.
</div>';
$handler->display->display_options['fields']['views_conditional']['or'] = '<div class="alert alert-danger">
  <strong>Current Status:</strong>[value_2]
</div>';
$handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;

/* Display: Check EA */
$handler = $view->new_display('block', 'Check EA', 'check_ea');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Check Status of Application for Executive Assistant';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Executive Assistant :: Mobile */
$handler->display->display_options['relationships']['data']['id'] = 'data';
$handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
$handler->display->display_options['relationships']['data']['field'] = 'data';
$handler->display->display_options['relationships']['data']['ui_name'] = 'Executive Assistant :: Mobile';
$handler->display->display_options['relationships']['data']['label'] = 'Executive Assistant :: Mobile';
$handler->display->display_options['relationships']['data']['required'] = TRUE;
$handler->display->display_options['relationships']['data']['webform_nid'] = '301';
$handler->display->display_options['relationships']['data']['webform_cid'] = '2';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Application ID(No Display) */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
$handler->display->display_options['fields']['sid']['ui_name'] = 'Application ID(No Display)';
$handler->display->display_options['fields']['sid']['label'] = '';
$handler->display->display_options['fields']['sid']['exclude'] = TRUE;
$handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sid']['separator'] = '';
/* Field: EA :: Mobile No(No Display) */
$handler->display->display_options['fields']['value_7']['id'] = 'value_7';
$handler->display->display_options['fields']['value_7']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_7']['field'] = 'value';
$handler->display->display_options['fields']['value_7']['ui_name'] = 'EA :: Mobile No(No Display)';
$handler->display->display_options['fields']['value_7']['label'] = 'Mobile No';
$handler->display->display_options['fields']['value_7']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_7']['webform_nid'] = '301';
$handler->display->display_options['fields']['value_7']['webform_cid'] = '2';
/* Field: Roll No(No Display) */
$handler->display->display_options['fields']['value_3']['id'] = 'value_3';
$handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_3']['field'] = 'value';
$handler->display->display_options['fields']['value_3']['ui_name'] = 'Roll No(No Display)';
$handler->display->display_options['fields']['value_3']['label'] = 'Roll No';
$handler->display->display_options['fields']['value_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_3']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_3']['webform_cid'] = '44';
/* Field: Venue(No Display) */
$handler->display->display_options['fields']['value_6']['id'] = 'value_6';
$handler->display->display_options['fields']['value_6']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_6']['field'] = 'value';
$handler->display->display_options['fields']['value_6']['ui_name'] = 'Venue(No Display)';
$handler->display->display_options['fields']['value_6']['label'] = 'Venue';
$handler->display->display_options['fields']['value_6']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_6']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_6']['webform_cid'] = '43';
/* Field: Applicant Name */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['ui_name'] = 'Applicant Name';
$handler->display->display_options['fields']['value_1']['label'] = 'Name of Applicant';
$handler->display->display_options['fields']['value_1']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_1']['webform_cid'] = '6';
/* Field: Father&#039;s Name */
$handler->display->display_options['fields']['value_4']['id'] = 'value_4';
$handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_4']['field'] = 'value';
$handler->display->display_options['fields']['value_4']['ui_name'] = 'Father\'s Name';
$handler->display->display_options['fields']['value_4']['label'] = 'Father\'s Name';
$handler->display->display_options['fields']['value_4']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_4']['webform_cid'] = '10';
/* Field: Category */
$handler->display->display_options['fields']['value_5']['id'] = 'value_5';
$handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_5']['field'] = 'value';
$handler->display->display_options['fields']['value_5']['ui_name'] = 'Category';
$handler->display->display_options['fields']['value_5']['label'] = 'Category';
$handler->display->display_options['fields']['value_5']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_5']['webform_cid'] = '8';
/* Field: E-Mail */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['ui_name'] = 'E-Mail';
$handler->display->display_options['fields']['value']['label'] = 'E-Mail Address';
$handler->display->display_options['fields']['value']['webform_nid'] = '300';
$handler->display->display_options['fields']['value']['webform_cid'] = '3';
/* Field: Admit Issued(No Display) */
$handler->display->display_options['fields']['value_2']['id'] = 'value_2';
$handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
$handler->display->display_options['fields']['value_2']['field'] = 'value';
$handler->display->display_options['fields']['value_2']['ui_name'] = 'Admit Issued(No Display)';
$handler->display->display_options['fields']['value_2']['label'] = 'Admit Card to be Issued';
$handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['value_2']['format'] = 'text';
$handler->display->display_options['fields']['value_2']['webform_nid'] = '300';
$handler->display->display_options['fields']['value_2']['webform_cid'] = '42';
/* Field: Roll No */
$handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
$handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Roll No';
$handler->display->display_options['fields']['views_conditional_1']['label'] = '';
$handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_1']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional_1']['then'] = '<strong>Roll No:</strong> [value_3]';
$handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
/* Field: Exam Venue */
$handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
$handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional_2']['ui_name'] = 'Exam Venue';
$handler->display->display_options['fields']['views_conditional_2']['label'] = '';
$handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional_2']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional_2']['then'] = '<strong>Exam Venue:</strong> [value_6]';
$handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
/* Field: Current Status */
$handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Current Status';
$handler->display->display_options['fields']['views_conditional']['label'] = '';
$handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional']['if'] = 'value_2';
$handler->display->display_options['fields']['views_conditional']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional']['equalto'] = 'Yes';
$handler->display->display_options['fields']['views_conditional']['then'] = '<div class="alert alert-success">
  <strong>Current Status:</strong> Approved. <a href="/dlsc/admit-card-ea?sid=[sid]&mobile=[value_7]">Download your provisional AdmitCard in PDF</a>.
</div>';
$handler->display->display_options['fields']['views_conditional']['or'] = '<div class="alert alert-danger">
  <strong>Current Status:</strong>[value_2]
</div>';
$handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Application ID */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'webform_submissions';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['ui_name'] = 'Application ID';
$handler->display->display_options['filters']['sid']['group'] = 1;
$handler->display->display_options['filters']['sid']['exposed'] = TRUE;
$handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['label'] = 'Application ID:';
$handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
$handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
$handler->display->display_options['filters']['sid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
);
/* Filter criterion: Mobile */
$handler->display->display_options['filters']['data']['id'] = 'data';
$handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
$handler->display->display_options['filters']['data']['field'] = 'data';
$handler->display->display_options['filters']['data']['relationship'] = 'data';
$handler->display->display_options['filters']['data']['ui_name'] = 'Mobile';
$handler->display->display_options['filters']['data']['exposed'] = TRUE;
$handler->display->display_options['filters']['data']['expose']['operator_id'] = 'data_op';
$handler->display->display_options['filters']['data']['expose']['label'] = 'Mobile No';
$handler->display->display_options['filters']['data']['expose']['operator'] = 'data_op';
$handler->display->display_options['filters']['data']['expose']['identifier'] = 'data';
$handler->display->display_options['filters']['data']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['data']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
);

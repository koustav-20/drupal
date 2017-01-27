<?php

$view = new view();
$view->name = 'file_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'file_managed';
$view->human_name = 'File view';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'File view';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: File: Rendered */
$handler->display->display_options['fields']['rendered']['id'] = 'rendered';
$handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
$handler->display->display_options['fields']['rendered']['field'] = 'rendered';
$handler->display->display_options['fields']['rendered']['label'] = '';
$handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered']['file_view_mode'] = 'preview';
/* Contextual filter: File: File ID */
$handler->display->display_options['arguments']['fid']['id'] = 'fid';
$handler->display->display_options['arguments']['fid']['table'] = 'file_managed';
$handler->display->display_options['arguments']['fid']['field'] = 'fid';
$handler->display->display_options['arguments']['fid']['default_action'] = 'default';
$handler->display->display_options['arguments']['fid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['fid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['fid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['fid']['summary_options']['items_per_page'] = '25';

/* Display: Single File View */
$handler = $view->new_display('block', 'Single File View', 'block');
<?php
$view = new view();
$view->name = 'related_contents';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Related Contents';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'More Contents';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
  'section' => 'section',
);
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'nid';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Nid */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['relationship'] = 'reverse_field_category_node';
$handler->display->display_options['sorts']['nid']['group_type'] = 'count';
$handler->display->display_options['sorts']['nid']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['not'] = TRUE;
/* Contextual filter: Content: Organizational Unit (field_organizational_unit) */
$handler->display->display_options['arguments']['field_organizational_unit_tid']['id'] = 'field_organizational_unit_tid';
$handler->display->display_options['arguments']['field_organizational_unit_tid']['table'] = 'field_data_field_organizational_unit';
$handler->display->display_options['arguments']['field_organizational_unit_tid']['field'] = 'field_organizational_unit_tid';
$handler->display->display_options['arguments']['field_organizational_unit_tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_organizational_unit_tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['field_organizational_unit_tid']['default_argument_options']['term_page'] = FALSE;
$handler->display->display_options['arguments']['field_organizational_unit_tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['field_organizational_unit_tid']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['field_organizational_unit_tid']['default_argument_options']['limit'] = TRUE;
$handler->display->display_options['arguments']['field_organizational_unit_tid']['default_argument_options']['vocabularies'] = array(
  'organizational_unit' => 'organizational_unit',
);
$handler->display->display_options['arguments']['field_organizational_unit_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_organizational_unit_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_organizational_unit_tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'article' => 'article',
  'page' => 'page',
  'book' => 'book',
  'notification' => 'notification',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'Related Contents';

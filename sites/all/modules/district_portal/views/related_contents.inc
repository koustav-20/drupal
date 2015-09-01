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
$handler->display->display_options['title'] = 'Related Pages';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  1 => '1',
);
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
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'organizational_unit' => 'organizational_unit',
  'tags' => 0,
);
/* Relationship: Taxonomy term: Content using Category */
$handler->display->display_options['relationships']['reverse_field_category_node']['id'] = 'reverse_field_category_node';
$handler->display->display_options['relationships']['reverse_field_category_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_category_node']['field'] = 'reverse_field_category_node';
$handler->display->display_options['relationships']['reverse_field_category_node']['relationship'] = 'term_node_tid';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_category_node';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Sort criterion: COUNT(Content: Nid) */
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
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['arguments']['nid_1']['table'] = 'node';
$handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
$handler->display->display_options['arguments']['nid_1']['relationship'] = 'reverse_field_category_node';
$handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid_1']['not'] = TRUE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

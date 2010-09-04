<?php

/**
 * Implementation of hook_views_default_views().
 */
function decoder_ring_views_default_views() {
  $views = array();

  // Exported view: collection_posts
  $view = new view;
  $view->name = 'collection_posts';
  $view->description = 'All posts within a collection';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Discussions';
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '2' => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 25;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_dr_date_value' => 'field_dr_date_value',
    'field_dr_user_name_value' => 'field_dr_user_name_value',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_dr_date_value';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_dr_date_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_dr_user_name_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'nothing' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No posts found for this collection.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Original author (field_dr_user) */
  $handler->display->display_options['relationships']['field_dr_user_nid']['id'] = 'field_dr_user_nid';
  $handler->display->display_options['relationships']['field_dr_user_nid']['table'] = 'node_data_field_dr_user';
  $handler->display->display_options['relationships']['field_dr_user_nid']['field'] = 'field_dr_user_nid';
  $handler->display->display_options['relationships']['field_dr_user_nid']['required'] = 1;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date (field_dr_date) */
  $handler->display->display_options['fields']['field_dr_date_value']['id'] = 'field_dr_date_value';
  $handler->display->display_options['fields']['field_dr_date_value']['table'] = 'node_data_field_dr_date';
  $handler->display->display_options['fields']['field_dr_date_value']['field'] = 'field_dr_date_value';
  $handler->display->display_options['fields']['field_dr_date_value']['label'] = 'Post date';
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['link_to_node'] = 0;
  /* Field: Content: Username (field_dr_user_name) */
  $handler->display->display_options['fields']['field_dr_user_name_value']['id'] = 'field_dr_user_name_value';
  $handler->display->display_options['fields']['field_dr_user_name_value']['table'] = 'node_data_field_dr_user_name';
  $handler->display->display_options['fields']['field_dr_user_name_value']['field'] = 'field_dr_user_name_value';
  $handler->display->display_options['fields']['field_dr_user_name_value']['relationship'] = 'field_dr_user_nid';
  $handler->display->display_options['fields']['field_dr_user_name_value']['label'] = 'Author';
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['label_type'] = 'custom';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Reports';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/reports';
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  /* Argument: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['arguments']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['title'] = 'Discussions';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_dr_collection_nid']['not'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_post' => 'dr_post',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Parent post (field_dr_parent) */
  $handler->display->display_options['filters']['field_dr_parent_nid']['id'] = 'field_dr_parent_nid';
  $handler->display->display_options['filters']['field_dr_parent_nid']['table'] = 'node_data_field_dr_parent';
  $handler->display->display_options['filters']['field_dr_parent_nid']['field'] = 'field_dr_parent_nid';
  $handler->display->display_options['filters']['field_dr_parent_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_dr_parent_nid']['expose']['operator'] = FALSE;
  
/* Display: Top-level Discussions Content pane */
  $handler = $view->new_display('panel_pane', 'Top-level Discussions Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_dr_collection_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Post collection (field_dr_collection)',
    ),
  );
  $handler->display->display_options['link_to_view'] = '1';
  
/* Display: Top-level discussions */
  $handler = $view->new_display('page', 'Top-level discussions', 'page_1');
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['path'] = 'collection/%/posts';

  $views[$view->name] = $view;

  // Exported view: collection_users
  $view = new view;
  $view->name = 'collection_users';
  $view->description = 'All users within a collection';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Users';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '2' => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_dr_user_avatar_fid' => 'field_dr_user_avatar_fid',
    'field_dr_user_name_value' => 'field_dr_user_name_value',
  );
  $handler->display->display_options['style_options']['default'] = 'field_dr_user_name_value';
  $handler->display->display_options['style_options']['info'] = array(
    'field_dr_user_avatar_fid' => array(
      'separator' => '',
    ),
    'field_dr_user_name_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No posts found for this collection.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Avatar (field_dr_user_avatar) */
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['id'] = 'field_dr_user_avatar_fid';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['table'] = 'node_data_field_dr_user_avatar';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['field'] = 'field_dr_user_avatar_fid';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['label'] = 'Avatar';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['format'] = 'avatar_linked';
  /* Field: Content: Username (field_dr_user_name) */
  $handler->display->display_options['fields']['field_dr_user_name_value']['id'] = 'field_dr_user_name_value';
  $handler->display->display_options['fields']['field_dr_user_name_value']['table'] = 'node_data_field_dr_user_name';
  $handler->display->display_options['fields']['field_dr_user_name_value']['field'] = 'field_dr_user_name_value';
  $handler->display->display_options['fields']['field_dr_user_name_value']['label'] = 'Username';
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['link_to_node'] = 1;
  /* Argument: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['arguments']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['title'] = 'Users';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_dr_collection_nid']['not'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_user' => 'dr_user',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Find a user';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  
/* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_user' => 'dr_user',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_dr_collection_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Post collection (field_dr_collection)',
    ),
  );
  $handler->display->display_options['link_to_view'] = '1';
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['path'] = 'collection/%/users';

  $views[$view->name] = $view;

  // Exported view: collections
  $view = new view;
  $view->name = 'collections';
  $view->description = 'A list of collections';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Collections';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '2' => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_collection' => 'dr_collection',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'collections';

  $views[$view->name] = $view;

  // Exported view: dr_admin
  $view = new view;
  $view->name = 'dr_admin';
  $view->description = 'General administration screen for Decoder Ring posts and users';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '&nbsp;',
    ),
    'timestamp' => array(
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'There are no objects satisfying the filter settings. Try changing them to get some results.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history_user';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  /* Field: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['fields']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['fields']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['fields']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['fields']['field_dr_collection_nid']['label'] = 'Post collection';
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['format'] = 'plain';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Node: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter: Node: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['case'] = 0;
  /* Filter: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['filters']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['filters']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['operator'] = 'field_dr_collection_nid_op';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['label'] = 'Post collection';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['identifier'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['reduce'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_collection' => 'dr_collection',
    'dr_post' => 'dr_post',
    'dr_user' => 'dr_user',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/dr/posts';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Decoder Ring';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Decoder Ring Posts';
  $handler->display->display_options['tab_options']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: dr_admin_posts_noparent
  $view = new view;
  $view->name = 'dr_admin_posts_noparent';
  $view->description = 'Admin view for posts without parents';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Posts without a parent';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '&nbsp;',
    ),
    'timestamp' => array(
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'There are no objects satisfying the filter settings. Try changing them to get some results.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history_user';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Field: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['fields']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['fields']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['fields']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['fields']['field_dr_collection_nid']['label'] = 'Post collection';
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['format'] = 'plain';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Node: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter: Node: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['case'] = 0;
  /* Filter: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['filters']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['filters']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['operator'] = 'field_dr_collection_nid_op';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['label'] = 'Post collection';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['identifier'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['reduce'] = 0;
  /* Filter: Content: Parent post (field_dr_parent) */
  $handler->display->display_options['filters']['field_dr_parent_nid']['id'] = 'field_dr_parent_nid';
  $handler->display->display_options['filters']['field_dr_parent_nid']['table'] = 'node_data_field_dr_parent';
  $handler->display->display_options['filters']['field_dr_parent_nid']['field'] = 'field_dr_parent_nid';
  $handler->display->display_options['filters']['field_dr_parent_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_dr_parent_nid']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_post' => 'dr_post',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/dr/posts-noparent';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Posts without parent';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: dr_admin_users
  $view = new view;
  $view->name = 'dr_admin_users';
  $view->description = 'User administration screen for Decoder Ring users';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_dr_user_avatar_fid' => 'field_dr_user_avatar_fid',
    'field_dr_user_name_value' => 'field_dr_user_name_value',
    'field_dr_collection_nid' => 'field_dr_collection_nid',
    'edit_node' => 'edit_node',
    'nothing' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_dr_user_avatar_fid' => array(
      'separator' => '',
    ),
    'field_dr_user_name_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_dr_collection_nid' => array(
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '  ',
    ),
    'nothing' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'There are no objects satisfying the filter settings. Try changing them to get some results.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Avatar (field_dr_user_avatar) */
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['id'] = 'field_dr_user_avatar_fid';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['table'] = 'node_data_field_dr_user_avatar';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['field'] = 'field_dr_user_avatar_fid';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['label'] = 'Avatar';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['format'] = 'avatar_linked';
  /* Field: Content: Username (field_dr_user_name) */
  $handler->display->display_options['fields']['field_dr_user_name_value']['id'] = 'field_dr_user_name_value';
  $handler->display->display_options['fields']['field_dr_user_name_value']['table'] = 'node_data_field_dr_user_name';
  $handler->display->display_options['fields']['field_dr_user_name_value']['field'] = 'field_dr_user_name_value';
  $handler->display->display_options['fields']['field_dr_user_name_value']['label'] = 'Username';
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['link_to_node'] = 1;
  /* Field: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['fields']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['fields']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['fields']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['fields']['field_dr_collection_nid']['label'] = 'Post collection';
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_dr_collection_nid']['format'] = 'plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'reports';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/reports';
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Sort criterion: Node: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter: Node: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['case'] = 0;
  /* Filter: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['filters']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['filters']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['operator'] = 'field_dr_collection_nid_op';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['label'] = 'Post collection';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['identifier'] = 'field_dr_collection_nid';
  $handler->display->display_options['filters']['field_dr_collection_nid']['expose']['reduce'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_user' => 'dr_user',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/dr/users';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Users';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Decoder Ring Posts';
  $handler->display->display_options['tab_options']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: dr_chunks2
  $view = new view;
  $view->name = 'dr_chunks2';
  $view->description = 'Node chunks';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'term_chunk';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Tagged chunks';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '2' => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 25;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'text' => 'text',
    'name' => 'name',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'text' => array(
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No text chunks have been tagged for that collection.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Taxonomy: Chunk Term ID */
  $handler->display->display_options['relationships']['tid']['id'] = 'tid';
  $handler->display->display_options['relationships']['tid']['table'] = 'term_chunk';
  $handler->display->display_options['relationships']['tid']['field'] = 'tid';
  $handler->display->display_options['relationships']['tid']['required'] = 1;
  /* Relationship: Taxonomy: Chunk Node ID */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'term_chunk';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Taxonomy: Chunk Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_chunk';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  /* Field: Taxonomy: Term */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'tid';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'dr-chunks/!1/[tid]';
  $handler->display->display_options['fields']['name']['alter']['alt'] = 'Filter to show chunks tagged "[name]" in %1';
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Field: Taxonomy: Chunk text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'term_chunk';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['text']['empty_zero'] = 0;
  /* Sort criterion: Content: Post date (field_dr_date) */
  $handler->display->display_options['sorts']['field_dr_date_value']['id'] = 'field_dr_date_value';
  $handler->display->display_options['sorts']['field_dr_date_value']['table'] = 'node_data_field_dr_date';
  $handler->display->display_options['sorts']['field_dr_date_value']['field'] = 'field_dr_date_value';
  $handler->display->display_options['sorts']['field_dr_date_value']['relationship'] = 'nid';
  /* Argument: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['arguments']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['style_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_dr_collection_nid']['style_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['title'] = 'Tagged chunks in %1';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_dr_collection_nid']['not'] = 0;
  /* Argument: Taxonomy: Chunk Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'term_chunk';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['title'] = 'Chunks tagged "%2" in %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_post' => 'dr_post',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'collection/%/chunks';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Chunks';
  $handler->display->display_options['menu']['weight'] = '0';
  
/* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_dr_collection_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Post collection (field_dr_collection)',
    ),
    'tid' => array(
      'type' => 'none',
      'context' => 'node.mod-????',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy: Chunk Term ID',
    ),
  );
  $handler->display->display_options['link_to_view'] = '1';

  $views[$view->name] = $view;

  // Exported view: dr_collection_search
  $view = new view;
  $view->name = 'dr_collection_search';
  $view->description = 'Search a collection';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '2' => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'teaser' => 'teaser',
    'title' => 'title',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'teaser' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Teaser */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['teaser']['empty_zero'] = 0;
  /* Field: Content: Parent post (field_dr_parent) */
  $handler->display->display_options['fields']['field_dr_parent_nid']['id'] = 'field_dr_parent_nid';
  $handler->display->display_options['fields']['field_dr_parent_nid']['table'] = 'node_data_field_dr_parent';
  $handler->display->display_options['fields']['field_dr_parent_nid']['field'] = 'field_dr_parent_nid';
  $handler->display->display_options['fields']['field_dr_parent_nid']['label'] = 'Parent post';
  $handler->display->display_options['fields']['field_dr_parent_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_parent_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_parent_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_parent_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_parent_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_parent_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_parent_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_parent_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_parent_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_parent_nid']['link_to_node'] = 0;
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Sort criterion: Search: Score */
  $handler->display->display_options['sorts']['score']['id'] = 'score';
  $handler->display->display_options['sorts']['score']['table'] = 'search_index';
  $handler->display->display_options['sorts']['score']['field'] = 'score';
  $handler->display->display_options['sorts']['score']['order'] = 'DESC';
  /* Argument: Content: Post collection (field_dr_collection) */
  $handler->display->display_options['arguments']['field_dr_collection_nid']['id'] = 'field_dr_collection_nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['table'] = 'node_data_field_dr_collection';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['field'] = 'field_dr_collection_nid';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['title'] = 'Search %1';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dr_collection_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_dr_collection_nid']['not'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  /* Filter: Node: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['case'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_post' => 'dr_post',
    'dr_user' => 'dr_user',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'collection/%/search';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Search';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: dr_post_children
  $view = new view;
  $view->name = 'dr_post_children';
  $view->description = 'Shows all posts that are the children of a given post.';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Follow-up posts';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '2' => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Relationship: Content: Original author (field_dr_user) */
  $handler->display->display_options['relationships']['field_dr_user_nid']['id'] = 'field_dr_user_nid';
  $handler->display->display_options['relationships']['field_dr_user_nid']['table'] = 'node_data_field_dr_user';
  $handler->display->display_options['relationships']['field_dr_user_nid']['field'] = 'field_dr_user_nid';
  $handler->display->display_options['relationships']['field_dr_user_nid']['required'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a id="node-[nid]" />';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Avatar (field_dr_user_avatar) */
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['id'] = 'field_dr_user_avatar_fid';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['table'] = 'node_data_field_dr_user_avatar';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['field'] = 'field_dr_user_avatar_fid';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['relationship'] = 'field_dr_user_nid';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_dr_user_avatar_fid']['format'] = 'avatar_linked';
  /* Field: Content: Username (field_dr_user_name) */
  $handler->display->display_options['fields']['field_dr_user_name_value']['id'] = 'field_dr_user_name_value';
  $handler->display->display_options['fields']['field_dr_user_name_value']['table'] = 'node_data_field_dr_user_name';
  $handler->display->display_options['fields']['field_dr_user_name_value']['field'] = 'field_dr_user_name_value';
  $handler->display->display_options['fields']['field_dr_user_name_value']['relationship'] = 'field_dr_user_nid';
  $handler->display->display_options['fields']['field_dr_user_name_value']['label'] = 'Original author';
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_user_name_value']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_dr_user_name_value']['label_type'] = 'custom';
  /* Field: Content: Post date (field_dr_date) */
  $handler->display->display_options['fields']['field_dr_date_value']['id'] = 'field_dr_date_value';
  $handler->display->display_options['fields']['field_dr_date_value']['table'] = 'node_data_field_dr_date';
  $handler->display->display_options['fields']['field_dr_date_value']['field'] = 'field_dr_date_value';
  $handler->display->display_options['fields']['field_dr_date_value']['label'] = 'Post date';
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['label_type'] = 'custom';
  /* Field: Customfield: PHP code */
  $handler->display->display_options['fields']['phpcode']['id'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['table'] = 'customfield';
  $handler->display->display_options['fields']['phpcode']['field'] = 'phpcode';
  $handler->display->display_options['fields']['phpcode']['label'] = '';
  $handler->display->display_options['fields']['phpcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phpcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phpcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phpcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phpcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phpcode']['value'] = '<?php
$options = array(
  \'query\' => array(\'destination\' => $_GET[\'q\'] .\'?page=\'. $_GET[\'page\'] .\'#\'. \'node-\'. $data->nid),
  \'fragment\' => \'edit-body-wrapper\',
);
print \'<div class="links">\'. l(t(\'Edit this\'), \'node/\'. $data->nid .\'/edit\', $options) .\' \'. flag_create_link(\'bookmarks\', $data->nid) .\' \'. flag_create_link(\'reviewed\', $data->nid) .\'</div>\';
?>';
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Sort criterion: Content: Post date (field_dr_date) */
  $handler->display->display_options['sorts']['field_dr_date_value']['id'] = 'field_dr_date_value';
  $handler->display->display_options['sorts']['field_dr_date_value']['table'] = 'node_data_field_dr_date';
  $handler->display->display_options['sorts']['field_dr_date_value']['field'] = 'field_dr_date_value';
  /* Argument: Content: Parent post (field_dr_parent) */
  $handler->display->display_options['arguments']['field_dr_parent_nid']['id'] = 'field_dr_parent_nid';
  $handler->display->display_options['arguments']['field_dr_parent_nid']['table'] = 'node_data_field_dr_parent';
  $handler->display->display_options['arguments']['field_dr_parent_nid']['field'] = 'field_dr_parent_nid';
  $handler->display->display_options['arguments']['field_dr_parent_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_dr_parent_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dr_parent_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dr_parent_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_dr_parent_nid']['not'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_post' => 'dr_post',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  
/* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_dr_parent_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Parent post (field_dr_parent)',
    ),
  );

  $views[$view->name] = $view;

  // Exported view: dr_posts_nodereference
  $view = new view;
  $view->name = 'dr_posts_nodereference';
  $view->description = 'View for use in node reference fields as a selector for posts.';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '2' => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: External post identifier (field_dr_external_id) */
  $handler->display->display_options['fields']['field_dr_external_id_value']['id'] = 'field_dr_external_id_value';
  $handler->display->display_options['fields']['field_dr_external_id_value']['table'] = 'node_data_field_dr_external_id';
  $handler->display->display_options['fields']['field_dr_external_id_value']['field'] = 'field_dr_external_id_value';
  $handler->display->display_options['fields']['field_dr_external_id_value']['label'] = 'External post identifier';
  $handler->display->display_options['fields']['field_dr_external_id_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dr_external_id_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_external_id_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_external_id_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_external_id_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_external_id_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_external_id_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_external_id_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_external_id_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_external_id_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_external_id_value']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_dr_external_id_value] | [nid])';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: Content: Post date (field_dr_date) */
  $handler->display->display_options['sorts']['field_dr_date_value']['id'] = 'field_dr_date_value';
  $handler->display->display_options['sorts']['field_dr_date_value']['table'] = 'node_data_field_dr_date';
  $handler->display->display_options['sorts']['field_dr_date_value']['field'] = 'field_dr_date_value';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_post' => 'dr_post',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  $views[$view->name] = $view;

  // Exported view: dr_user_posts
  $view = new view;
  $view->name = 'dr_user_posts';
  $view->description = 'All posts for a given user';
  $view->tag = 'decoder-ring';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 25;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_dr_date_value' => 'field_dr_date_value',
    'field_dr_title_value' => 'field_dr_title_value',
  );
  $handler->display->display_options['style_options']['default'] = 'field_dr_date_value';
  $handler->display->display_options['style_options']['info'] = array(
    'field_dr_date_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_dr_title_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No posts found for that user.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Title (field_dr_title) */
  $handler->display->display_options['fields']['field_dr_title_value']['id'] = 'field_dr_title_value';
  $handler->display->display_options['fields']['field_dr_title_value']['table'] = 'node_data_field_dr_title';
  $handler->display->display_options['fields']['field_dr_title_value']['field'] = 'field_dr_title_value';
  $handler->display->display_options['fields']['field_dr_title_value']['label'] = 'Title';
  $handler->display->display_options['fields']['field_dr_title_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_title_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_title_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_title_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_title_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_title_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_title_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_title_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_title_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_title_value']['link_to_node'] = 1;
  /* Field: Content: Post date (field_dr_date) */
  $handler->display->display_options['fields']['field_dr_date_value']['id'] = 'field_dr_date_value';
  $handler->display->display_options['fields']['field_dr_date_value']['table'] = 'node_data_field_dr_date';
  $handler->display->display_options['fields']['field_dr_date_value']['field'] = 'field_dr_date_value';
  $handler->display->display_options['fields']['field_dr_date_value']['label'] = 'Post date';
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_date_value']['link_to_node'] = 0;
  /* Argument: Content: Original author (field_dr_user) */
  $handler->display->display_options['arguments']['field_dr_user_nid']['id'] = 'field_dr_user_nid';
  $handler->display->display_options['arguments']['field_dr_user_nid']['table'] = 'node_data_field_dr_user';
  $handler->display->display_options['arguments']['field_dr_user_nid']['field'] = 'field_dr_user_nid';
  $handler->display->display_options['arguments']['field_dr_user_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_dr_user_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dr_user_nid']['title'] = 'Posts by %1';
  $handler->display->display_options['arguments']['field_dr_user_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dr_user_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_dr_user_nid']['not'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_post' => 'dr_post',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search posts by this user';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  
/* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_post' => 'dr_post',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_dr_user_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Original author (field_dr_user)',
    ),
  );
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'dr-user-search';
  $handler->display->display_options['menu']['title'] = 'Search';
  $handler->display->display_options['menu']['description'] = 'Search posts by this user';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: dr_users_nodereference
  $view = new view;
  $view->name = 'dr_users_nodereference';
  $view->description = 'View for use in node reference fields as a selector for users.';
  $view->tag = 'dr';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: External user identifier (field_dr_user_external_id) */
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['id'] = 'field_dr_user_external_id_value';
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['table'] = 'node_data_field_dr_user_external_id';
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['field'] = 'field_dr_user_external_id_value';
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_dr_user_external_id_value']['label_type'] = 'none';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_dr_user_external_id_value])';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dr_user' => 'dr_user',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  $views[$view->name] = $view;

  return $views;
}

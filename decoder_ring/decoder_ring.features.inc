<?php

/**
 * Implementation of hook_content_default_fields().
 */
function decoder_ring_content_default_fields() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.defaults');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function decoder_ring_ctools_plugin_api() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.defaults');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_feeds_importer_default().
 */
function decoder_ring_feeds_importer_default() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.defaults');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_feeds_importer_default', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function decoder_ring_fieldgroup_default_groups() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.defaults');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function decoder_ring_imagecache_default_presets() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.defaults');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function decoder_ring_node_info() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.features.node');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_node_info', $args);
}

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function decoder_ring_default_page_manager_handlers() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.defaults');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_default_page_manager_handlers', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function decoder_ring_default_page_manager_pages() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.defaults');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_default_page_manager_pages', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function decoder_ring_strongarm() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.defaults');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function decoder_ring_views_default_views() {
  module_load_include('inc', 'decoder_ring', 'decoder_ring.features.views');
  $args = func_get_args();
  return call_user_func_array('_decoder_ring_views_default_views', $args);
}

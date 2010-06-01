<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _decoder_ring_content_default_fields() {
  $fields = array();

  // Exported field: field_dr_collection
  $fields[] = array(
    'field_name' => 'field_dr_collection',
    'type_name' => 'dr_post',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_dr_org',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'dr_collection' => 'dr_collection',
      'dr_post' => 0,
      'dr_user' => 0,
      'page' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'advanced_view_args_php' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Post collection',
      'weight' => '3',
      'description' => 'Post collections are used to organize large numbers of posts in query-able units.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_dr_date
  $fields[] = array(
    'field_name' => 'field_dr_date',
    'type_name' => 'dr_post',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_dr_org',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datestamp',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'user',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => 1,
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Post date',
      'weight' => 0,
      'description' => 'The original date of this post.',
      'type' => 'date_text',
      'module' => 'date',
    ),
  );

  // Exported field: field_dr_external_id
  $fields[] = array(
    'field_name' => 'field_dr_external_id',
    'type_name' => 'dr_post',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_dr_org',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_dr_external_id][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'External post identifier',
      'weight' => '2',
      'description' => 'If this post has an external identifier that you\'d like to use within Decoder Ring as a way to track the post internally, list it here.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dr_parent
  $fields[] = array(
    'field_name' => 'field_dr_parent',
    'type_name' => 'dr_post',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_dr_org',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'dr_collection' => 0,
      'dr_post' => 0,
      'dr_user' => 0,
      'page' => 0,
      'story' => 0,
    ),
    'advanced_view' => 'dr_posts_nodereference',
    'advanced_view_args' => '',
    'advanced_view_args_php' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_dr_parent][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent post',
      'weight' => '1',
      'description' => 'If this post is in reply to another post, identify it here. If this is the original post in a discussion, leave this field empty.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_dr_title
  $fields[] = array(
    'field_name' => 'field_dr_title',
    'type_name' => 'dr_post',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_dr_title][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Title',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dr_user
  $fields[] = array(
    'field_name' => 'field_dr_user',
    'type_name' => 'dr_post',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'dr_collection' => 0,
      'dr_post' => 0,
      'dr_user' => 0,
      'page' => 0,
      'story' => 0,
    ),
    'advanced_view' => 'dr_users_nodereference',
    'advanced_view_args' => '',
    'advanced_view_args_php' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_dr_user][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Original author',
      'weight' => '-2',
      'description' => 'The username of the original author of this post.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_dr_collection
  $fields[] = array(
    'field_name' => 'field_dr_collection',
    'type_name' => 'dr_user',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'dr_collection' => 'dr_collection',
      'dr_post' => 0,
      'dr_user' => 0,
      'page' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'advanced_view_args_php' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Post collection',
      'weight' => '2',
      'description' => 'Post collections are used to organize large numbers of posts in query-able units.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_dr_user_avatar
  $fields[] = array(
    'field_name' => 'field_dr_user_avatar',
    'type_name' => 'dr_user',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_dr_user_attrs',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'avatar_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'avatar_linked',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'dr_user/images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'Dummy_user.png',
        'filepath' => 'sites/default/files/imagefield_default_images/Dummy_user.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/Dummy_user.png',
        'filesize' => 12613,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1274573561,
        'fid' => '1',
      ),
      'use_default_image' => 1,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_avatar' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Avatar',
      'weight' => '-2',
      'description' => 'The user\'s avatar, or a picture of this user.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_dr_user_date
  $fields[] = array(
    'field_name' => 'field_dr_user_date',
    'type_name' => 'dr_user',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datestamp',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'user',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => 1,
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Creation date',
      'weight' => 0,
      'description' => 'The original creation date of this user\'s account (if relevant).',
      'type' => 'date_text',
      'module' => 'date',
    ),
  );

  // Exported field: field_dr_user_external_id
  $fields[] = array(
    'field_name' => 'field_dr_user_external_id',
    'type_name' => 'dr_user',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_dr_user_external_id][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'External user identifier',
      'weight' => '1',
      'description' => 'The external unique identifier for this user. i.e. "1234" or "bigmama09"',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dr_user_name
  $fields[] = array(
    'field_name' => 'field_dr_user_name',
    'type_name' => 'dr_user',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_dr_user_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Username',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_dr_user_rank
  $fields[] = array(
    'field_name' => 'field_dr_user_rank',
    'type_name' => 'dr_user',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_dr_user_attrs',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_dr_user_rank][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Rank',
      'weight' => '-1',
      'description' => 'The user\'s rank within the external user system. i.e. "Moderator" or "Office linebacker"',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Avatar'),
    t('Creation date'),
    t('External post identifier'),
    t('External user identifier'),
    t('Original author'),
    t('Parent post'),
    t('Post collection'),
    t('Post date'),
    t('Rank'),
    t('Title'),
    t('Username'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _decoder_ring_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_feeds_importer_default().
 */
function _decoder_ring_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dr_post_importer';
  $feeds_importer->config = array(
    'name' => 'Decoder Ring Post Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'dr_post',
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          '0' => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          '1' => array(
            'source' => 'created',
            'target' => 'field_dr_date:start',
            'unique' => FALSE,
          ),
          '2' => array(
            'source' => 'mid',
            'target' => 'field_dr_external_id',
            'unique' => FALSE,
          ),
          '3' => array(
            'source' => 'collection',
            'target' => 'field_dr_collection',
            'unique' => FALSE,
          ),
          '4' => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          '5' => array(
            'source' => 'refUser',
            'target' => 'field_dr_user',
            'unique' => FALSE,
          ),
          '6' => array(
            'source' => 'title',
            'target' => 'field_dr_title',
            'unique' => FALSE,
          ),
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['dr_post_importer'] = $feeds_importer;
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dr_user_importer';
  $feeds_importer->config = array(
    'name' => 'Decoder Ring User Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'dr_user',
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          '0' => array(
            'source' => 'uid',
            'target' => 'field_dr_user_external_id',
            'unique' => FALSE,
          ),
          '1' => array(
            'source' => 'created',
            'target' => 'field_dr_user_date:start',
            'unique' => FALSE,
          ),
          '2' => array(
            'source' => 'rank',
            'target' => 'field_dr_user_rank',
            'unique' => FALSE,
          ),
          '3' => array(
            'source' => 'avatar',
            'target' => 'field_dr_user_avatar',
            'unique' => FALSE,
          ),
          '4' => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          '5' => array(
            'source' => 'username',
            'target' => 'field_dr_user_name',
            'unique' => FALSE,
          ),
          '6' => array(
            'source' => 'username',
            'target' => 'title',
            'unique' => FALSE,
          ),
          '7' => array(
            'source' => 'collection',
            'target' => 'field_dr_collection',
            'unique' => FALSE,
          ),
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['dr_user_importer'] = $feeds_importer;
  return $export;
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _decoder_ring_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_dr_org
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'dr_post',
    'group_name' => 'group_dr_org',
    'label' => 'Post organization',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-1',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_dr_date',
      '1' => 'field_dr_parent',
      '2' => 'field_dr_external_id',
      '3' => 'field_dr_collection',
    ),
  );

  // Exported group: group_dr_user_attrs
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'dr_user',
    'group_name' => 'group_dr_user_attrs',
    'label' => 'Other attributes',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_dr_user_avatar',
      '1' => 'field_dr_user_rank',
      '2' => 'field_dr_user_date',
      '3' => 'field_dr_user_external_id',
      '4' => 'field_dr_collection',
    ),
  );

  // Translatables
  array(
    t('Other attributes'),
    t('Post organization'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _decoder_ring_imagecache_default_presets() {
  $items = array(
    'avatar' => array(
      'presetname' => 'avatar',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '50',
            'height' => '50',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_default_page_manager_handlers().
 */
function _decoder_ring_default_page_manager_handlers() {
  $export = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Collection Node View',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        '0' => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dr_collection' => 'dr_collection',
            ),
          ),
          'context' => 'argument_nid_1',
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'collection_posts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
      'context' => array(
        '0' => 'argument_nid_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['bottom'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Flags',
      'title' => '',
      'body' => '<?php
$nid = %node:nid;
print flag_create_link(\'bookmarks\', $nid);
?>',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['bottom'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'collection_posts-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        '0' => 'argument_nid_1',
      ),
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'field_dr_date_value' => 0,
        'field_dr_user_name_value' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Discussions',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['left'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'dr_chunks2-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        '0' => 'argument_nid_1',
      ),
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 0,
        'tid' => 1,
        'name' => 1,
        'text' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => 'Tagged chunks',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-4'] = $pane;
    $display->panels['left'][1] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'collection_users-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        '0' => 'argument_nid_1',
      ),
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '10',
      'fields_override' => array(
        'field_dr_user_avatar_fid' => 1,
        'field_dr_user_name_value' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['right'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'top';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-6'] = $pane;
    $display->panels['top'][0] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['node_view_panel_context'] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Post Node View',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      '0' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 1,
        'identifier' => 'Author node',
        'keyword' => 'author-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_user',
        ),
      ),
      '1' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 2,
        'identifier' => 'Collection node',
        'keyword' => 'collection-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_collection',
        ),
      ),
      '2' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 3,
        'identifier' => 'Parent node',
        'keyword' => 'parent-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_parent',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        '0' => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dr_post' => 'dr_post',
            ),
          ),
          'context' => 'argument_nid_1',
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'content_field';
    $pane->subtype = 'field_dr_user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'content_field';
    $pane->subtype = 'field_dr_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Flags',
      'title' => '',
      'body' => '<?php
$nid = %node:nid;
print l(t(\'Edit this\'), \'node/\'. $nid .\'/edit\') .\' \'. flag_create_link(\'bookmarks\', $nid) .\' \'. flag_create_link(\'reviewed\', $nid);
?>',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'links',
    );
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dr_post_children-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        '0' => 'argument_nid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-5'] = $pane;
    $display->panels['middle'][4] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb override',
      'title' => '',
      'body' => '<?php
$collection_nid = (int)"%collection-nodereference:nid";
$collection_title = "%collection-nodereference:title";
$parent_test = (int)"%parent-nodereference:nid";
$parent_nid = NULL;
if (isset($parent_test) && $parent_test) {
  $parent_nid = $parent_test;
  $parent_title = "%parent-nodereference:title";
}
$breadcrumb = array();
$breadcrumb[] = l(\'Home\', \'<front>\');
$breadcrumb[] = l($collection_title, \'node/\'. $collection_nid);
if ($parent_nid) {
  $breadcrumb[] = l($parent_title, \'node/\'. $parent_nid);
}
drupal_set_breadcrumb($breadcrumb);',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-6'] = $pane;
    $display->panels['middle'][5] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['node_view_panel_context_2'] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'User Node View',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      '0' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 1,
        'identifier' => 'Collection node',
        'keyword' => 'collection-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_collection',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        '0' => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dr_user' => 'dr_user',
            ),
          ),
          'context' => 'argument_nid_1',
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'dr_user_posts-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '5',
      'fields_override' => array(
        'field_dr_title_value' => 1,
        'field_dr_date_value' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'context' => array(
        '0' => 'argument_nid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['bottom'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_dr_user_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'plain',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['left'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_dr_user_avatar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'avatar_default',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['left'][1] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_dr_user_rank';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-4'] = $pane;
    $display->panels['left'][2] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb override',
      'title' => '',
      'body' => '<?php
$collection_nid = (int)"%collection-nodereference:nid";
$collection_title = "%collection-nodereference:title";

$breadcrumb = array();
$breadcrumb[] = l(\'Home\', \'<front>\');
$breadcrumb[] = l($collection_title, \'node/\'. $collection_nid);

drupal_set_breadcrumb($breadcrumb);',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-5'] = $pane;
    $display->panels['left'][3] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'right';
    $pane->type = 'content_field';
    $pane->subtype = 'field_dr_user_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-6'] = $pane;
    $display->panels['right'][0] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'right';
    $pane->type = 'content_field';
    $pane->subtype = 'field_dr_user_external_id';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-7'] = $pane;
    $display->panels['right'][1] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;

  $export['node_view_panel_context_3'] = $handler;
  return $export;
}

/**
 * Helper to implementation of hook_default_page_manager_pages().
 */
function _decoder_ring_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dr_reports';
  $page->task = 'page';
  $page->admin_title = 'Decoder Ring user and post reports';
  $page->admin_description = '';
  $page->path = 'node/%node/reports';
  $page->access = array(
    'plugins' => array(
      '0' => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'dr_collection' => 'dr_collection',
            'dr_post' => 'dr_post',
            'dr_user' => 'dr_user',
          ),
        ),
        'context' => 'argument_nid_1',
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Reports',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'nid',
      'settings' => array(),
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dr_reports_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dr_reports';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Post reports page',
    'no_blocks' => 0,
    'css_id' => 'panel-dr_post-reports',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      '0' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 1,
        'identifier' => 'Collection node',
        'keyword' => 'collection-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_collection',
        ),
      ),
      '1' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 2,
        'identifier' => 'Parent node',
        'keyword' => 'parent-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_parent',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        '0' => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dr_post' => 'dr_post',
            ),
          ),
          'context' => 'argument_nid_1',
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = 'Reports: %node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-post_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-post_taxonomy_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-post_taxonomy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb override',
      'title' => '',
      'body' => '<?php
$collection_nid = (int)"%collection-nodereference:nid";
$collection_title = "%collection-nodereference:title";
$node_nid = (int)"%node:nid";
$node_title = "%node:title";
$breadcrumb = array();
$breadcrumb[] = l(\'Home\', \'<front>\');
$breadcrumb[] = l($collection_title, \'node/\'. $collection_nid);
$breadcrumb[] = l($node_title, \'node/\'. $node_nid);
drupal_set_breadcrumb($breadcrumb);',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dr_reports_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'dr_reports';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'User reports page',
    'no_blocks' => 0,
    'css_id' => 'panel-dr_user-reports',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      '0' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 1,
        'identifier' => 'Collection node',
        'keyword' => 'collection-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_collection',
        ),
      ),
      '1' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 2,
        'identifier' => 'Parent node',
        'keyword' => 'parent-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_parent',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        '0' => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dr_user' => 'dr_user',
            ),
          ),
          'context' => 'argument_nid_1',
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = 'Reports: %node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-user_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-user_taxonomy_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-user_taxonomy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb override',
      'title' => '',
      'body' => '<?php
$collection_nid = (int)"%collection-nodereference:nid";
$collection_title = "%collection-nodereference:title";
$node_nid = (int)"%node:nid";
$node_title = "%node:title";
$breadcrumb = array();
$breadcrumb[] = l(\'Home\', \'<front>\');
$breadcrumb[] = l($collection_title, \'node/\'. $collection_nid);
$breadcrumb[] = l($node_title, \'node/\'. $node_nid);
drupal_set_breadcrumb($breadcrumb);',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dr_reports_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'dr_reports';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Collection reports page',
    'no_blocks' => 0,
    'css_id' => 'panel-dr_collection-reports',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      '0' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 1,
        'identifier' => 'Collection node',
        'keyword' => 'collection-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_collection',
        ),
      ),
      '1' => array(
        'context' => 'argument_nid_1',
        'name' => 'node_from_noderef',
        'id' => 2,
        'identifier' => 'Parent node',
        'keyword' => 'parent-nodereference',
        'relationship_settings' => array(
          'field_name' => 'field_dr_parent',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        '0' => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dr_collection' => 'dr_collection',
            ),
          ),
          'context' => 'argument_nid_1',
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = 'Reports: %node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-collection_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-collection_taxonomy_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'dr-collection_taxonomy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb override',
      'title' => '',
      'body' => '<?php
$node_nid = (int)"%node:nid";
$node_title = "%node:title";
$breadcrumb = array();
$breadcrumb[] = l(\'Home\', \'<front>\');
$breadcrumb[] = l($node_title, \'node/\'. $node_nid);
drupal_set_breadcrumb($breadcrumb);',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dr_reports'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dr_search';
  $page->task = 'page';
  $page->admin_title = 'Decoder Ring search';
  $page->admin_description = '';
  $page->path = 'node/%node/search';
  $page->access = array(
    'logic' => 'or',
    'plugins' => array(
      '0' => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'dr_collection' => 'dr_collection',
            'dr_post' => 'dr_post',
            'dr_user' => 'dr_user',
          ),
        ),
        'context' => 'argument_nid_1',
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Search',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'nid',
      'settings' => array(),
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dr_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dr_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Collection search',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        '0' => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dr_collection' => 'dr_collection',
            ),
          ),
          'context' => 'argument_nid_1',
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'collection_posts-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '',
      'items_per_page' => '25',
      'path' => '',
      'fields_override' => array(
        'title' => 1,
        'field_dr_date_value' => 1,
        'field_dr_user_name_value' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dr_search'] = $page;

 return $pages;

}

/**
 * Helper to implementation of hook_strongarm().
 */
function _decoder_ring_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_dr_collection';
  $strongarm->value = '0';

  $export['ant_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_dr_post';
  $strongarm->value = '1';

  $export['ant_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_dr_user';
  $strongarm->value = '1';

  $export['ant_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_dr_collection';
  $strongarm->value = '';

  $export['ant_pattern_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_dr_post';
  $strongarm->value = '[field_dr_title-raw] ([field_dr_external_id-raw])';

  $export['ant_pattern_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_dr_user';
  $strongarm->value = '[field_dr_user_name-raw] ([field_dr_collection-title-raw])';

  $export['ant_pattern_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_dr_collection';
  $strongarm->value = 0;

  $export['ant_php_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_dr_post';
  $strongarm->value = 0;

  $export['ant_php_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_dr_user';
  $strongarm->value = 0;

  $export['ant_php_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dr_collection';
  $strongarm->value = 0;

  $export['comment_anonymous_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dr_post';
  $strongarm->value = 0;

  $export['comment_anonymous_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dr_user';
  $strongarm->value = 0;

  $export['comment_anonymous_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_dr_collection';
  $strongarm->value = '3';

  $export['comment_controls_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_dr_post';
  $strongarm->value = '3';

  $export['comment_controls_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_dr_user';
  $strongarm->value = '3';

  $export['comment_controls_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dr_collection';
  $strongarm->value = '4';

  $export['comment_default_mode_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dr_post';
  $strongarm->value = '4';

  $export['comment_default_mode_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dr_user';
  $strongarm->value = '4';

  $export['comment_default_mode_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_dr_collection';
  $strongarm->value = '2';

  $export['comment_default_order_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_dr_post';
  $strongarm->value = '2';

  $export['comment_default_order_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_dr_user';
  $strongarm->value = '2';

  $export['comment_default_order_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dr_collection';
  $strongarm->value = '50';

  $export['comment_default_per_page_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dr_post';
  $strongarm->value = '50';

  $export['comment_default_per_page_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dr_user';
  $strongarm->value = '50';

  $export['comment_default_per_page_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dr_collection';
  $strongarm->value = '2';

  $export['comment_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dr_post';
  $strongarm->value = '2';

  $export['comment_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dr_user';
  $strongarm->value = '2';

  $export['comment_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dr_collection';
  $strongarm->value = '0';

  $export['comment_form_location_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dr_post';
  $strongarm->value = '0';

  $export['comment_form_location_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dr_user';
  $strongarm->value = '0';

  $export['comment_form_location_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dr_collection';
  $strongarm->value = '0';

  $export['comment_preview_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dr_post';
  $strongarm->value = '0';

  $export['comment_preview_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dr_user';
  $strongarm->value = '0';

  $export['comment_preview_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dr_collection';
  $strongarm->value = '1';

  $export['comment_subject_field_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dr_post';
  $strongarm->value = '1';

  $export['comment_subject_field_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dr_user';
  $strongarm->value = '1';

  $export['comment_subject_field_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_dr_post';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '3',
    'comment_settings' => '2',
    'menu' => '1',
    'taxonomy' => '0',
  );

  $export['content_extra_weights_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_dr_user';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'comment_settings' => '1',
    'menu' => '-1',
  );

  $export['content_extra_weights_dr_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_1';
  $strongarm->value = '1';

  $export['filter_html_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_help_1';
  $strongarm->value = 1;

  $export['filter_html_help_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_nofollow_1';
  $strongarm->value = 0;

  $export['filter_html_nofollow_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'singular';

  $export['theme_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_dr_collection' => 0,
    'toggle_node_info_dr_post' => 0,
    'toggle_node_info_dr_user' => 0,
    'toggle_node_info_page' => 0,
    'toggle_node_info_story' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );

  $export['theme_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_singular_settings';
  $strongarm->value = array(
    'layout' => 'fixed',
    'autoclose' => array(
      'status' => 'status',
      'warning' => 0,
      'error' => 0,
    ),
    'style' => 'rocks',
    'background_file' => '',
    'background_path' => '',
    'background_color' => '#888888',
    'background_repeat' => 'no-repeat',
  );

  $export['theme_singular_settings'] = $strongarm;
  return $export;
}

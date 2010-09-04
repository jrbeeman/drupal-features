<?php

/**
 * Implementation of hook_strongarm().
 */
function decoder_ring_strongarm() {
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
  $strongarm->name = 'date:dr_post:2:field_dr_date_fromto';
  $strongarm->value = 'both';

  $export['date:dr_post:2:field_dr_date_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:2:field_dr_date_multiple_from';
  $strongarm->value = '';

  $export['date:dr_post:2:field_dr_date_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:2:field_dr_date_multiple_number';
  $strongarm->value = '';

  $export['date:dr_post:2:field_dr_date_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:2:field_dr_date_multiple_to';
  $strongarm->value = '';

  $export['date:dr_post:2:field_dr_date_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:2:field_dr_date_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:dr_post:2:field_dr_date_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:3:field_dr_date_fromto';
  $strongarm->value = 'both';

  $export['date:dr_post:3:field_dr_date_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:3:field_dr_date_multiple_from';
  $strongarm->value = '';

  $export['date:dr_post:3:field_dr_date_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:3:field_dr_date_multiple_number';
  $strongarm->value = '';

  $export['date:dr_post:3:field_dr_date_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:3:field_dr_date_multiple_to';
  $strongarm->value = '';

  $export['date:dr_post:3:field_dr_date_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:3:field_dr_date_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:dr_post:3:field_dr_date_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:full:field_dr_date_fromto';
  $strongarm->value = 'both';

  $export['date:dr_post:full:field_dr_date_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:full:field_dr_date_multiple_from';
  $strongarm->value = '';

  $export['date:dr_post:full:field_dr_date_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:full:field_dr_date_multiple_number';
  $strongarm->value = '';

  $export['date:dr_post:full:field_dr_date_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:full:field_dr_date_multiple_to';
  $strongarm->value = '';

  $export['date:dr_post:full:field_dr_date_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:full:field_dr_date_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:dr_post:full:field_dr_date_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:teaser:field_dr_date_fromto';
  $strongarm->value = 'both';

  $export['date:dr_post:teaser:field_dr_date_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:teaser:field_dr_date_multiple_from';
  $strongarm->value = '';

  $export['date:dr_post:teaser:field_dr_date_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:teaser:field_dr_date_multiple_number';
  $strongarm->value = '';

  $export['date:dr_post:teaser:field_dr_date_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:teaser:field_dr_date_multiple_to';
  $strongarm->value = '';

  $export['date:dr_post:teaser:field_dr_date_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_post:teaser:field_dr_date_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:dr_post:teaser:field_dr_date_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:full:field_dr_user_date_fromto';
  $strongarm->value = 'both';

  $export['date:dr_user:full:field_dr_user_date_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:full:field_dr_user_date_multiple_from';
  $strongarm->value = '';

  $export['date:dr_user:full:field_dr_user_date_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:full:field_dr_user_date_multiple_number';
  $strongarm->value = '';

  $export['date:dr_user:full:field_dr_user_date_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:full:field_dr_user_date_multiple_to';
  $strongarm->value = '';

  $export['date:dr_user:full:field_dr_user_date_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:full:field_dr_user_date_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:dr_user:full:field_dr_user_date_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:teaser:field_dr_user_date_fromto';
  $strongarm->value = 'both';

  $export['date:dr_user:teaser:field_dr_user_date_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:teaser:field_dr_user_date_multiple_from';
  $strongarm->value = '';

  $export['date:dr_user:teaser:field_dr_user_date_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:teaser:field_dr_user_date_multiple_number';
  $strongarm->value = '';

  $export['date:dr_user:teaser:field_dr_user_date_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:teaser:field_dr_user_date_multiple_to';
  $strongarm->value = '';

  $export['date:dr_user:teaser:field_dr_user_date_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:dr_user:teaser:field_dr_user_date_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:dr_user:teaser:field_dr_user_date_show_repeat_rule'] = $strongarm;
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
  $strongarm->name = 'filter_url_length_1';
  $strongarm->value = '72';

  $export['filter_url_length_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dr_collection';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_dr_collection'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dr_post';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_dr_post'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dr_user';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_dr_user'] = $strongarm;
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
    'style' => 'sea',
    'background_file' => '',
    'background_path' => '',
    'background_color' => '#888888',
    'background_repeat' => 'no-repeat',
  );

  $export['theme_singular_settings'] = $strongarm;
  return $export;
}

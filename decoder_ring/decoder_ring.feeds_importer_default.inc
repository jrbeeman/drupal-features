<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function decoder_ring_feeds_importer_default() {
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
          0 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'created',
            'target' => 'field_dr_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'mid',
            'target' => 'field_dr_external_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'collection',
            'target' => 'field_dr_collection',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'refUser',
            'target' => 'field_dr_user',
            'unique' => FALSE,
          ),
          6 => array(
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
          0 => array(
            'source' => 'uid',
            'target' => 'field_dr_user_external_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'created',
            'target' => 'field_dr_user_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'rank',
            'target' => 'field_dr_user_rank',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'avatar',
            'target' => 'field_dr_user_avatar',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'username',
            'target' => 'field_dr_user_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'username',
            'target' => 'title',
            'unique' => FALSE,
          ),
          7 => array(
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

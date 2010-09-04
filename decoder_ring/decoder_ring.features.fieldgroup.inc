<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function decoder_ring_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_dr_org
  $groups['dr_post-group_dr_org'] = array(
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
  $groups['dr_user-group_dr_user_attrs'] = array(
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
  // Included for use with string extractors like potx.
  t('Other attributes');
  t('Post organization');

  return $groups;
}

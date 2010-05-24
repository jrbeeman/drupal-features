<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _decoder_ring_node_info() {
  $items = array(
    'dr_collection' => array(
      'name' => t('Decoder Ring Collection'),
      'module' => 'features',
      'description' => t('A Decoder Ring collection is a set of posts organized into a logical unit of information. When new posts are created, they must be assigned to a collection. Collections also contain Decoder Ring users, which are references to the original author / speaker of the posts within the collection.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'dr_post' => array(
      'name' => t('Decoder Ring Post'),
      'module' => 'features',
      'description' => t('A Decoder Ring post is used to analyze utterances made on discussion board threads, in transcribed conversations, or any other type of conversation that can be tracked as "Subject A said, \'...\' Then, Subject B said, \'...\'" <em>Note: Comments are disabled for this content type as each node can reference another node.</em>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'dr_user' => array(
      'name' => t('Decoder Ring User'),
      'module' => 'features',
      'description' => t('A Decoder Ring user is a reference to the external user who authored / uttered a post contained within a collection.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

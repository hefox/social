<?php
/**
 * @file
 * social_post.features.inc
 */

/**
 * Implements hook_node_info().
 */
function social_post_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Post something.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * social_post.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function social_post_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_files'
  $field_bases['field_files'] = array(
    'active' => '1',
    'cardinality' => '-1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_files',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'module' => 'file',
    'settings' => array(
      'display_default' => 1,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => '0',
    'type' => 'file',
  );

  return $field_bases;
}

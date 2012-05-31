<?php
/**
 * @file
 * social_relationships.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function social_relationships_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_friends'
  $field_bases['field_friends'] = array(
    'active' => '1',
    'cardinality' => '-1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_friends',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'friend_listing',
        ),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'user',
    ),
    'translatable' => '0',
    'type' => 'entityreference',
  );

  return $field_bases;
}

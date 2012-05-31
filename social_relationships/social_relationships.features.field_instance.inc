<?php
/**
 * @file
 * social_relationships.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function social_relationships_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'connection_list-connection_list-field_friends'
  $field_instances['connection_list-connection_list-field_friends'] = array(
    'bundle' => 'connection_list',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'connection_list',
    'field_name' => 'field_friends',
    'label' => 'Friends',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => '60',
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => '1',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Friends');

  return $field_instances;
}

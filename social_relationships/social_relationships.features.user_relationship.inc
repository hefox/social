<?php
/**
 * @file
 * social_relationships.features.user_relationship.inc
 */

/**
 * Implements hook_user_relationships_default_relationships().
 */
function social_relationships_user_relationships_default_relationships() {
  $relationships = array();

  // Exported user_relationship style: friend.
  $relationships['friend'] = array(
    'name' => 'Friend',
    'plural_name' => 'Friends',
    'is_oneway' => '0',
    'is_reciprocal' => '0',
    'requires_approval' => '1',
    'expires_val' => '0',
    'machine_name' => 'friend',
  );

  return $relationships;
}

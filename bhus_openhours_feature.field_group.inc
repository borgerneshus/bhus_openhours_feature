<?php
/**
 * @file
 * bhus_openhours_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bhus_openhours_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rhours|node|afdeling|form';
  $field_group->group_name = 'group_rhours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afdeling';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Remote opening hours',
    'weight' => '35',
    'children' => array(
      0 => 'field_remote_url',
      1 => 'field_remote_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rhours field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_rhours|node|afdeling|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Remote opening hours');

  return $field_groups;
}

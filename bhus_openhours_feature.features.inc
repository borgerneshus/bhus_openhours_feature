<?php
/**
 * @file
 * bhus_openhours_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhus_openhours_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bhus_openhours_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bhus_openhours_feature_node_info() {
  $items = array(
    'afdeling' => array(
      'name' => t('Afdeling'),
      'base' => 'node_content',
      'description' => t('Afdelinger i borgernes hus.
Indeholder feks åbningstider og andet til visning.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

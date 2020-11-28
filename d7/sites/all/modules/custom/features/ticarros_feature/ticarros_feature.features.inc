<?php
/**
 * @file
 * ticarros_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ticarros_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ticarros_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ticarros_feature_image_default_styles() {
  $styles = array();

  // Exported image style: 640x480.
  $styles['640x480'] = array(
    'label' => '640x480',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      8 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ticarros_feature_node_info() {
  $items = array(
    'carro' => array(
      'name' => t('Carro'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'make' => array(
      'name' => t('Marca'),
      'base' => 'node_content',
      'description' => t('Marca'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'model' => array(
      'name' => t('Modelo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

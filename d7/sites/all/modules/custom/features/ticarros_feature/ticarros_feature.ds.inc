<?php
/**
 * @file
 * ticarros_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ticarros_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|carro|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'carro';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'fotos' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|carro|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ticarros_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'fotos';
  $ds_field->label = 'Fotos';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|car_detail-block',
    'block_render' => '3',
  );
  $export['fotos'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ticarros_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|carro|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'carro';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'author',
        1 => 'comments',
        6 => 'field_style',
        7 => 'field_theme',
        8 => 'field_transmission',
        9 => 'field_fuel',
        10 => 'field_displacement',
        11 => 'field_status',
        12 => 'field_mileage',
        13 => 'field_placa',
        14 => 'field_drive_restriction',
        15 => 'field_doors',
        16 => 'field_seats',
        17 => 'field_negotiable',
        18 => 'field_requirements',
      ),
      'left' => array(
        2 => 'fotos',
      ),
      'header' => array(
        3 => 'field_model',
        4 => 'field_anno',
        5 => 'field_price',
      ),
      'footer' => array(
        19 => 'field_features',
      ),
    ),
    'fields' => array(
      'author' => 'right',
      'comments' => 'right',
      'fotos' => 'left',
      'field_model' => 'header',
      'field_anno' => 'header',
      'field_price' => 'header',
      'field_style' => 'right',
      'field_theme' => 'right',
      'field_transmission' => 'right',
      'field_fuel' => 'right',
      'field_displacement' => 'right',
      'field_status' => 'right',
      'field_mileage' => 'right',
      'field_placa' => 'right',
      'field_drive_restriction' => 'right',
      'field_doors' => 'right',
      'field_seats' => 'right',
      'field_negotiable' => 'right',
      'field_requirements' => 'right',
      'field_features' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|carro|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|carro|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'carro';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_3col_stacked_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_model',
        1 => 'field_anno',
        2 => 'field_price',
        3 => 'field_style',
        4 => 'field_theme',
        5 => 'field_transmission',
        6 => 'field_fuel',
        7 => 'field_displacement',
        8 => 'field_status',
        9 => 'field_mileage',
      ),
      'middle' => array(
        10 => 'field_placa',
        11 => 'field_drive_restriction',
        12 => 'field_doors',
        13 => 'field_seats',
        14 => 'field_negotiable',
        15 => 'field_requirements',
      ),
      'right' => array(
        16 => 'field_features',
      ),
      'footer' => array(
        17 => 'body',
        18 => 'field_fotos',
      ),
      'hidden' => array(
        19 => 'title',
        20 => 'path',
        21 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_model' => 'left',
      'field_anno' => 'left',
      'field_price' => 'left',
      'field_style' => 'left',
      'field_theme' => 'left',
      'field_transmission' => 'left',
      'field_fuel' => 'left',
      'field_displacement' => 'left',
      'field_status' => 'left',
      'field_mileage' => 'left',
      'field_placa' => 'middle',
      'field_drive_restriction' => 'middle',
      'field_doors' => 'middle',
      'field_seats' => 'middle',
      'field_negotiable' => 'middle',
      'field_requirements' => 'middle',
      'field_features' => 'right',
      'body' => 'footer',
      'field_fotos' => 'footer',
      'title' => 'hidden',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|carro|form'] = $ds_layout;

  return $export;
}

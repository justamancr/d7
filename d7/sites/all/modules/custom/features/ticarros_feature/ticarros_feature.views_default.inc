<?php
/**
 * @file
 * ticarros_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ticarros_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'car_detail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Car detail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Predeterminado',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_fotos_1' => 'field_fotos_1',
    'field_fotos' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slider']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_fotos_1' => 'field_fotos_1',
    'field_fotos' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slider']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Fotos */
  $handler->display->display_options['fields']['field_fotos']['id'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['table'] = 'field_data_field_fotos';
  $handler->display->display_options['fields']['field_fotos']['field'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['label'] = '';
  $handler->display->display_options['fields']['field_fotos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotos']['settings'] = array(
    'image_style' => '640x480',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_fotos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fotos']['separator'] = '';
  /* Campo: Contenido: Fotos */
  $handler->display->display_options['fields']['field_fotos_1']['id'] = 'field_fotos_1';
  $handler->display->display_options['fields']['field_fotos_1']['table'] = 'field_data_field_fotos';
  $handler->display->display_options['fields']['field_fotos_1']['field'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos_1']['label'] = '';
  $handler->display->display_options['fields']['field_fotos_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fotos_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_fotos_1']['element_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_fotos_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotos_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotos_1']['settings'] = array(
    'image_style' => '640x480',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotos_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_fotos_1']['delta_offset'] = '0';
  /* Criterio de ordenación: Contenido: Fecha de mensaje */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carro' => 'carro',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['car_detail'] = array(
    t('Master'),
    t('<none>'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Todo(s)'),
    t('Block'),
  );
  $export['car_detail'] = $view;

  $view = new view();
  $view->name = 'carros';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'carros';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todo -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relación: Contenido: Modelo (field_model) */
  $handler->display->display_options['relationships']['field_model_nid']['id'] = 'field_model_nid';
  $handler->display->display_options['relationships']['field_model_nid']['table'] = 'field_data_field_model';
  $handler->display->display_options['relationships']['field_model_nid']['field'] = 'field_model_nid';
  $handler->display->display_options['relationships']['field_model_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_model_nid']['delta'] = '-1';
  /* Campo: Contenido: Fotos */
  $handler->display->display_options['fields']['field_fotos']['id'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['table'] = 'field_data_field_fotos';
  $handler->display->display_options['fields']['field_fotos']['field'] = 'field_fotos';
  $handler->display->display_options['fields']['field_fotos']['label'] = '';
  $handler->display->display_options['fields']['field_fotos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotos']['settings'] = array(
    'image_style' => '640x480',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_fotos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_fotos']['delta_offset'] = '0';
  /* Criterio de ordenación: Contenido: Fecha de mensaje */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carro' => 'carro',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterios de filtrado: Contenido: Marca (field_make) */
  $handler->display->display_options['filters']['field_make_nid']['id'] = 'field_make_nid';
  $handler->display->display_options['filters']['field_make_nid']['table'] = 'field_data_field_make';
  $handler->display->display_options['filters']['field_make_nid']['field'] = 'field_make_nid';
  $handler->display->display_options['filters']['field_make_nid']['relationship'] = 'field_model_nid';
  $handler->display->display_options['filters']['field_make_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_make_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_make_nid']['expose']['operator_id'] = 'field_make_nid_op';
  $handler->display->display_options['filters']['field_make_nid']['expose']['operator'] = 'field_make_nid_op';
  $handler->display->display_options['filters']['field_make_nid']['expose']['identifier'] = 'make';
  $handler->display->display_options['filters']['field_make_nid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_make_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
  );
  /* Criterios de filtrado: Contenido: Modelo (field_model) */
  $handler->display->display_options['filters']['field_model_nid']['id'] = 'field_model_nid';
  $handler->display->display_options['filters']['field_model_nid']['table'] = 'field_data_field_model';
  $handler->display->display_options['filters']['field_model_nid']['field'] = 'field_model_nid';
  $handler->display->display_options['filters']['field_model_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_model_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_model_nid']['expose']['operator_id'] = 'field_model_nid_op';
  $handler->display->display_options['filters']['field_model_nid']['expose']['operator'] = 'field_model_nid_op';
  $handler->display->display_options['filters']['field_model_nid']['expose']['identifier'] = 'model';
  $handler->display->display_options['filters']['field_model_nid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_model_nid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'carros';
  $translatables['carros'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todo -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field_model'),
    t('Page'),
  );
  $export['carros'] = $view;

  return $export;
}

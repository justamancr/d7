<?php

$plugin = array(
    'title'           => t('Weather login as pane.'),
    'single'          => FALSE,
    'description'     => t('Make this a panels ctools content type (pane) in addition to a standard block.'),
    'category'        => array('Weather Login'),
    'all contexts'    => TRUE,
    'render callback' => 'weather_render',
);

 /**
  * 'admin info' callback for panel pane.
  */
function weather_admin_info($subtype, $conf, $contexts) {
    if (!empty($conf)) {
        $block = new stdClass;
        $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
        $block->content = t('Make this a panels ctools content type (pane) in addition to a standard block.');
        return $block;
    }
}

function weather_render($subtype, $conf, $panel_args, $context = NULL) {
    $block = new stdClass();
    $block->title = 'Weather Pane';

    $user_fields = user_load($GLOBALS['user']->uid);
    if ( isset ($user_fields->field_user_weather_message['und'][0]['value'] )  ){
        $weather_login_msg = $user_fields->field_user_weather_message['und'][0]['value'];
    }else{
        $weather_login_msg = t('You last logged in at: ');
    }

    $output = $weather_login_msg.format_date($GLOBALS['user']->login,'small');
    $block->content = $output;

    return $block;
}

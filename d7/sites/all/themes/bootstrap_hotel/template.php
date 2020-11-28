<?php

/**
 * @file
 * template.php
 */

function bootstrap_hotel_form_views_exposed_form_alter(&$form, &$form_state, $form_id){
    $form["price"]['#options']["All"] = 'Price';
    $form["region"]['#options']["All"] = 'Region';
    $form["theme"]['#options']["All"] = 'Theme';
}
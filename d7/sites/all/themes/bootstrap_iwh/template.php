<?php

/**
 * @file
 * template.php
 */

function bootstrap_iwh_form_alter(&$form, &$form_state, $form_id) {
    if ($form_id == 'webform_client_form_5') {
        $form['#attributes']['class'][] = 'container';
    }
}
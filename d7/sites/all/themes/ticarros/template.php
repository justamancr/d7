<?php

/**
 * @file
 * template.php
 */

function ticarros_form_views_exposed_form_alter(&$form, &$form_state, $form_id){
    // this code was running twice ?.?
    if (isset ($form_state['ran_form_alter']) ){
        return;
    }else{
        $form_state['ran_form_alter']=true;
    }

    $query = db_select('node', 'n');
    $query->join('field_data_field_model', 'model_field', 'model_field.entity_id = n.nid');
    $query->join('node', 'model', 'model.nid = model_field.field_model_nid');
    $query->join('field_data_field_make', 'make_field', 'make_field.entity_id = model.nid');
    $query->join('node', 'make', 'make.nid = make_field.field_make_nid');

    $query->fields('model', array('nid','title'));
    $query->fields('make', array('nid','title'));

    $query->condition('n.status', 1, '=');
    $query->condition('n.type', 'carro', '=');
    $query->groupBy('model.nid');
    $query->addExpression('COUNT(model.nid)', 'count');
    $query_result = $query->execute();
    $results = $query_result->fetchAll();
    $makes = array();
    $models = array();

    foreach ($results as $result){
        $makes[ $result->make_nid ] ['make_name'] = $result->make_title;
        $makes[ $result->make_nid ] ['make_count'] =
            ( isset ($makes[ $result->make_nid ] ['make_count']) )?
                $makes[ $result->make_nid ] ['make_count'] + $result->count:0+ $result->count;

        $models [ $result->nid ] ['model_name'] = $result->title;
        $models [ $result->nid ] ['model_count'] = $result->count;
        $models [ $result->nid ] ['parent_make'] = $result->make_nid;
    }

    $form["make"]['#options']["All"] = 'Marca';
    $form["model"]['#options']["All"] = 'Modelo';

    foreach ($form['model']['#options'] as $key => $model_option) {
        if ($key == "All") {
            continue;
        } else {
            if ( isset($models[$key]) && $models[$key]['model_count']>0) {
                $form['model']['#options'][$key] = $model_option . ' ('.$models[$key]['model_count'].')';
                // if this model is selected, select the corresponding make
                if ($form_state['input']['model']==$key
                    && $form_state['input']['make'] == 'All'){
                    //$form_state['input']['make'] = $models[$key]['parent_make'];
                }
                if( !isset($form['model']['#options'] [ $form_state['input']['model'] ]) ){
                    //if selected model is not available (changing make cause this)
                    $form_state['input']['model']='All';
                }
            } else {
                if ($form_state['input']['model']==$key){$form_state['input']['model']=='All';}
                unset ($form['model']['#options'][$key]);
            }
            // unset other makes models
            if($form_state['input']['make'] != 'All' &&
                $form_state['input']['make'] != $models[$key]['parent_make']){
                unset ($form['model']['#options'][$key]);
            }
        }
    }

    //TODO sort $form['model']['#options'] by number of results

    foreach ($form['make']['#options'] as $key => $make_option) {
        if ($key == "All") {
            continue;
        } else {
            if ( isset($makes[$key]) && $makes[$key]['make_count']>0) {
                $form['make']['#options'][$key] = $make_option . ' ('.$makes[$key]['make_count'].')';
            } else {
                unset ($form['make']['#options'][$key]);
            }
        }
    }
}

<?php

// Path /tome/mt_cambio
// request: {"edited": [{"nid": "15389","id": "1231234", "status": "Entregado", "receiver": "Titular", "others": "", "description": "" } ], "user": { "username": "judas", "password": "d3m0", "location": { "latitude": "9.9662418", "longitude": "-84.2324159", "place": "Costa Rica Provincia de Alajuela Calle Los Portones" }, "time": "Mon Oct 26 2020 20:27:55 GMT-0600 (Central Standard Time)" } }
function _paquetes_api_submission($submission){
  watchdog('paquetes_cambio','<pre>@print_r</pre>',array('@print_r' => print_r( $submission,TRUE) ) );

  foreach ($submission['edited'] as $edit){
    $happy = node_load($edit['nid']);

    $msg = '*'. $submission['user']['username'].'* cambió el estado de *'.$happy->field_estado['und'][0]['value'].'* a *'.$edit['status'];
    $msg .= '* a las: '.date("l M d , Y h:i:s A" , $GLOBALS['timers']['page']['start'] )."\n".'Hora del app: '.$submission['user']['time'];
    if ( isset ($submission['user']['location']) ) {
      $default_location = array ('lat'=>9.9662418,'lng'=>-84.2324159);
      $location = array();
      $location['lat'] = $submission['user']['location']['latitude'] ?:$default_location['lat'];
      $location['lng'] = $submission['user']['location']['longitude'] ?:$default_location['lng'];

      //watchdog('paquetes_cambio_node','<pre>@print_r</pre>',array('@print_r' => print_r( $happy->field_ubicacion_entregado,TRUE) ) );
      $msg .= "\n".'Ubicacion del app: '.$submission['user']['location']['place'].' ('.$location['lat'].','. $location['lng'].').';
      $happy->field_ubicacion_entregado['und'][0]['lat'] = $location['lat'];
      $happy->field_ubicacion_entregado['und'][0]['lng'] = $location['lng'];
    }

    if ($edit['status'] == 'Entregado' && !empty($edit['receiver']) ){
      $msg .= "\nPersona que recibe: \"".$edit['receiver'].'"';
      if ($edit['receiver'] == 'Otros'){
        $msg .= ' ('.$edit['others'].')';
      }
    }

    $msg .= "\n".'Detalle:'.$edit['description'];
    if (!empty ($happy->field_detalles['und'][0]['value']) ){
      $msg =  $msg ."\n\n".$happy->field_detalles['und'][0]['value'];
    }

    $happy->field_estado['und'][0]['value'] = $edit['status'];
    $happy->field_detalles['und'][0]['value'] = $msg ;
    node_save ($happy);
  }
  return 'Muchas gracias DERRRRR!';
}

function _paquetes_api_error($submission){

  if ( !isset($submission['type']) ) {
    return services_error('Missing error key. It should be platform_section_subsection. Eg: android_webform_fill');
  }
  if( !isset($submission['message']) ){
    return services_error('Missing error message. A detailed description should be included for someone to understand what went wrong.
        Please remember that someone will be probably you, so include as much detail as possible.');
  }
  if( !isset($submission['variables']) ){
    $submission['variables'] = array();
  }

  if( !isset($submission['severity']) ){
    return services_error('Missing error severity.
            WATCHDOG_EMERGENCY: Emergency, system is unusable.
            WATCHDOG_ALERT: Alert, action must be taken immediately.
            WATCHDOG_CRITICAL: Critical conditions.
            WATCHDOG_ERROR: Error conditions.
            WATCHDOG_WARNING: Warning conditions.
            WATCHDOG_NOTICE: (default) Normal but significant conditions.
            WATCHDOG_INFO: Informational messages.
            WATCHDOG_DEBUG: Debug-level messages.');
  }

  $link = (isset($submission['link']))? $submission['link'] : null;

  try{
    watchdog('mt_api_error',$submission['message'].' <br /><pre>@print_r</pre>',array('@print_r' => print_r( $submission, TRUE)),constant($submission['severity']),$link);
    $return = 'Error logged successfully';
  } catch (Exception $e){
    watchdog('mt_api',"Unable to log error<br /> <pre>@variables</pre>",array('@variables' => print_r( $submission, TRUE)),WATCHDOG_ERROR);
    $return = 'There was an error logging the error. Meta error has been logged.';
  }
  return($return);
}

function _paquetes_api_listado($name,$pass) {
  $existing_user = user_authenticate($name,$pass);
  if($existing_user){
    $app_user = user_load($existing_user);
    if(!empty ($app_user->field_ruta['und']) ){
      $rutas = array();
      foreach ( $app_user->field_ruta['und'] as $ruta){
        $rutas[] = $ruta['nid'];
      }

      $query = new EntityFieldQuery;
      $estados_validos = array('Ruta','Rural','Rechazado','Devolucion','Recoleccion','Ausente');
      $result = $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'cliente')
        ->propertyCondition('status', NODE_PUBLISHED)
        ->fieldCondition('field_ruta', 'nid', $rutas , 'IN')
        ->fieldCondition('field_estado', 'value', $estados_validos , 'IN')
        ->execute();
      if (!empty($result['node'])) {

        $nids = array_keys($result['node']);
        $repeats = node_load_multiple($nids);
        $paquetes = array();
        foreach ($repeats as $repeat){
          $node_fields = array(
            'Peso'=> 'field_paquete_peso',
            'Estado'=> 'field_estado',
            'Dirección'=> 'field_direccion_de_afiliado',
            'Población'=> 'field_poblacion_de_afiliado',
            'Nombre de afiliado'=> 'field_nombre_de_afiliado',
            'Código de afiliado'=> 'field_codigo_de_afiliado',
            'Teléfono'=> 'field_telefono_de_afiliado',
            'Celular'=> 'field_celular_de_afiliado',
            'Detalles'=> 'field_detalles'
          );
          $paquete = array('nid'=>$repeat->nid , 'ID Paquete' => $repeat->title);
          foreach($node_fields as $node_field_key => $node_field_value){
            $paquete[$node_field_key] = (!empty ($repeat->{$node_field_value}['und'][0]['value']) )?$repeat->{$node_field_value}['und'][0]['value']:'';
          }
          $paquetes[]=array('node'=>$paquete);
        }
        return array('nodes'=>$paquetes);
      } else {
        return array('nodes'=>array());
      }
    } else {
      //user has no routes
      return array('nodes'=>array());
    }
  } else {
    //invalid user/pass
    return array('nodes'=>array());
  }
}

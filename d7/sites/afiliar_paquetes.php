<?php

$page_size = 1000;
$page = 0;

$result = db_query("SELECT nid FROM node WHERE node.type = 'cliente' ");
foreach ($result as $obj) {
  if($obj->nid >= $page * $page_size
  && $obj->nid < ($page+1) * $page_size ){
    unset ($paquete);
    $paquete = node_load($obj->nid);
    if (isset ($paquete->field_codigo_de_afiliado['und'][0]['value'])
      && !isset($paquete->field_ref_de_afiliado['und'][0]['nid'])
    ){
      $cod_afiliado = $paquete->field_codigo_de_afiliado['und'][0]['value'];
      dpm ('Paquete:'.$paquete->nid.' cod_afiliado: '.$cod_afiliado);
      $nid_afiliado = db_query("
        SELECT cda.entity_id
        FROM field_data_field_codigo_de_afiliado cda, node
        WHERE cda.field_codigo_de_afiliado_value='". $cod_afiliado."'
        AND cda.entity_id = node.nid
        AND node.type='afiliado'");

      $nid_afiliado_test = array();
      foreach($nid_afiliado as $af){
        $nid_afiliado_test[] = $af->entity_id;
      }
      if( isset($nid_afiliado_test[0]) && is_numeric($nid_afiliado_test[0]) ){
        dpm ('nid de afiliado:'.$nid_afiliado_test[0]);
        $paquete->field_ref_de_afiliado['und'][0]['nid'] = $nid_afiliado_test[0];
        node_save($paquete);
      }
    }
  }

}

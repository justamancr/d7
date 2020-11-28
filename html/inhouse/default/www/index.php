<?php

//tha routa!

$domain = str_replace("www.", "", $_SERVER['SERVER_NAME']);

switch ($domain){
    case 'simpletrackingsystem.com':
        if ($_SERVER['REQUEST_URI'] == '/es/') {
            include "sts-es.html";
        }else{
            include "sts.html";
        }
        break;
    case 'crinabox.com':
        include "crinabox.html";
        break;
    case 'somoscostarica.org':
        include "somoscr.html";
        break;
    default:
        include "default.html";
}

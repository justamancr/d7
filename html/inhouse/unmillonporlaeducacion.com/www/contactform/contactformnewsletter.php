<?php
/*
  PHP contact form script
  Version: 1.1
  Copyrights BootstrapMade.com
*/

/***************** Configuration *****************/

  // Replace with your real receiving email address
  $contact_email_to = "info@unmillonporlaeducacion.com";

  // Title prefixes
  $subject_title = "Agregar a Newsletter:";
  $name_title = "Name:";
  $email_title = "Email:";
  $message_title = "Message:";

  // Error messages
  $contact_error_email = "Please enter a valid email!";


  if(!isset($_SERVER['HTTP_X_REQUESTED_WITH']) AND strtolower($_SERVER['HTTP_X_REQUESTED_WITH']) != 'xmlhttprequest') {
    die('Sorry Request must be Ajax POST');
  }

  if(isset($_POST)) {

    $email = filter_var($_POST["email"], FILTER_SANITIZE_EMAIL);

    if(!$contact_email_to || $contact_email_to == 'contact@example.com') {
      die('The contact form receiving email address is not configured!');
    }

    if(!$email){
      die($contact_error_email);
    }

    if(!isset($contact_email_from)) {
      $contact_email_from = "contactform@" . @preg_replace('/^www\./','', $_SERVER['SERVER_NAME']);
    }

    $headers = 'From: ' . 'UnMillonporlaEducacion.com' . ' <' . $contact_email_from . '>' . PHP_EOL;
    $headers .= 'Reply-To: ' . $email . PHP_EOL;
    $headers .= 'MIME-Version: 1.0' . PHP_EOL;
    $headers .= 'Content-Type: text/html; charset=UTF-8' . PHP_EOL;
    $headers .= 'X-Mailer: PHP/' . phpversion();

    $message_content = '<strong>' . $email_title . '</strong> ' . $email . '<br>';

    $sendemail = mail($contact_email_to, $subject_title . ' ' . 'newsletter', $message_content, $headers);

    if( $sendemail ) {
      echo 'OK';
    } else {
      echo 'Could not send mail! Please check your PHP mail configuration.';
    }
  }
?>

<?php

/**
 * @file
 * Example ping script.
 *
 * This script is intended to be used as a starting point to copy and
 * adapt to your needs.
 */

// Prevent sql injection.
$timestamp = $_GET['timestamp'];
if (!is_numeric($timestamp)) {
  die();
}

$local = ($_SERVER['HTTP_HOST'] == 'tracking.local')? '../tracking.local/':'';
// Connect to drupal database.
require_once $local.'settings.php';

$creds = $databases['default']['default'];
$constr = sprintf("%s:dbname=%s", $creds['driver'], $creds['database']);
$db = new PDO($constr, $creds['username'], $creds['password']);

// Get count of new items.
$result = $db->query("SELECT count(nid) FROM node WHERE changed > $timestamp");


// HTTP headers to prevent caching the result of this call.
header("Cache-Control: no-cache, must-revalidate"); // HTTP/1.1
header("Expires: Sat, 26 Jul 1997 05:00:00 GMT"); // Date in the past (HTTP 1.0)

// JSON response.
print '{"pong":"' . $result->fetchColumn() . '"}';

<?php
$endpoint = new stdClass();
$endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
$endpoint->api_version = 3;
$endpoint->name = 'smsgw';
$endpoint->server = 'rest_server';
$endpoint->path = 'smsgw';
$endpoint->authentication = array(
  'services' => 'services',
);
$endpoint->server_settings = array(
  'formatters' => array(
    'json' => TRUE,
    'bencode' => FALSE,
    'jsonp' => FALSE,
    'php' => FALSE,
    'xml' => FALSE,
  ),
  'parsers' => array(
    'application/json' => TRUE,
    'multipart/form-data' => TRUE,
    'application/vnd.php.serialized' => FALSE,
    'application/x-www-form-urlencoded' => FALSE,
    'application/xml' => FALSE,
    'text/xml' => FALSE,
  ),
);
$endpoint->resources = array(
  'file' => array(
    'operations' => array(
      'retrieve' => array(
        'enabled' => '1',
      ),
      'index' => array(
        'enabled' => '1',
      ),
    ),
  ),
  'node' => array(
    'operations' => array(
      'retrieve' => array(
        'enabled' => '1',
      ),
      'index' => array(
        'enabled' => '1',
      ),
    ),
  ),
  'user' => array(
    'operations' => array(
      'retrieve' => array(
        'enabled' => '1',
      ),
      'index' => array(
        'enabled' => '1',
      ),
    ),
  ),
);
$endpoint->debug = 0;
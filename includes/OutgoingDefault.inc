<?php

class CeenOutgoingDefault extends CeenProcess {
  function process($node, &$resource = array()) {
    $resource['title'] = $node->title;
    $resource['description'] = $node->body;
    $resource['user'] = (function_exists('ceenclient_user_uuid')) ? ceenclient_user_uuid($node->uid) : '';
    $resource['type'] = 'Learning Resource'; // As generic as possible.
  }
}
<?php

class CeenIncomingDefault extends CeenProcess {
  function process($resource, &$node = array()) {
    $resource = (array) $resource;
    
    $node->title = $resource['title'];
    $node->body = $resource['description'];
  }
}
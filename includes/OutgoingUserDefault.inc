<?php

class CeenOutgoingUserDefault extends CeenProcess {
  function process($user, &$resource = array()) {
    $name_parts = explode(' ', $user->name);
    if (count($name_parts) == 1) {
      $name_parts[1] = $name_parts[0];
    }
    elseif (count($name_parts) > 2) {
      $tmp = array(
        0 => $name_parts[0],
      );
      
      array_shift($name_parts);
      $tmp[1] = implode(' ', $name_parts);
      $name_parts = $tmp;    
    }
    $resource['first_name'] = $name_parts[0];
    $resource['last_name'] = $name_parts[1];
    
    $resource['contact'] = array(
      'mail' => $user->mail,
    );
  }
}
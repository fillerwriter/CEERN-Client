<?php

/**
 * Implementation of hook_views_data().
 */
 
function ceenclient_views_data() {
  $data = array();
  
  $data['ceenapi_to_object'] = array(
    'table' => array(
      'group' => t('CEEN API'),
      'join' => array(
        'node' => array(
          'left_field' => 'nid',
          'field' => 'oid',
          'extra' => array(
            array(
              'field' => 'object',
              'value' => 'node',
            )
          ),
        ),
        'users' => array(
          'left_field' => 'uid',
          'field' => 'oid',
          'extra' => array(
            array(
              'field' => 'object',
              'value' => 'user',
            )
          ),
        ),
      ),
    ),
    'uuid' => array(
      'title' => t('CEEN Unique ID'),
      'help' => t('Unique CEEN ID.'), // The help that appears on the UI,
      // Information for displaying the nid
      'field' => array(
        'click sortable' => TRUE,
      ),
      // Information for accepting a nid as an argument
      'argument' => array(
      ),
      // Information for accepting a nid as a filter
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'allow empty' => TRUE,
      ),
      // Information for sorting on a nid.
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
  );
  
  return $data;
}
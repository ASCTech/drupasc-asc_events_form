<?php

/**
 * Implementation of hook_node_info().
 */
function asc_events_form_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'module' => 'features',
      'description' => t('Add events for the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

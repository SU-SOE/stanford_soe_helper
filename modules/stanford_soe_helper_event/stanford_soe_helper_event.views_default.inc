<?php
/**
 * @file
 * stanford_soe_helper_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_soe_helper_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_event_featured';
  $view->description = 'List-style page and sidebar block';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Event Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Currently, no future events are scheduled.</p>
  <p><a class="more-link" href="/events/past-events">View Past Events</a></p>';
  $handler->display->display_options['empty']['area']['format'] = 'content_editor_text_format';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
  [field_stanford_event_datetime_2] ';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['id'] = 'field_stanford_event_datetime_2';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['text'] = '[field_stanford_event_datetime_2]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime']['id'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['settings'] = array(
    'format_type' => 'search_api_facetapi_YEAR',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['id'] = 'field_stanford_event_datetime_1';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['settings'] = array(
    'format_type' => 'search_api_facetapi_YEAR',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['id'] = 'field_stanford_event_datetime_3';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['settings'] = array(
    'format_type' => 'stanford_short_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['id'] = 'field_stanford_event_datetime_4';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['settings'] = array(
    'format_type' => 'stanford_two_digit_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['id'] = 'field_stanford_event_datetime_5';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['settings'] = array(
    'format_type' => 'stanford_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="feat-events-container">
    <div class="feat-events-date-time-container">
      <div class="date-stacked">
        <div class="date-month">[field_stanford_event_datetime_3]</div>
        <div class="date-day">[field_stanford_event_datetime_4]</div>
      </div>
      <div class="feat-events-label-time-container">
        <div class="feat-events-label"><p>Event</p></div>
        <div class="feat-events-time">[field_stanford_event_datetime_5]</div>
      </div>
    </div>
    <div class="feat-events-content-container">
      <div class="feat-events-title"><h2>[title]</h2></div>
      <div class="feat-events-teaser"><p>[body]</p></div>
      <div class="edit-link">[edit_node]</div>
   </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_event' => 'stanford_event',
  );
  /* Filter criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['default_date'] = 'now';
  /* Filter criterion: Content: Featured (field_s_event_featured) */
  $handler->display->display_options['filters']['field_s_event_featured_value']['id'] = 'field_s_event_featured_value';
  $handler->display->display_options['filters']['field_s_event_featured_value']['table'] = 'field_data_field_s_event_featured';
  $handler->display->display_options['filters']['field_s_event_featured_value']['field'] = 'field_s_event_featured_value';
  $handler->display->display_options['filters']['field_s_event_featured_value']['value'] = array(
    1 => '1',
  );

  /* Display: Vertical */
  $handler = $view->new_display('block', 'Vertical', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'vertical-event';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'stanford_event_featured:block_v_recent';
  $handler->display->display_options['empty']['view']['inherit_arguments'] = TRUE;

  /* Display: Vertical Most Recent */
  $handler = $view->new_display('block', 'Vertical Most Recent', 'block_v_recent');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'vertical-event';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_event' => 'stanford_event',
  );

  /* Display: Horizontal */
  $handler = $view->new_display('block', 'Horizontal', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'horizontal-event';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'stanford_event_featured:block_h_recent';
  $handler->display->display_options['empty']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
  [field_stanford_event_datetime_2] ';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['id'] = 'field_stanford_event_datetime_2';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['text'] = '[field_stanford_event_datetime_2]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime']['id'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['text'] = '<div class="clearfix">[field_stanford_event_datetime]</div>';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['settings'] = array(
    'format_type' => 'search_api_facetapi_YEAR',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['id'] = 'field_stanford_event_datetime_1';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['text'] = '[field_stanford_event_datetime]
  [field_stanford_event_datetime_1]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['settings'] = array(
    'format_type' => 'search_api_facetapi_YEAR',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['id'] = 'field_stanford_event_datetime_3';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['settings'] = array(
    'format_type' => 'stanford_short_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['id'] = 'field_stanford_event_datetime_4';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['settings'] = array(
    'format_type' => 'stanford_two_digit_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['id'] = 'field_stanford_event_datetime_5';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['settings'] = array(
    'format_type' => 'stanford_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_stanford_event_image']['id'] = 'field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['table'] = 'field_data_field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['field'] = 'field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_event_image']['settings'] = array(
    'image_style' => 'header_370_x_170',
    'image_link' => 'content',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="feat-events-container">
  <div class="feat-events-img-container">
    [field_stanford_event_image]
  </div>
    <div class="feat-events-content-container">
      <div class="date-stacked">
        <div class="date-month">[field_stanford_event_datetime_3]</div>
        <div class="date-day">[field_stanford_event_datetime_4]</div>
      </div>
      <div class="feat-events-title"><h2>[title]</h2></div>
      <div class="feat-events-time">[field_stanford_event_datetime_5]</div>
      <div class="edit-link">[edit_node]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Horizontal Most Recent */
  $handler = $view->new_display('block', 'Horizontal Most Recent', 'block_h_recent');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'horizontal-event';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
  [field_stanford_event_datetime_2] ';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['id'] = 'field_stanford_event_datetime_2';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['text'] = '[field_stanford_event_datetime_2]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime']['id'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['text'] = '<div class="clearfix">[field_stanford_event_datetime]</div>';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['settings'] = array(
    'format_type' => 'search_api_facetapi_YEAR',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['id'] = 'field_stanford_event_datetime_1';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['text'] = '[field_stanford_event_datetime]
  [field_stanford_event_datetime_1]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['settings'] = array(
    'format_type' => 'search_api_facetapi_YEAR',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['id'] = 'field_stanford_event_datetime_3';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_3']['settings'] = array(
    'format_type' => 'stanford_short_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['id'] = 'field_stanford_event_datetime_4';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_4']['settings'] = array(
    'format_type' => 'stanford_two_digit_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['id'] = 'field_stanford_event_datetime_5';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_5']['settings'] = array(
    'format_type' => 'stanford_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_stanford_event_image']['id'] = 'field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['table'] = 'field_data_field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['field'] = 'field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_event_image']['settings'] = array(
    'image_style' => 'header_370_x_170',
    'image_link' => 'content',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="feat-events-container">
  <div class="feat-events-img-container">
    [field_stanford_event_image]
  </div>
    <div class="feat-events-content-container">
      <div class="date-stacked">
        <div class="date-month">[field_stanford_event_datetime_3]</div>
        <div class="date-day">[field_stanford_event_datetime_4]</div>
      </div>
      <div class="feat-events-title"><h2>[title]</h2></div>
      <div class="feat-events-time">[field_stanford_event_datetime_5]</div>
      <div class="edit-link">[edit_node]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_event' => 'stanford_event',
  );
  $export['stanford_event_featured'] = $view;

  return $export;
}

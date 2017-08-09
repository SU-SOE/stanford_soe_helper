<?php
/**
 * @file
 * stanford_soe_helper_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_soe_helper_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_news_featured';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford News: Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'See more news';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'News Item - No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No news items listed.';
  $handler->display->display_options['empty']['area']['format'] = 'content_editor_text_format';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'add' => '',
    'edit' => '',
    'translate' => '',
    'delete' => '',
    'description' => 0,
    'view_mode' => 'header_370x170',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_s_news_date']['id'] = 'field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['table'] = 'field_data_field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['field'] = 'field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_news_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_news_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_news_date']['element_wrapper_class'] = 'descriptor';
  $handler->display->display_options['fields']['field_s_news_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_news_date']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_s_news_teaser']['id'] = 'field_s_news_teaser';
  $handler->display->display_options['fields']['field_s_news_teaser']['table'] = 'field_data_field_s_news_teaser';
  $handler->display->display_options['fields']['field_s_news_teaser']['field'] = 'field_s_news_teaser';
  $handler->display->display_options['fields']['field_s_news_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_s_news_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_news_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="feat-news-container">
  <a href=[path]>
      <div class="feat-news-img">[field_s_image_info]</div>
  </a>
      <div class="feat-news-content-container">
           <div class="feat-news-date">[field_s_news_date]</div>
           <div class="feat-news-title"><h2>[title]</h2></div>
           <div class="feat-news-teaser">[field_s_news_teaser]</div>
      </div>
 </div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = 'There are no news items to display.';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Date (field_s_news_date) */
  $handler->display->display_options['sorts']['field_s_news_date_value']['id'] = 'field_s_news_date_value';
  $handler->display->display_options['sorts']['field_s_news_date_value']['table'] = 'field_data_field_s_news_date';
  $handler->display->display_options['sorts']['field_s_news_date_value']['field'] = 'field_s_news_date_value';
  $handler->display->display_options['sorts']['field_s_news_date_value']['order'] = 'DESC';
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
    'stanford_news_item' => 'stanford_news_item',
  );
  /* Filter criterion: Content: Featured (field_s_news_featured) */
  $handler->display->display_options['filters']['field_s_news_featured_value']['id'] = 'field_s_news_featured_value';
  $handler->display->display_options['filters']['field_s_news_featured_value']['table'] = 'field_data_field_s_news_featured';
  $handler->display->display_options['filters']['field_s_news_featured_value']['field'] = 'field_s_news_featured_value';
  $handler->display->display_options['filters']['field_s_news_featured_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['stanford_news_featured'] = $view;

  return $export;
}

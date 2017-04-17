<?php
/**
 * @file
 * stanford_soe_helper_magazine.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_soe_helper_magazine_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_magazine_department_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Magazine Department Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Magazine Department Terms';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Department (field_s_mag_article_dept) */
  $handler->display->display_options['relationships']['field_s_mag_article_dept_tid']['id'] = 'field_s_mag_article_dept_tid';
  $handler->display->display_options['relationships']['field_s_mag_article_dept_tid']['table'] = 'field_data_field_s_mag_article_dept';
  $handler->display->display_options['relationships']['field_s_mag_article_dept_tid']['field'] = 'field_s_mag_article_dept_tid';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_s_mag_article_dept']['id'] = 'field_s_mag_article_dept';
  $handler->display->display_options['fields']['field_s_mag_article_dept']['table'] = 'field_data_field_s_mag_article_dept';
  $handler->display->display_options['fields']['field_s_mag_article_dept']['field'] = 'field_s_mag_article_dept';
  $handler->display->display_options['fields']['field_s_mag_article_dept']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_dept']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_dept']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_dept']['alter']['text'] = '[field_s_mag_article_dept]';
  $handler->display->display_options['fields']['field_s_mag_article_dept']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_dept']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_mag_article_dept']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_s_mag_article_dept_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '<a href="/magazine/[tid]">[field_s_mag_article_dept]</a>';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'stanford_magazine_article' => 'stanford_magazine_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['stanford_magazine_department_terms'] = $view;

  return $export;
}

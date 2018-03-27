<?php
/**
 * @file
 * stanford_soe_helper_collection_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_soe_helper_collection_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_magazine_collection_mag_landing_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Magazine Collection: Mag. Landing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'views-grid-three article-grouping';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['id'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['field'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['label'] = 'Article 3';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['id'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['field'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['label'] = 'Article 2';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['id'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['field'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['label'] = 'Article Featured';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['id'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['field'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['label'] = 'Article 5';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['id'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['field'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['label'] = 'Article 4';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
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
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-article-container">
  <div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-article-content-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
</div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Publishing Date (field_s_mag_article_date) */
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['id'] = 'field_s_mag_article_date_value';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['field'] = 'field_s_mag_article_date_value';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['order'] = 'DESC';
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

  /* Display: Collections Page */
  $handler = $view->new_display('page', 'Collections Page', 'collections_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collections';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-one article-grouping';
  $handler->display->display_options['display_description'] = 'For the collections listing page';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
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
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Superhead */
  $handler->display->display_options['fields']['field_s_collection_superhead']['id'] = 'field_s_collection_superhead';
  $handler->display->display_options['fields']['field_s_collection_superhead']['table'] = 'field_data_field_s_collection_superhead';
  $handler->display->display_options['fields']['field_s_collection_superhead']['field'] = 'field_s_collection_superhead';
  $handler->display->display_options['fields']['field_s_collection_superhead']['label'] = '';
  $handler->display->display_options['fields']['field_s_collection_superhead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_collection_superhead']['element_label_colon'] = FALSE;
  /* Field: Content: Lead text */
  $handler->display->display_options['fields']['field_s_collection_lead_text']['id'] = 'field_s_collection_lead_text';
  $handler->display->display_options['fields']['field_s_collection_lead_text']['table'] = 'field_data_field_s_collection_lead_text';
  $handler->display->display_options['fields']['field_s_collection_lead_text']['field'] = 'field_s_collection_lead_text';
  $handler->display->display_options['fields']['field_s_collection_lead_text']['label'] = '';
  $handler->display->display_options['fields']['field_s_collection_lead_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_collection_lead_text']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['field_s_collection_lead_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_collection_lead_text']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-collection-container">
  <div class="mag-collection-color"></div>
  <div class ="mag-collection-content-container">
    <div class="mag-collection-title">[title]</div>
    <div class="mag-collection-superhead">[field_s_collection_superhead]</div>
    <div class="mag-collection-lead">[field_s_collection_lead_text]</div>
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
    'stanford_collection' => 'stanford_collection',
  );
  $handler->display->display_options['path'] = 'magazine/collections';

  /* Display: Collection First Article Block  */
  $handler = $view->new_display('block', 'Collection First Article Block ', 'collection_group_block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-one article-grouping';
  $handler->display->display_options['display_description'] = 'For a collection';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['id'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['field'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['label'] = 'Article 3';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['id'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['field'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['label'] = 'Article 2';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['id'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['field'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['label'] = 'Article Featured';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['id'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['field'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['label'] = 'Article 5';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['id'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['field'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['label'] = 'Article 4';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['id'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['table'] = 'field_data_field_s_mag_article_collection';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['field'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
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
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-article-container">
  <div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-article-content-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
</div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'stanford_magazine_article' => 'stanford_magazine_article',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    12 => 0,
    10 => 0,
    8 => 0,
    6 => 0,
    20 => 0,
    14 => 0,
    16 => 0,
    18 => 0,
  );
  $handler->display->display_options['block_description'] = 'Collection First Article NEW';

  /* Display: Collection Group 1 Block  */
  $handler = $view->new_display('block', 'Collection Group 1 Block ', 'collection_group_1_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-four article-grouping';
  $handler->display->display_options['display_description'] = 'For a collection';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['id'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['field'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['label'] = 'Article 3';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['id'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['field'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['label'] = 'Article 2';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['id'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['field'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['label'] = 'Article Featured';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['id'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['field'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['label'] = 'Article 5';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['id'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['field'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['label'] = 'Article 4';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['id'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['table'] = 'field_data_field_s_mag_article_collection';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['field'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
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
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-article-container">
  <div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-article-content-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
</div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Collection Group 1';

  /* Display: Collection Group 2 Block  */
  $handler = $view->new_display('block', 'Collection Group 2 Block ', 'collection_group_2_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-four article-grouping';
  $handler->display->display_options['display_description'] = 'For a collection';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Load more';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '9';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['id'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['field'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['label'] = 'Article 3';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['id'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['field'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['label'] = 'Article 2';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['id'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['field'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['label'] = 'Article Featured';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['id'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['field'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['label'] = 'Article 5';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['id'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['field'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['label'] = 'Article 4';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['id'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['table'] = 'field_data_field_s_mag_article_collection';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['field'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['relationships']['field_s_mag_article_collection_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
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
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-article-container">
  <div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-article-content-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
</div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_s_mag_article_collection_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Collection Group 2';
  $export['stanford_magazine_collection_mag_landing_page'] = $view;

  return $export;
}

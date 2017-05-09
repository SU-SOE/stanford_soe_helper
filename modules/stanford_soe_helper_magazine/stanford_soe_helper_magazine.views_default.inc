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
  $view->name = 'stanford_magazine_article_issue_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Magazine Article: Issue ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['id'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['field'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['label'] = 'Article Featured';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['id'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['field'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['label'] = 'Article 2';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['id'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['field'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['label'] = 'Article 3';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['id'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['field'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['label'] = 'Article 4';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['id'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['field'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['label'] = 'Article 5';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'banner-850x400',
    'image_link' => '',
  );
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  $handler->display->display_options['fields']['path_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['path_2']['label'] = '';
  $handler->display->display_options['fields']['path_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_3']['id'] = 'path_3';
  $handler->display->display_options['fields']['path_3']['table'] = 'node';
  $handler->display->display_options['fields']['path_3']['field'] = 'path';
  $handler->display->display_options['fields']['path_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['path_3']['label'] = '';
  $handler->display->display_options['fields']['path_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_3']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_4']['id'] = 'path_4';
  $handler->display->display_options['fields']['path_4']['table'] = 'node';
  $handler->display->display_options['fields']['path_4']['field'] = 'path';
  $handler->display->display_options['fields']['path_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['path_4']['label'] = '';
  $handler->display->display_options['fields']['path_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_3']['alter']['text'] = '  <div class="mag-issue-color-[field_s_mag_issue_accent_color]"> 
    <a href="[path]">
      <div class="mag-article-issue-image-container">
        [field_s_mag_article_image]
      </div>

      <div class="mag-article-issue-content-container">
        <div class="mag-article-issue-title">[title_3] | </div>
        <div class="mag-article-issue-more">Read More</div>
    </a> 
  </div>
';
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_3']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '  
  <div class="mag-article-issue-2 mag-issue-color-[field_s_mag_issue_accent_color_1]"> 
    <a href="[path_1]">
      <div class="mag-article-issue-image-container"> [field_s_mag_article_image] </div>
      <div class="mag-article-issue-content-container">
        <div class="mag-article-issue-title">[title_1] | </div>
        <div class="mag-article-issue-more">Read More</div>
      </div>
    </a> 
  </div>
';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = '  <div class="mag-article-issue-3 mag-issue-color-[field_s_mag_issue_accent_color_2]"> 
    <a href="[path_2]">
      <div class="mag-article-issue-image-container"> [field_s_mag_article_image] </div>
      <div class="mag-article-issue-content-container">
        <div class="mag-article-issue-title">[title_2] | </div>
        <div class="mag-article-issue-more">Read More</div>
      </div>
    </a> 
  </div>';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_4']['alter']['text'] = '  <div class="mag-article-issue-4 mag-issue-color-[field_s_mag_issue_accent_color_3]"> 
    <a href="[path_3]">
      <div class="mag-article-issue-image-container"> [field_s_mag_article_image] </div>
      <div class="mag-article-issue-content-container">
        <div class="mag-article-issue-title">[title_4] | </div>
        <div class="mag-article-issue-more">Read More</div>
      </div>
    </a> 
  </div>
</div>';
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_4']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_4']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_5']['alter']['text'] = '<div class="mag-article-issue-5 mag-issue-color-[field_s_mag_issue_accent_color_4]"> 
  <a href="[path_4]">
    <div class="mag-article-issue-image-container"> [field_s_mag_article_image] </div>
    <div class="mag-article-issue-content-container">
      <div class="mag-article-issue-title">[title_5] | </div>
      <div class="mag-article-issue-more">Read More</div>
    </div>
  </a> 
</div>
';
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_5']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_5']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = ' <div class="mag-article-issue-text">  This article is part of a newsletter</div>
<div class="mag-article-issue-container">
  [title_3]
  [title_1]
  [title_2]
  [title_4]
  [title_5]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'stanford_magazine_article' => 'stanford_magazine_article',
  );
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['filters']['title_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['filters']['title_2']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_2']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'title';
  $handler->display->display_options['filters']['title_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['filters']['title_3']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_3']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_4']['id'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['table'] = 'node';
  $handler->display->display_options['filters']['title_4']['field'] = 'title';
  $handler->display->display_options['filters']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['filters']['title_4']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_4']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['stanford_magazine_article_issue_'] = $view;

  $view = new view();
  $view->name = 'stanford_magazine_megamenu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Stanford Magazine Megamenu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stanford Magazine Megamenu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'stanford_magazine_topics' => 'stanford_magazine_topics',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['stanford_magazine_megamenu'] = $view;

  $view = new view();
  $view->name = 'stanford_taxonomy_term';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Taxonomy term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'taxonomy';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'stanford_department' => 'stanford_department',
    'stanford_magazine_eyebrow' => 'stanford_magazine_eyebrow',
    'stanford_magazine_series' => 'stanford_magazine_series',
    'stanford_magazine_topics' => 'stanford_magazine_topics',
    'stanford_affiliate_organization_type' => 0,
    'stanford_affiliation' => 0,
    'capx_organizations' => 0,
    'stanford_event_type' => 0,
    'stanford_faculty_type' => 0,
    'fellowship_location' => 0,
    'stanford_field_of_study' => 0,
    'stanford_interests' => 0,
    'stanford_mag_issue_layout' => 0,
    'news_categories' => 0,
    'stanford_opp_city' => 0,
    'stanford_opp_location' => 0,
    'stanford_opp_major' => 0,
    'stanford_opp_open_to' => 0,
    'stanford_opp_sponsor' => 0,
    'stanford_opp_time_of_year' => 0,
    'stanford_opp_type' => 0,
    'publication_type' => 0,
    'research_themes' => 0,
    'school_themes' => 0,
    'stanford_slide_category' => 0,
    'soe_accent_color' => 0,
    'stanford_staff_type' => 0,
    'stanford_event_audience' => 0,
    'stanford_event_categories' => 0,
    'stanford_student_type' => 0,
    'tags' => 0,
  );
  /* Sort criterion: Content: Publishing Date (field_s_mag_article_date) */
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['id'] = 'field_s_mag_article_date_value';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['field'] = 'field_s_mag_article_date_value';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_magazine_article' => 'stanford_magazine_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $export['stanford_taxonomy_term'] = $view;

  return $export;
}

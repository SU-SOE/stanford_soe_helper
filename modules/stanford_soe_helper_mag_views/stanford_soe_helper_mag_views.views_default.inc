<?php
/**
 * @file
 * stanford_soe_helper_mag_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_soe_helper_mag_views_views_default_views() {

  $view = new view();
  $view->name = 'stanford_magazine_issues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Magazine Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h1>All Issues</h1>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_featured_target_id']['id'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_featured_target_id']['table'] = 'field_data_field_s_mag_issue_featured';
  $handler->display->display_options['relationships']['field_s_mag_issue_featured_target_id']['field'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_featured_target_id']['label'] = 'Featured Article';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_article_2_target_id']['id'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_2_target_id']['table'] = 'field_data_field_s_mag_issue_article_2';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_2_target_id']['field'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_2_target_id']['label'] = '2nd Article';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_article_3_target_id']['id'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_3_target_id']['table'] = 'field_data_field_s_mag_issue_article_3';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_3_target_id']['field'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_3_target_id']['label'] = '3rd Article';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_article_4_target_id']['id'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_4_target_id']['table'] = 'field_data_field_s_mag_issue_article_4';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_4_target_id']['field'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_4_target_id']['label'] = '4th Article';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_article_5_target_id']['id'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_5_target_id']['table'] = 'field_data_field_s_mag_issue_article_5';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_5_target_id']['field'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_5_target_id']['label'] = '5th Article ';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Layout */
  $handler->display->display_options['fields']['field_s_mag_issue_layout']['id'] = 'field_s_mag_issue_layout';
  $handler->display->display_options['fields']['field_s_mag_issue_layout']['table'] = 'field_data_field_s_mag_issue_layout';
  $handler->display->display_options['fields']['field_s_mag_issue_layout']['field'] = 'field_s_mag_issue_layout';
  $handler->display->display_options['fields']['field_s_mag_issue_layout']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_layout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_layout']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'full_width_banner_tall',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['relationship'] = 'field_s_mag_issue_featured_target_id';
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
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Dek */
  $handler->display->display_options['fields']['field_s_mag_article_dek']['id'] = 'field_s_mag_article_dek';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['table'] = 'field_data_field_s_mag_article_dek';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['field'] = 'field_s_mag_article_dek';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_dek']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_dek']['alter']['preserve_tags'] = '<em> <strong> <a>';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_dek']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_dek']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['settings'] = array(
    'trim_length' => '1000',
  );
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_1']['id'] = 'field_s_mag_article_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_1']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_1']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_1']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image_1']['id'] = 'field_s_mag_article_image_1';
  $handler->display->display_options['fields']['field_s_mag_article_image_1']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image_1']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image_1']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image_1']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['id'] = 'field_s_mag_article_date_1';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics_1']['id'] = 'field_s_mag_article_topics_1';
  $handler->display->display_options['fields']['field_s_mag_article_topics_1']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics_1']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics_1']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics_1']['delta_offset'] = '0';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_2']['id'] = 'field_s_mag_article_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_2']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_2']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_2']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image_2']['id'] = 'field_s_mag_article_image_2';
  $handler->display->display_options['fields']['field_s_mag_article_image_2']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image_2']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image_2']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image_2']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_2']['id'] = 'field_s_mag_article_date_2';
  $handler->display->display_options['fields']['field_s_mag_article_date_2']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_2']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_2']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_2']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics_2']['id'] = 'field_s_mag_article_topics_2';
  $handler->display->display_options['fields']['field_s_mag_article_topics_2']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics_2']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics_2']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics_2']['delta_offset'] = '0';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_3']['id'] = 'field_s_mag_article_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_3']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_3']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_3']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image_3']['id'] = 'field_s_mag_article_image_3';
  $handler->display->display_options['fields']['field_s_mag_article_image_3']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image_3']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image_3']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image_3']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_3']['id'] = 'field_s_mag_article_date_3';
  $handler->display->display_options['fields']['field_s_mag_article_date_3']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_3']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_3']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_3']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics_3']['id'] = 'field_s_mag_article_topics_3';
  $handler->display->display_options['fields']['field_s_mag_article_topics_3']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics_3']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics_3']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics_3']['delta_offset'] = '0';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_4']['id'] = 'field_s_mag_article_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_4']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_4']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_4']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image_4']['id'] = 'field_s_mag_article_image_4';
  $handler->display->display_options['fields']['field_s_mag_article_image_4']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image_4']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image_4']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image_4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image_4']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_4']['id'] = 'field_s_mag_article_date_4';
  $handler->display->display_options['fields']['field_s_mag_article_date_4']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_4']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_4']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_4']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics_4']['id'] = 'field_s_mag_article_topics_4';
  $handler->display->display_options['fields']['field_s_mag_article_topics_4']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics_4']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics_4']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics_4']['delta_offset'] = '0';
  /* Sort criterion: Content: Issue Number (field_s_mag_issue_number) */
  $handler->display->display_options['sorts']['field_s_mag_issue_number_value']['id'] = 'field_s_mag_issue_number_value';
  $handler->display->display_options['sorts']['field_s_mag_issue_number_value']['table'] = 'field_data_field_s_mag_issue_number';
  $handler->display->display_options['sorts']['field_s_mag_issue_number_value']['field'] = 'field_s_mag_issue_number_value';
  $handler->display->display_options['sorts']['field_s_mag_issue_number_value']['order'] = 'DESC';
  /* Contextual filter: Content: Issue Number (field_s_mag_issue_number) */
  $handler->display->display_options['arguments']['field_s_mag_issue_number_value']['id'] = 'field_s_mag_issue_number_value';
  $handler->display->display_options['arguments']['field_s_mag_issue_number_value']['table'] = 'field_data_field_s_mag_issue_number';
  $handler->display->display_options['arguments']['field_s_mag_issue_number_value']['field'] = 'field_s_mag_issue_number_value';
  $handler->display->display_options['arguments']['field_s_mag_issue_number_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_s_mag_issue_number_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_s_mag_issue_number_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_mag_issue_number_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_mag_issue_number_value']['summary_options']['items_per_page'] = '25';
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
    'stanford_magazine_issue' => 'stanford_magazine_issue',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load More';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['path'] = 'magazine/issue';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  $views[$view->name] = $view;

  return $views;
}


<?php
/**
 * @file
 * stanford_soe_helper_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_soe_helper_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_page_banner_caption';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Page Banner Caption';
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Banner URL Link */
  $handler->display->display_options['fields']['field_s_banner_link']['id'] = 'field_s_banner_link';
  $handler->display->display_options['fields']['field_s_banner_link']['table'] = 'field_data_field_s_banner_link';
  $handler->display->display_options['fields']['field_s_banner_link']['field'] = 'field_s_banner_link';
  $handler->display->display_options['fields']['field_s_banner_link']['ui_name'] = 'Content: Banner URL Link';
  $handler->display->display_options['fields']['field_s_banner_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_banner_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_link']['alter']['text'] = '<a href="[field_s_banner_link-url]">';
  $handler->display->display_options['fields']['field_s_banner_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_banner_link']['type'] = 'link_plain';
  /* Field: Content: Banner Text Link */
  $handler->display->display_options['fields']['field_s_banner_link_1']['id'] = 'field_s_banner_link_1';
  $handler->display->display_options['fields']['field_s_banner_link_1']['table'] = 'field_data_field_s_banner_link';
  $handler->display->display_options['fields']['field_s_banner_link_1']['field'] = 'field_s_banner_link';
  $handler->display->display_options['fields']['field_s_banner_link_1']['ui_name'] = 'Content: Banner Text Link';
  $handler->display->display_options['fields']['field_s_banner_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_banner_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_link_1']['alter']['text'] = '</a>';
  $handler->display->display_options['fields']['field_s_banner_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_banner_link_1']['type'] = 'link_plain';
  /* Field: Content: Banner link */
  $handler->display->display_options['fields']['field_s_banner_link_2']['id'] = 'field_s_banner_link_2';
  $handler->display->display_options['fields']['field_s_banner_link_2']['table'] = 'field_data_field_s_banner_link';
  $handler->display->display_options['fields']['field_s_banner_link_2']['field'] = 'field_s_banner_link';
  $handler->display->display_options['fields']['field_s_banner_link_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_banner_link_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_link_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_s_banner_link_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_link_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_banner_link_2']['type'] = 'link_title_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_banner_accent_color']['id'] = 'field_s_banner_accent_color';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['table'] = 'field_data_field_s_banner_accent_color';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['field'] = 'field_s_banner_accent_color';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_accent_color']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_accent_color']['alter']['text'] = 'banner-[field_s_banner_accent_color]';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Caption Position Horizontal */
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['id'] = 'field_s_banner_caption_horizonta';
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['table'] = 'field_data_field_s_banner_caption_horizonta';
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['field'] = 'field_s_banner_caption_horizonta';
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['label'] = '';
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['alter']['text'] = 'banner-[field_s_banner_caption_horizonta]';
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_caption_horizonta']['type'] = 'list_key';
  /* Field: Content: Caption Position Vertical */
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['id'] = 'field_s_banner_caption_vertical';
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['table'] = 'field_data_field_s_banner_caption_vertical';
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['field'] = 'field_s_banner_caption_vertical';
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['label'] = '';
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['alter']['text'] = 'banner-[field_s_banner_caption_vertical]';
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_caption_vertical']['type'] = 'list_key';
  /* Field: Content: Banner image */
  $handler->display->display_options['fields']['field_s_banner_image']['id'] = 'field_s_banner_image';
  $handler->display->display_options['fields']['field_s_banner_image']['table'] = 'field_data_field_s_banner_image';
  $handler->display->display_options['fields']['field_s_banner_image']['field'] = 'field_s_banner_image';
  $handler->display->display_options['fields']['field_s_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_image']['alter']['path'] = '[field_s_banner_link_1]';
  $handler->display->display_options['fields']['field_s_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_banner_image']['element_wrapper_class'] = 'banner-image';
  $handler->display->display_options['fields']['field_s_banner_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_banner_image']['settings'] = array(
    'image_style' => 'full-width-banner-short',
    'image_link' => '',
  );
  /* Field: Global: Rewrite view */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: Rewrite view';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="banner-bottom-container">
  <div>[field_s_banner_link][field_s_banner_image][field_s_banner_link_1]</div>
  <div class="banner-caption stanford-banner-text [field_s_banner_accent_color] [field_s_banner_caption_horizonta][field_s_banner_caption_vertical]">
      <div class="more-link">[field_s_banner_link][field_s_banner_link_2][field_s_banner_link_1]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
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
    'stanford_page' => 'stanford_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['stanford_page_banner_caption'] = $view;

  $view = new view();
  $view->name = 'stanford_page_top_banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Page: Top Banner';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Field: Featured Image (field_s_image_info) */
  $handler->display->display_options['relationships']['field_s_image_info_value']['id'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['relationships']['field_s_image_info_value']['field'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['label'] = 'Featured Image';
  $handler->display->display_options['relationships']['field_s_image_info_value']['delta'] = '-1';
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['text'] = '<div class="banner-image">[field_s_image_image]</div>';
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => 'full-width-banner-short',
    'image_link' => '',
  );
  /* Field: Content: Text Position Horizontal */
  $handler->display->display_options['fields']['field_s_top_banner_caption_horiz']['id'] = 'field_s_top_banner_caption_horiz';
  $handler->display->display_options['fields']['field_s_top_banner_caption_horiz']['table'] = 'field_data_field_s_top_banner_caption_horiz';
  $handler->display->display_options['fields']['field_s_top_banner_caption_horiz']['field'] = 'field_s_top_banner_caption_horiz';
  $handler->display->display_options['fields']['field_s_top_banner_caption_horiz']['label'] = '';
  $handler->display->display_options['fields']['field_s_top_banner_caption_horiz']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_top_banner_caption_horiz']['element_label_colon'] = FALSE;
  /* Field: Content: Text Position Vertical */
  $handler->display->display_options['fields']['field_s_top_banner_caption_vert']['id'] = 'field_s_top_banner_caption_vert';
  $handler->display->display_options['fields']['field_s_top_banner_caption_vert']['table'] = 'field_data_field_s_top_banner_caption_vert';
  $handler->display->display_options['fields']['field_s_top_banner_caption_vert']['field'] = 'field_s_top_banner_caption_vert';
  $handler->display->display_options['fields']['field_s_top_banner_caption_vert']['label'] = '';
  $handler->display->display_options['fields']['field_s_top_banner_caption_vert']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_top_banner_caption_vert']['element_label_colon'] = FALSE;
  /* Field: Content: Top Banner Accent Color */
  $handler->display->display_options['fields']['field_s_top_banner_color']['id'] = 'field_s_top_banner_color';
  $handler->display->display_options['fields']['field_s_top_banner_color']['table'] = 'field_data_field_s_top_banner_color';
  $handler->display->display_options['fields']['field_s_top_banner_color']['field'] = 'field_s_top_banner_color';
  $handler->display->display_options['fields']['field_s_top_banner_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_top_banner_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_top_banner_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_top_banner_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Call to Action Button */
  $handler->display->display_options['fields']['field_s_page_cta_link']['id'] = 'field_s_page_cta_link';
  $handler->display->display_options['fields']['field_s_page_cta_link']['table'] = 'field_data_field_s_page_cta_link';
  $handler->display->display_options['fields']['field_s_page_cta_link']['field'] = 'field_s_page_cta_link';
  $handler->display->display_options['fields']['field_s_page_cta_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_page_cta_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_page_cta_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_page_cta_link']['alter']['text'] = '<div class="page-cta-link-container"><a class="btn" href="[field_s_page_cta_link-url]">[field_s_page_cta_link-title]</a></div>';
  $handler->display->display_options['fields']['field_s_page_cta_link']['alter']['path'] = '[field_s_page_cta_link-url]';
  $handler->display->display_options['fields']['field_s_page_cta_link']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['field_s_page_cta_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_page_cta_link']['click_sort_column'] = 'url';
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_s_image_caption']['id'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['table'] = 'field_data_field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['field'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['preserve_tags'] = '<em> <strong> <a> <h2> <btn> <p>';
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_caption']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_caption']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_image_caption']['settings'] = array(
    'trim_length' => '1000',
  );
  /* Field: Field collection item: Caption rewrite */
  $handler->display->display_options['fields']['field_s_image_caption_1']['id'] = 'field_s_image_caption_1';
  $handler->display->display_options['fields']['field_s_image_caption_1']['table'] = 'field_data_field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption_1']['field'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption_1']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_caption_1']['ui_name'] = 'Field collection item: Caption rewrite';
  $handler->display->display_options['fields']['field_s_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_caption_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_caption_1']['alter']['text'] = '<div class="banner-overlay top-banner-[field_s_top_banner_color]  top-banner-[field_s_top_banner_caption_horiz] top-banner-[field_s_top_banner_caption_vert]">
    <div>
     <div class="top-banner-[field_s_top_banner_color]"></div>
      <div class="page-feat-caption-container">[field_s_image_caption]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['field_s_image_caption_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_s_image_caption_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_s_image_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_caption_1']['element_wrapper_type'] = 'div';
  /* Field: Global: Custom text view rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: Custom text view rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ga-scroll-tracking page-feat-image-container">
[field_s_image_image]
[field_s_image_caption_1]
[field_s_page_cta_link]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
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
    'stanford_page' => 'stanford_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['stanford_page_top_banner'] = $view;

  return $export;
}

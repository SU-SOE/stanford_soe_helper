<?php
/**
 * @file
 * stanford_people_spotlight_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_people_spotlight_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_people_spotlight_fw_banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: FW Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stanford People Spotlight: FW Banner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<!-- PASS THROUGH SAME TAXONOMY SELECTION AS FOR THE IMG -->
<div class="spotlight-fw-banner-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="https://stanford.edu">More Stories</a>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['id'] = 'field_s_ppl_spot_image';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['table'] = 'field_data_field_s_ppl_spot_image';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['field'] = 'field_s_ppl_spot_image';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['settings'] = array(
    'image_style' => 'square_370_x_370',
    'image_link' => 'content',
  );
  /* Field: Content: Image Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['id'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['table'] = 'field_data_field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['field'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Title (name) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title (name)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Name Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['id'] = 'field_s_ppl_spot_name_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['table'] = 'field_data_field_s_ppl_spot_name_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['field'] = 'field_s_ppl_spot_name_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Title (position) */
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['id'] = 'field_s_ppl_spot_title';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['table'] = 'field_data_field_s_ppl_spot_title';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['field'] = 'field_s_ppl_spot_title';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['ui_name'] = 'Title (position)';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['type'] = 'text_plain';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['id'] = 'field_s_ppl_spot_department';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['field'] = 'field_s_ppl_spot_department';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['delta_offset'] = '0';
  /* Field: Content: Degrees */
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['id'] = 'field_s_ppl_spot_degrees';
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['table'] = 'field_data_field_s_ppl_spot_degrees';
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['field'] = 'field_s_ppl_spot_degrees';
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['type'] = 'text_plain';
  /* Field: Content: Lead text/quote */
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['id'] = 'field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['table'] = 'field_data_field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['field'] = 'field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['preserve_tags'] = '<em> <strong>';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-fw-banner-container">
  <div class="spotlight-fw-banner-all-content-container">
      <!-- WRAP IMG IN LINK TO NODE -->
    <div class="spotlight-fw-banner-img spotlight-img-color-[field_s_ppl_spot_image_color]">
       <!-- NEW IMAGE STYLE: SQUARE 370X370 -->
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-fw-banner-info-container">
      <!-- WRAP NAME IN LINK TO NODE -->
      <div class="spotlight-fw-banner-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-fw-banner-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-fw-banner-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-fw-banner-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <!-- CHARACTER LIMIT OF 105 ENDING ON A FULL WORD -->
      <div class="spotlight-fw-banner-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block - no button */
  $handler = $view->new_display('block', 'Block - no button', 'block_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;

  /* Display: Block - node */
  $handler = $view->new_display('block', 'Block - node', 'block_node');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );

  /* Display: Block - departments */
  $handler = $view->new_display('block', 'Block - departments', 'block_departments');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'stanford_department' => 'stanford_department',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_department' => 'stanford_department',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $export['stanford_people_spotlight_fw_banner'] = $view;

  $view = new view();
  $view->name = 'stanford_people_spotlight_fw_banner_no_quote';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: FW Banner, no quote';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stanford People Spotlight: FW Banner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<!-- PASS THROUGH SAME TAXONOMY SELECTION AS FOR THE IMG -->
<div class="spotlight-fw-banner-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="https://stanford.edu">More Stories</a>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['id'] = 'field_s_ppl_spot_image';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['table'] = 'field_data_field_s_ppl_spot_image';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['field'] = 'field_s_ppl_spot_image';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_ppl_spot_image']['settings'] = array(
    'image_style' => 'square_370_x_370',
    'image_link' => 'content',
  );
  /* Field: Content: Image Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['id'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['table'] = 'field_data_field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['field'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Title (name) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title (name)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Name Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['id'] = 'field_s_ppl_spot_name_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['table'] = 'field_data_field_s_ppl_spot_name_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['field'] = 'field_s_ppl_spot_name_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_name_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Title (position) */
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['id'] = 'field_s_ppl_spot_title';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['table'] = 'field_data_field_s_ppl_spot_title';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['field'] = 'field_s_ppl_spot_title';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['ui_name'] = 'Title (position)';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_title']['type'] = 'text_plain';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['id'] = 'field_s_ppl_spot_department';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['field'] = 'field_s_ppl_spot_department';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_ppl_spot_department']['delta_offset'] = '0';
  /* Field: Content: Degrees */
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['id'] = 'field_s_ppl_spot_degrees';
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['table'] = 'field_data_field_s_ppl_spot_degrees';
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['field'] = 'field_s_ppl_spot_degrees';
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_degrees']['type'] = 'text_plain';
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-fw-banner-container">
  <div class="spotlight-fw-banner-all-content-container">
      <!-- WRAP IMG IN LINK TO NODE -->
    <div class="spotlight-fw-banner-img spotlight-img-color-[field_s_ppl_spot_image_color]">
       <!-- NEW IMAGE STYLE: SQUARE 370X370 -->
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-fw-banner-info-container">
      <!-- WRAP NAME IN LINK TO NODE -->
      <div class="spotlight-fw-banner-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-fw-banner-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-fw-banner-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-fw-banner-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block - no button */
  $handler = $view->new_display('block', 'Block - no button', 'block_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $export['stanford_people_spotlight_fw_banner_no_quote'] = $view;

  return $export;
}
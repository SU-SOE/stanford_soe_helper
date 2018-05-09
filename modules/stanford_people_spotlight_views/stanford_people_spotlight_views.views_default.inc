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
  $view->name = 'stanford_people_spot_1_vertical_span6_card';
  $view->description = 'This randomly selects Stanford People Spotlight nodes, displays 1, and uses span6 and  Large Square image style';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: 1, Vertical, Span6, Card';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color] span6">
  <a class="btn" href="spotlight">More Stories</a>
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
    'image_style' => 'large-square',
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
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="spotlight-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block Any */
  $handler = $view->new_display('block', 'Block Any', 'block_any');

  /* Display: Block Any - no button */
  $handler = $view->new_display('block', 'Block Any - no button', 'block_any_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;

  /* Display: Block Faculty */
  $handler = $view->new_display('block', 'Block Faculty', 'block_faculty');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Faculty - No Button */
  $handler = $view->new_display('block', 'Block Faculty - No Button', 'block_faculty_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students  */
  $handler = $view->new_display('block', 'Block Students ', 'block_students');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students - No Button */
  $handler = $view->new_display('block', 'Block Students - No Button', 'block_students_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  $export['stanford_people_spot_1_vertical_span6_card'] = $view;

  $view = new view();
  $view->name = 'stanford_people_spotlight_1_v_span4_card';
  $view->description = 'This randomly selects Stanford People Spotlight nodes, displays 1,  and uses span4 and  Large Square image style';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: 1, Vertical, Span4, Card';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color] span4">
  <a class="btn" href="spotlight">More Stories</a>
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
    'image_style' => 'large-square',
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
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="spotlight-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block Any */
  $handler = $view->new_display('block', 'Block Any', 'block_any');

  /* Display: Block Any - no button */
  $handler = $view->new_display('block', 'Block Any - no button', 'block_any_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;

  /* Display: Block Faculty */
  $handler = $view->new_display('block', 'Block Faculty', 'block_faculty');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Faculty - No Button */
  $handler = $view->new_display('block', 'Block Faculty - No Button', 'block_faculty_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students  */
  $handler = $view->new_display('block', 'Block Students ', 'block_students');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students - No Button */
  $handler = $view->new_display('block', 'Block Students - No Button', 'block_students_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  $export['stanford_people_spotlight_1_v_span4_card'] = $view;

  $view = new view();
  $view->name = 'stanford_people_spotlight_fw_banner';
  $view->description = 'This uses square image size 370x370';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: FW Banner - No Quote';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="spotlight">More Stories</a>
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
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
  $view->name = 'stanford_people_spotlight_h_card';
  $view->description = 'This randomly selects Stanford People Spotlight nodes and uses Large Square image style';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: Horizontal Card';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="spotlight">More Stories</a>
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
    'image_style' => 'large-square',
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
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="spotlight-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block Any */
  $handler = $view->new_display('block', 'Block Any', 'block_any');

  /* Display: Block Any - no button */
  $handler = $view->new_display('block', 'Block Any - no button', 'block_any_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;

  /* Display: Block Faculty */
  $handler = $view->new_display('block', 'Block Faculty', 'block_faculty');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="spotlight/faculty">See All Faculty</a>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Faculty - No Button */
  $handler = $view->new_display('block', 'Block Faculty - No Button', 'block_faculty_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students  */
  $handler = $view->new_display('block', 'Block Students ', 'block_students');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students - No Button */
  $handler = $view->new_display('block', 'Block Students - No Button', 'block_students_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Alumni */
  $handler = $view->new_display('block', 'Block Alumni', 'block_alumni');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="spotlight/alumni">More Alumni Stories</a>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Alumni - No Button */
  $handler = $view->new_display('block', 'Block Alumni - No Button', 'block_alumni_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Any - Related Page */
  $handler = $view->new_display('block', 'Block Any - Related Page', 'block_any_related_page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Page (field_s_ppl_spot_related_page) */
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['id'] = 'field_s_ppl_spot_related_page_target_id';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['table'] = 'field_data_field_s_ppl_spot_related_page';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['field'] = 'field_s_ppl_spot_related_page_target_id';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block Any - Related Page, No button */
  $handler = $view->new_display('block', 'Block Any - Related Page, No button', 'block_any_related_page_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Page (field_s_ppl_spot_related_page) */
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['id'] = 'field_s_ppl_spot_related_page_target_id';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['table'] = 'field_data_field_s_ppl_spot_related_page';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['field'] = 'field_s_ppl_spot_related_page_target_id';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block Any - AA */
  $handler = $view->new_display('block', 'Block Any - AA', 'block_any_aa');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3374 => '3374',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - BioE */
  $handler = $view->new_display('block', 'Block Any - BioE', 'block_any_bioe');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3376 => '3376',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - CE */
  $handler = $view->new_display('block', 'Block Any - CE', 'block_any_ce');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3378 => '3378',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - CEE */
  $handler = $view->new_display('block', 'Block Any - CEE', 'block_any_cee');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3380 => '3380',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - CS */
  $handler = $view->new_display('block', 'Block Any - CS', 'block_any_cs');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3382 => '3382',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - EE */
  $handler = $view->new_display('block', 'Block Any - EE', 'block_any_ee');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3384 => '3384',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - ICME */
  $handler = $view->new_display('block', 'Block Any - ICME', 'block_any_icme');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3765 => '3765',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - MS&E */
  $handler = $view->new_display('block', 'Block Any - MS&E', 'block_any_msande');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3386 => '3386',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - MSE */
  $handler = $view->new_display('block', 'Block Any - MSE', 'block_any_mse');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3388 => '3388',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;

  /* Display: Block Any - ME */
  $handler = $view->new_display('block', 'Block Any - ME', 'block_any_me');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['value'] = array(
    3390 => '3390',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['hierarchy'] = 1;
  $export['stanford_people_spotlight_h_card'] = $view;

  $view = new view();
  $view->name = 'stanford_ppl_spot_2_v_span6_card';
  $view->description = 'This randomly selects Stanford People Spotlight nodes, displays 2,  and uses span6 and  Large Square image style';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: 2, Vertical, Span6, Card';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'views-grid-two';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="spotlight">More Stories</a>
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
    'image_style' => 'large-square',
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
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="spotlight-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block Any */
  $handler = $view->new_display('block', 'Block Any', 'block_any');

  /* Display: Block Any - no button */
  $handler = $view->new_display('block', 'Block Any - no button', 'block_any_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;

  /* Display: Block Faculty */
  $handler = $view->new_display('block', 'Block Faculty', 'block_faculty');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Faculty - No Button */
  $handler = $view->new_display('block', 'Block Faculty - No Button', 'block_faculty_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students  */
  $handler = $view->new_display('block', 'Block Students ', 'block_students');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students - No Button */
  $handler = $view->new_display('block', 'Block Students - No Button', 'block_students_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Alumni */
  $handler = $view->new_display('block', 'Block Alumni', 'block_alumni');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="spotlight">More Alumni Stories</a>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Alumni - No Button */
  $handler = $view->new_display('block', 'Block Alumni - No Button', 'block_alumni_no_btn');
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Any - Related Page */
  $handler = $view->new_display('block', 'Block Any - Related Page', 'block_any_related_page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Page (field_s_ppl_spot_related_page) */
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['id'] = 'field_s_ppl_spot_related_page_target_id';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['table'] = 'field_data_field_s_ppl_spot_related_page';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['field'] = 'field_s_ppl_spot_related_page_target_id';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block Any - Related Page - No button */
  $handler = $view->new_display('block', 'Block Any - Related Page - No button', 'block_any_related_page_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Page (field_s_ppl_spot_related_page) */
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['id'] = 'field_s_ppl_spot_related_page_target_id';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['table'] = 'field_data_field_s_ppl_spot_related_page';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['field'] = 'field_s_ppl_spot_related_page_target_id';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_ppl_spot_related_page_target_id']['summary_options']['items_per_page'] = '25';
  $export['stanford_ppl_spot_2_v_span6_card'] = $view;

  $view = new view();
  $view->name = 'stanford_ppl_spot_3_v_card';
  $view->description = 'This displays Stanford People Spotlight nodes. It uses CSS class views-grid-3 and Large Square image style.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: 3, Vertical, Card';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'views-grid-three';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '7';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No spotlight filter results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No spotlights available with those filter criteria. Please try a different selection option.';
  $handler->display->display_options['empty']['area']['format'] = 'content_editor_text_format';
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
    'image_style' => 'square_scale_and_crop_270_x_270',
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
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['id'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Lead text/quote */
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['id'] = 'field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['table'] = 'field_data_field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['field'] = 'field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="spotlight-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
    3779 => '3779',
    88 => '88',
    90 => '90',
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['operator_id'] = 'field_s_ppl_spot_affiliation_tid_op';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['label'] = 'Affiliation (field_s_ppl_spot_affiliation)';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['operator'] = 'field_s_ppl_spot_affiliation_tid_op';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['identifier'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  /* Filter criterion: Content: Department (field_s_ppl_spot_department) */
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['id'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['table'] = 'field_data_field_s_ppl_spot_department';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['field'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['expose']['operator_id'] = 'field_s_ppl_spot_department_tid_op';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['expose']['operator'] = 'field_s_ppl_spot_department_tid_op';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['expose']['identifier'] = 'field_s_ppl_spot_department_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_department_tid']['vocabulary'] = 'stanford_department';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'spotlight';

  /* Display: Block Any */
  $handler = $view->new_display('block', 'Block Any', 'block_any');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
    3779 => '3779',
    88 => '88',
    90 => '90',
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['operator_id'] = 'field_s_ppl_spot_affiliation_tid_op';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['label'] = 'Affiliation (field_s_ppl_spot_affiliation)';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['operator'] = 'field_s_ppl_spot_affiliation_tid_op';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['identifier'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Faculty */
  $handler = $view->new_display('block', 'Block Faculty', 'block_faculty');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Students  */
  $handler = $view->new_display('block', 'Block Students ', 'block_students');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Alumni  */
  $handler = $view->new_display('block', 'Block Alumni ', 'block_alumni');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block giving  */
  $handler = $view->new_display('block', 'Block giving ', 'block_giving');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3779 => '3779',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block Staff */
  $handler = $view->new_display('block', 'Block Staff', 'block_staff');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    90 => '90',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Attachment First Spot */
  $handler = $view->new_display('attachment', 'Attachment First Spot', 'attachment_first_spot');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['id'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Lead text/quote */
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['id'] = 'field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['table'] = 'field_data_field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['field'] = 'field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="spotlight-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_any' => 0,
    'block_faculty' => 0,
    'block_students' => 0,
    'block_alumni' => 0,
    'block_giving' => 0,
    'block_staff' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['stanford_ppl_spot_3_v_card'] = $view;

  $view = new view();
  $view->name = 'stanford_ppl_spot_fw_banner_quote';
  $view->description = 'This uses square image size 370x370';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: FW Banner - Quote';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
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
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
  <a class="btn" href="spotlight">More Stories</a>
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
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="spotlight-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['operator_id'] = 'field_s_ppl_spot_affiliation_tid_op';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['label'] = 'Affiliation (field_s_ppl_spot_affiliation)';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['operator'] = 'field_s_ppl_spot_affiliation_tid_op';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['expose']['identifier'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block - no button */
  $handler = $view->new_display('block', 'Block - no button', 'block_no_button');
  $handler->display->display_options['defaults']['footer'] = FALSE;

  /* Display: Block - depts, quote, button */
  $handler = $view->new_display('block', 'Block - depts, quote, button', 'block_depts_quote_btn');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
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

  /* Display: Block - depts, quote */
  $handler = $view->new_display('block', 'Block - depts, quote', 'block_depts_quote');
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
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
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

  /* Display: Block - quote, affiliation */
  $handler = $view->new_display('block', 'Block - quote, affiliation', 'block_quote_affiliation');
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
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';

  /* Display: Block - quote, faculty */
  $handler = $view->new_display('block', 'Block - quote, faculty', 'block_quote_faculty');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block - quote, students */
  $handler = $view->new_display('block', 'Block - quote, students', 'block_1');
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block - quote, not random */
  $handler = $view->new_display('block', 'Block - quote, not random', 'block_quote_not_random');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['id'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Lead text/quote */
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['id'] = 'field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['table'] = 'field_data_field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['field'] = 'field_s_ppl_spot_quote';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['max_length'] = '105';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_s_ppl_spot_quote']['settings'] = array(
    'trim_length' => '600',
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
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-img spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_image]
    </div>
    <div class="spotlight-info-container">
      <div class="spotlight-name spotlight-name-color-[field_s_ppl_spot_name_color]">
        <h2>[title]</h2>
      </div>
      <div class="spotlight-title">
        <p>[field_s_ppl_spot_title]</p>
      </div>
      <div class="spotlight-degree">
        <p>[field_s_ppl_spot_degrees]</p>
      </div>
      <div class="spotlight-department">
        <p>[field_s_ppl_spot_department]</p>
      </div>
      <div class="spotlight-quote">
        <p>[field_s_ppl_spot_quote]</p>
      </div>
      <div class="edit-link">[edit_node]</div>
    </div>
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );

  /* Display: Block - Alumni, quote, not random */
  $handler = $view->new_display('block', 'Block - Alumni, quote, not random', 'block_alumni_quote_not_random');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block - Faculty, quote, not random */
  $handler = $view->new_display('block', 'Block - Faculty, quote, not random', 'block_faculty_quote_not_random');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block - Student, quote, not random */
  $handler = $view->new_display('block', 'Block - Student, quote, not random', 'block_student_quote_not_random');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block - Staff, quote, not random */
  $handler = $view->new_display('block', 'Block - Staff, quote, not random', 'block_staff');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    90 => '90',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';

  /* Display: Block - Giving, quote, not random */
  $handler = $view->new_display('block', 'Block - Giving, quote, not random', 'block_giving');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3779 => '3779',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  $export['stanford_ppl_spot_fw_banner_quote'] = $view;

  $view = new view();
  $view->name = 'stanford_ppl_spot_related_pages';
  $view->description = 'Allows easier selection of Stanford Pages and Landing Pages for Spotlights.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: Related Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Select Landing Pages and Stanford Pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title], [nid] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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
    'stanford_landing_page' => 'stanford_landing_page',
    'stanford_page' => 'stanford_page',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'nothing' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['stanford_ppl_spot_related_pages'] = $view;

  $view = new view();
  $view->name = 'stanford_pple_spot_see_more_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Spotlight: See more block';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['relationships']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['relationships']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['relationships']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['relationships']['field_s_ppl_spot_affiliation_tid']['label'] = 'term from affiliation';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'stanford_affiliation' => 'stanford_affiliation',
    'stanford_affiliate_organization_type' => 0,
    'capx_organizations' => 0,
    'stanford_department' => 0,
    'stanford_event_type' => 0,
    'stanford_faculty_type' => 0,
    'fellowship_location' => 0,
    'stanford_field_of_study' => 0,
    'stanford_interests' => 0,
    'stanford_magazine_eyebrow' => 0,
    'stanford_magazine_series' => 0,
    'stanford_magazine_topics' => 0,
    'news_categories' => 0,
    'stanford_opp_city' => 0,
    'stanford_opp_location' => 0,
    'stanford_opp_major' => 0,
    'stanford_opp_open_to' => 0,
    'stanford_opp_sponsor' => 0,
    'stanford_opp_time_of_year' => 0,
    'stanford_opp_type' => 0,
    'publication_type' => 0,
    'stanford_related_content' => 0,
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
  /* Field: Content: Affiliation link */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['id'] = 'field_s_ppl_spot_affiliation_1';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['ui_name'] = 'Content: Affiliation link';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['text'] = 'See more stories';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['path'] = 'spotlight/office-dean';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['element_label_colon'] = FALSE;
  /* Field: Content: Image Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['id'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['table'] = 'field_data_field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['field'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_affiliation_1]
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Faculty Block - node */
  $handler = $view->new_display('block', 'Faculty Block - node', 'faculty_block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['id'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['table'] = 'field_data_field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['field'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text - Faculty */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: Custom text - Faculty';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
      <a class="btn" href="faculty">See all faculty</a>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['id'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['text'] = 'See all faculty';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['path'] = 'spotlight/faculty';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['element_label_colon'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['hierarchy'] = 1;

  /* Display: Office of the Dean Block - node */
  $handler = $view->new_display('block', 'Office of the Dean Block - node', 'block_office_dean');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Affiliation link */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['id'] = 'field_s_ppl_spot_affiliation_1';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['ui_name'] = 'Content: Affiliation link';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['text'] = 'See more stories from the Office of the Dean';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['path'] = 'spotlight/office-dean';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation_1']['element_label_colon'] = FALSE;
  /* Field: Content: Image Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['id'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['table'] = 'field_data_field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['field'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_affiliation_1]
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3769 => '3769',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['hierarchy'] = 1;

  /* Display: Staff block - node */
  $handler = $view->new_display('block', 'Staff block - node', 'block_staff');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['id'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['table'] = 'field_data_field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['field'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['id'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['text'] = 'See all staff';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['path'] = 'spotlight/staff';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_affiliation]
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    90 => '90',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['hierarchy'] = 1;

  /* Display: Students block - node */
  $handler = $view->new_display('block', 'Students block - node', 'block_students');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['id'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['table'] = 'field_data_field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['field'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Affiliation link */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['id'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['ui_name'] = 'Content: Affiliation link';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['text'] = 'See all students';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['path'] = 'spotlight/students';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_affiliation]
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['hierarchy'] = 1;

  /* Display: Alumni block - node */
  $handler = $view->new_display('block', 'Alumni block - node', 'block_alumni');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Color */
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['id'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['table'] = 'field_data_field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['field'] = 'field_s_ppl_spot_image_color';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_image_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['id'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['field'] = 'field_s_ppl_spot_affiliation';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['text'] = 'See all alumni';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['path'] = 'spotlight/alumni';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['alter']['link_class'] = 'btn';
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_ppl_spot_affiliation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="spotlight-container">
  <div class="spotlight-all-content-container">
    <div class="spotlight-button spotlight-img-color-[field_s_ppl_spot_image_color]">
      [field_s_ppl_spot_affiliation]
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'stanford_people_spotlight' => 'stanford_people_spotlight',
  );
  /* Filter criterion: Content: Affiliation (field_s_ppl_spot_affiliation) */
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['id'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['table'] = 'field_data_field_s_ppl_spot_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['field'] = 'field_s_ppl_spot_affiliation_tid';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['value'] = array(
    3767 => '3767',
  );
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['vocabulary'] = 'stanford_affiliation';
  $handler->display->display_options['filters']['field_s_ppl_spot_affiliation_tid']['hierarchy'] = 1;
  $export['stanford_pple_spot_see_more_block'] = $view;

  return $export;
}

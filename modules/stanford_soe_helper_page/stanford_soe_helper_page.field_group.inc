<?php
/**
 * @file
 * stanford_soe_helper_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_soe_helper_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_page_banner|node|stanford_page|form';
  $field_group->group_name = 'group_s_page_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Bottom Banner',
    'weight' => '43',
    'children' => array(
      0 => 'field_s_page_caption_color',
      1 => 'field_s_page_caption_horizontal',
      2 => 'field_s_page_caption_vertical',
      3 => 'field_s_page_caption',
      4 => 'field_s_banner_image',
      5 => 'field_s_banner_caption',
      6 => 'field_s_banner_caption_color',
      7 => 'field_s_banner_caption_horizonta',
      8 => 'field_s_banner_caption_vertical',
      9 => 'field_s_banner_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add/Edit Bottom Banner',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-s-page-banner field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_s_page_banner|node|stanford_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|node|stanford_page|full';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '15',
    'children' => array(
      0 => 'field_s_page_file',
      1 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-content group-s-postcard-content ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_postcard_content|node|stanford_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|node|stanford_page|full';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '13',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-image group-s-postcard-image ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_postcard_image|node|stanford_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_page|full';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_s_postcard_content',
      1 => 'group_s_postcard_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_postcard|node|stanford_page|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add/Edit Bottom Banner');
  t('Postcard');
  t('Postcard Content');
  t('Postcard Image');

  return $field_groups;
}

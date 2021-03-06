<?php
/**
 * @file
 * stanford_people_spotlight.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_people_spotlight_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_ppl_spot_categories|node|stanford_people_spotlight|form';
  $field_group->group_name = 'group_s_ppl_spot_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_people_spotlight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories Group',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_ppl_spot_department',
      1 => 'field_s_ppl_spot_affiliation',
      2 => 'field_s_ppl_spot_related_page',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categories Group',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-s-ppl-spot-categories field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_s_ppl_spot_categories|node|stanford_people_spotlight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_ppl_spot_container|node|stanford_people_spotlight|full';
  $field_group->group_name = 'group_s_ppl_spot_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_people_spotlight';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'group_s_ppl_spot_content_cntnr',
      1 => 'group_s_ppl_spot_date_container',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-ppl-spot-container field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_ppl_spot_container|node|stanford_people_spotlight|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_ppl_spot_content_cntnr|node|stanford_people_spotlight|full';
  $field_group->group_name = 'group_s_ppl_spot_content_cntnr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_people_spotlight';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_ppl_spot_container';
  $field_group->data = array(
    'label' => 'Content Container',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_s_ppl_spot_photo_credit',
      2 => 'group_s_ppl_spot_summary',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-ppl-spot-content-cntnr field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_ppl_spot_content_cntnr|node|stanford_people_spotlight|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_ppl_spot_date_container|node|stanford_people_spotlight|full';
  $field_group->group_name = 'group_s_ppl_spot_date_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_people_spotlight';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_ppl_spot_container';
  $field_group->data = array(
    'label' => 'Published Date',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_ppl_spot_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Published Date',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-ppl-spot-date-container field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_ppl_spot_date_container|node|stanford_people_spotlight|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_ppl_spot_image|node|stanford_people_spotlight|form';
  $field_group->group_name = 'group_s_ppl_spot_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_people_spotlight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image group',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_ppl_spot_image',
      1 => 'field_s_ppl_spot_image_color',
      2 => 'field_s_ppl_spot_photo_credit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s-ppl-spot-image field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_s_ppl_spot_image|node|stanford_people_spotlight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_ppl_spot_name|node|stanford_people_spotlight|form';
  $field_group->group_name = 'group_s_ppl_spot_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_people_spotlight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name Group',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_ppl_spot_name_color',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s-ppl-spot-name field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_s_ppl_spot_name|node|stanford_people_spotlight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_ppl_spot_story|node|stanford_people_spotlight|form';
  $field_group->group_name = 'group_s_ppl_spot_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_people_spotlight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Story Group',
    'weight' => '8',
    'children' => array(
      0 => 'body',
      1 => 'field_s_ppl_spot_date',
      2 => 'field_s_ppl_spot_quote',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s-ppl-spot-story field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_s_ppl_spot_story|node|stanford_people_spotlight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_ppl_spot_summary|node|stanford_people_spotlight|full';
  $field_group->group_name = 'group_s_ppl_spot_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_people_spotlight';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_ppl_spot_content_cntnr';
  $field_group->data = array(
    'label' => 'Summary Styles',
    'weight' => '29',
    'children' => array(
      0 => 'field_s_ppl_spot_quote',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_ppl_spot_summary|node|stanford_people_spotlight|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories Group');
  t('Container');
  t('Content Container');
  t('Image group');
  t('Name Group');
  t('Published Date');
  t('Story Group');
  t('Summary Styles');

  return $field_groups;
}

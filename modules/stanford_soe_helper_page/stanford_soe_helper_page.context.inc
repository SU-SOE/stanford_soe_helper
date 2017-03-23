<?php
/**
 * @file
 * stanford_soe_helper_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_soe_helper_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_page_engineering';
  $context->description = 'Engineering context for Stanford pages ';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_page' => 'stanford_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-title' => array(
          'module' => 'ds_extras',
          'delta' => 'title',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
      ),
    ),
    'context_reaction_view_mode' => array(
      'entity_types' => array(
        'bean' => array(
          'stanford_banner' => 'none',
          'stanford_big_text_block' => 'none',
          'stanford_contact' => 'none',
          'stanford_icon_block' => 'none',
          'stanford_large_block' => 'none',
          'stanford_postcard' => 'none',
          'stanford_social_media_connect' => 'none',
          'stanford_testimonial_block' => 'none',
          'stanford_gallery' => 'none',
        ),
        'field_collection_item' => array(
          'field_s_image_info' => 'none',
          'field_s_event_speakers' => 'none',
          'field_s_gallery_image_info' => 'none',
          'field_landing_page_item' => 'none',
          'field_p_cards_card' => 'none',
        ),
        'node' => array(
          'stanford_affiliate_organization' => 'none',
          'stanford_gallery' => 'none',
          'stanford_help_page' => 'none',
          'stanford_landing_page' => 'none',
          'stanford_magazine_article' => 'none',
          'stanford_news_item' => 'none',
          'stanford_person' => 'none',
          'stanford_private_page' => 'none',
          'stanford_publication' => 'none',
          'stanford_event' => 'none',
          'stanford_event_importer' => 'none',
          'stanford_event_series' => 'none',
          'stanford_page' => 'stanford_engineering',
        ),
        'paragraphs_item' => array(
          'p_buttons' => 'none',
          'p_callout' => 'none',
          'p_cards' => 'none',
          'p_hero' => 'none',
          'p_menu' => 'none',
          'p_wysiwyg' => 'none',
        ),
        'capx_cfe' => array(
          'mapper' => 'none',
          'importer' => 'none',
        ),
        'capx_cfe_type' => array(
          'capx_cfe_type' => 'none',
        ),
        'file' => array(
          'image' => 'none',
          'video' => 'none',
          'audio' => 'none',
          'document' => 'none',
        ),
        'taxonomy_term' => array(
          'stanford_affiliate_organization_type' => 'none',
          'stanford_affiliation' => 'none',
          'stanford_faculty_type' => 'none',
          'stanford_field_of_study' => 'none',
          'stanford_interests' => 'none',
          'stanford_staff_type' => 'none',
          'stanford_student_type' => 'none',
          'stanford_event_audience' => 'none',
          'stanford_event_categories' => 'none',
          'stanford_event_type' => 'none',
          'publication_type' => 'none',
          'news_categories' => 'none',
          'research_themes' => 'none',
          'school_themes' => 'none',
          'stanford_department' => 'none',
          'tags' => 'none',
          'stanford_video_categories' => 'none',
          'stanford_slide_category' => 'none',
          'fellowship_location' => 'none',
          'stanford_magazine_topics' => 'none',
          'stanford_magazine_series' => 'none',
        ),
        'user' => array(
          'user' => 'none',
        ),
        'wysiwyg_profile' => array(
          'wysiwyg_profile' => 'none',
        ),
        'reactions__plugins__context_reaction_view_mode__entity_types__active_tab' => 'edit-reactions-plugins-context-reaction-view-mode-entity-types-bean',
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for Stanford pages ');
  $export['stanford_page_engineering'] = $context;

  return $export;
}

<?php
/**
 * @file
 * stanford_people_spotlight_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_people_spotlight_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight';
  $context->description = 'Context for Stanford People Spotlight pages';
  $context->tag = 'Spotlight';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_people_spotlight' => 'stanford_people_spotlight',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3ad60fe2b7d0858d07b9190d50bd8b56' => array(
          'module' => 'views',
          'delta' => '3ad60fe2b7d0858d07b9190d50bd8b56',
          'region' => 'fullwidth_top',
          'weight' => '-10',
        ),
        'views-005720ec0398a13d1a26b9de441e83ca' => array(
          'module' => 'views',
          'delta' => '005720ec0398a13d1a26b9de441e83ca',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Stanford People Spotlight pages');
  t('Spotlight');
  $export['stanford_people_spotlight'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight_alumni_page_engineering';
  $context->description = 'Engineering context for people spotlight alumni page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'spotlight/alumni' => 'spotlight/alumni',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6841529eb684eef35e2143f17c8a9e6a' => array(
          'module' => 'views',
          'delta' => '6841529eb684eef35e2143f17c8a9e6a',
          'region' => 'fullwidth_top',
          'weight' => '-10',
        ),
        'views-16eec9ec5c69af61bfa88f8fc6afb1d9' => array(
          'module' => 'views',
          'delta' => '16eec9ec5c69af61bfa88f8fc6afb1d9',
          'region' => 'content_body_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for people spotlight alumni page');
  $export['stanford_people_spotlight_alumni_page_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight_faculty_page_engineering';
  $context->description = 'Engineering context for people spotlight faculty page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'spotlight/faculty' => 'spotlight/faculty',
        'spotlight?field_s_ppl_spot_affiliation_tid=86*' => 'spotlight?field_s_ppl_spot_affiliation_tid=86*',
        'spotlighttest?field_s_ppl_spot_affiliation_tid=86*' => 'spotlighttest?field_s_ppl_spot_affiliation_tid=86*',
        'spotlight?field_s_ppl_spot_affiliation_tid=86' => 'spotlight?field_s_ppl_spot_affiliation_tid=86',
        'spotlighttest?field_s_ppl_spot_affiliation_tid=86' => 'spotlighttest?field_s_ppl_spot_affiliation_tid=86',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c7dddf342ae8352a0ca505dca04b5e11' => array(
          'module' => 'views',
          'delta' => 'c7dddf342ae8352a0ca505dca04b5e11',
          'region' => 'fullwidth_top',
          'weight' => '-6',
        ),
        'views-a45f81a823bb67c64d53eeb553d909bd' => array(
          'module' => 'views',
          'delta' => 'a45f81a823bb67c64d53eeb553d909bd',
          'region' => 'content_body_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for people spotlight faculty page');
  $export['stanford_people_spotlight_faculty_page_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight_giving_page_engineering';
  $context->description = 'Engineering context for people spotlight giving page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'spotlight/giving' => 'spotlight/giving',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-299d165fa9f90595d0b7f9d1ab5a2ddf' => array(
          'module' => 'views',
          'delta' => '299d165fa9f90595d0b7f9d1ab5a2ddf',
          'region' => 'fullwidth_top',
          'weight' => '-5',
        ),
        'views-938d875fa6edc25fe5d1fd13d805a5c0' => array(
          'module' => 'views',
          'delta' => '938d875fa6edc25fe5d1fd13d805a5c0',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for people spotlight giving page');
  $export['stanford_people_spotlight_giving_page_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight_page_engineering';
  $context->description = 'Engineering context for people spotlight landing page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'spotlight' => 'spotlight',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for people spotlight landing page');
  $export['stanford_people_spotlight_page_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight_related_departments';
  $context->description = 'Context for Stanford People Spotlight related departments';
  $context->tag = 'Spotlight';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-9fb51998d37801a63e1e394f44e882b9' => array(
          'module' => 'views',
          'delta' => '9fb51998d37801a63e1e394f44e882b9',
          'region' => 'fullwidth_top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Stanford People Spotlight related departments');
  t('Spotlight');
  $export['stanford_people_spotlight_related_departments'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight_staff_page_engineering';
  $context->description = 'Engineering context for people spotlight staff page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'spotlight/staff' => 'spotlight/staff',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bd6da328b712f23bfd35bd24e7656c3d' => array(
          'module' => 'views',
          'delta' => 'bd6da328b712f23bfd35bd24e7656c3d',
          'region' => 'fullwidth_top',
          'weight' => '-5',
        ),
        'views-4db915e00060da6a6910c296519c2954' => array(
          'module' => 'views',
          'delta' => '4db915e00060da6a6910c296519c2954',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for people spotlight staff page');
  $export['stanford_people_spotlight_staff_page_engineering'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_spotlight_student_page_engineering';
  $context->description = 'Engineering context for people spotlight student page';
  $context->tag = 'Engineering';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'spotlight/students' => 'spotlight/students',
        'spotlight/student' => 'spotlight/student',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-a00bf0cdfeec27788a85334604efef57' => array(
          'module' => 'views',
          'delta' => 'a00bf0cdfeec27788a85334604efef57',
          'region' => 'fullwidth_top',
          'weight' => '-6',
        ),
        'views-ff02f9228dd54cf63d6ba15f2256fc62' => array(
          'module' => 'views',
          'delta' => 'ff02f9228dd54cf63d6ba15f2256fc62',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Engineering');
  t('Engineering context for people spotlight student page');
  $export['stanford_people_spotlight_student_page_engineering'] = $context;

  return $export;
}

<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

dsm($row);
$layout = $row->field_field_s_mag_issue_layout[0]['rendered']['#markup'];

switch ($layout) {
  case 'Featured Center':
    $vars = _stanford_mag_issue_get_art_2($row);
    print _stanford_mag_issue_art($vars);

    print _stanford_mag_issue_feat_art($row);
    break;
  case 'Featured Left':
    print _stanford_mag_issue_feat_art($row);
    break;
  case 'Featured Right':
    print _stanford_mag_issue_feat_art($row);
    break;

}
function _stanford_mag_issue_get_art_2($row) {
  $vars = array (
    'image' => drupal_render($row->field_field_s_mag_article_image_1[0]['rendered']),
    'date' => drupal_render($row->field_field_s_mag_article_date_1[0]['rendered']['#markup']),
  );
  return $vars;
}
function _stanford_mag_issue_feat_art($row) {
  $output =  '<div class="mag-feat-article-container">';
  $output .= '  <div class="mag-article-img">'
    . drupal_render($row->field_field_s_mag_article_image[0]['rendered']) . '</div>';
  $output .= '  <div class ="mag-article-content-container">';
  $output .= '    <div class="mag-article-date">'
    . drupal_render($row->field_field_s_mag_article_date[0]['rendered']) . '</div>';
  /*
  $output .= '    <div class="mag-article-title mag-article-color-'
    . drupal_render($row->field_field_s_mag_article_accent_color[0]['rendered'])
    . '">' . $row->node_field_data_field_s_mag_issue_featured_title. '</div>';
  $output .= '    <div class="mag-article-dek">'
    . drupal_render($$row->field_field_s_mag_article_dek[0]['rendered']) . '</div>';
  $output .= '    <div class="mag-article-topics">'
    . drupal_render($$row->field_field_s_mag_article_topics[0]['rendered']) . '</div>';
  */
  $output .= '  </div>';
  $output .= '</div>';
  $output .= '<div class="edit-link">[edit_node]</div>';
  return $output;
}

function _stanford_mag_issue_art($vars) {
  $output =  '<div class="mag-feat-article-container">';
  $output .= '  <div class="mag-article-img">' . $vars['image'] . '</div>';
  $output .= '  <div class ="mag-article-content-container">';
  $output .= '    <div class="mag-article-date">' . $vars['date'] . '</div>';
  $output .= '  </div>';
  $output .= '</div>';
  return $output;
}

  /*
  $output .= '<div class ="mag-topic-card-container">';
  $output .= '  <div class="mag-article-date">[field_s_mag_article_date]</div>';
  $output .= '  <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>';
  $output .= '  <div class="mag-article-topics">[field_s_mag_article_topics]</div>';
  $output .= '<div class="edit-link">[edit_node]</div>';
}
  */
?>

<?php print "in views-view-fields--stanford-magazine-issues.tpl.php"; ?>
<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
  <?php print $field->label_html; ?>
  <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>


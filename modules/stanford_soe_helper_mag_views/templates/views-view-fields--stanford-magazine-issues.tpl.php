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

global $user;
$node = node_load($row->nid);
$have_access = FALSE;
if (node_access("update", $node, $user) === TRUE) {
  $have_access = TRUE;
  print 'I have access!';
}

$node_path = drupal_lookup_path('alias','node/'.$row->nid);

$layout = $row->field_field_s_mag_issue_layout[0]['rendered']['#markup'];

switch ($layout) {
  case 'Featured Center':
    $vars = _stanford_mag_issue_get_art_2($row);
    print _stanford_mag_issue_print_art($vars);

    $vars = _stanford_mag_issue_get_feat_art($row);
    print _stanford_mag_issue_print_feat_art($vars);
    break;
  case 'Featured Left':
    print _stanford_mag_issue_print_feat_art($row);
    break;
  case 'Featured Right':
    print _stanford_mag_issue_print_feat_art($row);
    break;

}

/**
 * @param $row
 * @return array
 */
function _stanford_mag_issue_get_feat_art($row) {

  $vars = array(
    'image' => isset($row->field_field_s_mag_article_image[0]['rendered'])
      ? drupal_render($row->field_field_s_mag_article_image[0]['rendered']) : '',
    'date' => isset($row->field_field_s_mag_article_date[0]['rendered']['#markup'])
      ? $row->field_field_s_mag_article_date_1[0]['rendered']['#markup'] : '',
    'color' => isset($row->field_field_s_mag_article_accent_color[0]['rendered'])
      ? drupal_render($row->field_field_s_mag_article_accent_color[0]['rendered']) : '',
    'title' => $row->node_field_data_field_s_mag_issue_featured_title,
    'dek' => isset($row->field_field_s_mag_article_dek[0]['rendered']['#markup'])
      ? drupal_render($row->field_field_s_mag_article_dek[0]['rendered']['#markup']) : '',
    'topics' => _stanford_mag_issue_get_topics($row->field_field_s_mag_article_topics),
    'edit-link' => _stanford_mag_issue_get_edit_link($row->node_field_data_field_s_mag_issue_featured_nid),
    'nid' => $row->node_field_data_field_s_mag_issue_featured_nid,
  );

  return $vars;
}

/**
 * @param $row
 * @return array
 */
function _stanford_mag_issue_get_art_2($row) {

  $vars = array(
    'image' => isset($row->field_field_s_mag_article_image_1[0]['rendered'])
      ? drupal_render($row->field_field_s_mag_article_image_1[0]['rendered']) : '',
    'date' => isset($row->field_field_s_mag_article_date_1[0]['rendered']['#markup'])
      ? $row->field_field_s_mag_article_date_1[0]['rendered']['#markup'] : '',
    'color' => isset($row->field_field_s_mag_article_accent_color[0]['rendered'])
      ? drupal_render($row->field_field_s_mag_article_accent_color[0]['rendered']) : '',
    'title' => $row->node_field_data_field_s_mag_issue_article_2_title,
    'topics' => _stanford_mag_issue_get_topics($row->field_field_s_mag_article_topics_1),
    'edit-link' => _stanford_mag_issue_get_edit_link($row->node_field_data_field_s_mag_issue_article_2_nid),
    'nid' => $row->node_field_data_field_s_mag_issue_article_2_nid,
  );

  return $vars;
}

/**
 * @param $vars
 * @return string
 */
function _stanford_mag_issue_print_feat_art($vars) {

  dsm($vars);
  $output = '<div class="mag-feat-article-container">';
  $output .= '  <div class="mag-article-img">' . $vars['image'] . '</div>';
  $output .= '  <div class ="mag-article-content-container">';
  $output .= '    <div class="mag-article-date">' . $vars['date'] . '</div>';
  $output .= '    <div class="mag-article-title mag-article-color-' . $vars['color'] . '">'
    . l(t($vars['title']), "node/" . $vars['nid'])  . '</div>';
  $output .= '    <div class="mag-article-dek">' . $vars['dek'] . '</div>';
  $output .= '    <div class="mag-article-topics">' . $vars['topics'] . '</div>';
  $output .= '  </div>';
  $output .= '</div>';
  $output .= $vars['edit-link'];
  return $output;
}

/**
 * @param $vars
 * @return string
 */
function _stanford_mag_issue_print_art($vars) {

  dsm($vars);
  $output .= '<div class="mag-article-container">';
  $output .= '<div class="mag-article-img">' . $vars['image'] . '</div>';
  $output .= '  <div class ="mag-article-content-container">';
  $output .= '    <div class="mag-article-date">' . $vars['date'] . '</div>';
  $output .= '    <div class="mag-article-title mag-article-color-' . $vars['color'] . '">'
    . l(t($vars['title']), "node/" . $vars['nid']) . '</div>';
  $output .= '    <div class="mag-article-topics">' . $vars['topics']  . '</div>';
  $output .= '  </div>';
  $output .= '</div>';
  $output .= $vars['edit-link'];
  return $output;
}

/**
 * @param $nid
 * @return string
 */
function _stanford_mag_issue_get_edit_link($nid) {
  global $have_access, $node_path;
  if ($have_access) {
    return '<div class="edit-link">' . l(t("Edit"), "node/" . $nid . '/edit', array("query" => array("destination" => $node_path))) . '</div>';
  }
  return '';
}

/**
 * @param $topic_list
 * @return string
 */
function _stanford_mag_issue_get_topics($topic_list) {
  $topics = '';
  foreach ($topic_list as $t => $topic) {
    if ($t > 0) {
      $topics .= ', ';
    }
    $topics .= drupal_render($topic['rendered']);
  }
  return $topics;
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

<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
  <?php print $field->label_html; ?>
  <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>


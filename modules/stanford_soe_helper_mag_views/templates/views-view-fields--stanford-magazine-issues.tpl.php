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


global $user;
$node = node_load($row->nid);
$have_access = FALSE;
if (node_access("update", $node, $user) === TRUE) {
  $have_access = TRUE;
}

$node_path = drupal_lookup_path('alias','node/'.$row->nid);

$layout = $row->field_field_s_mag_issue_layout[0]['rendered']['#markup'];


print '<h2>' . $row->node_title . '</h2>';
switch ($layout) {
  case 'Featured Left':
    //$vars = _stanford_mag_issue_get_feat_art($row);
    //print _stanford_mag_issue_print_feat_art($vars);
    break;

  case 'Featured Right':
    //$vars = _stanford_mag_issue_get_feat_art($row);
   // print _stanford_mag_issue_print_feat_art($vars);
    break;

  default: // Featured Center
    $vars = _stanford_mag_issue_get_art_2($row);
    print _stanford_mag_issue_print_art($vars);

    $vars = _stanford_mag_issue_get_art_3($row);
    print _stanford_mag_issue_print_art($vars);

    $vars = _stanford_mag_issue_get_feat_art($row);
    print _stanford_mag_issue_print_feat_art($vars);

    $vars = _stanford_mag_issue_get_art_4($row);
    print _stanford_mag_issue_print_art($vars);

    $vars = _stanford_mag_issue_get_art_5($row);
    print _stanford_mag_issue_print_art($vars);
    break;
}

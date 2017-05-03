<?php

/**
 * Implements hook_search_api_views_query_alter().
 */
function stanford_soe_helper_search_search_api_views_query_alter(&$view, &$query) {
  if ($view->name == 'search_solr_nodes') {
    $url = url(current_path(), array(
      'relative' => TRUE,
      'query' => drupal_get_query_parameters()
    ));
    $parts = drupal_parse_url($url);
    if (isset($parts['query']['dm_search']) && $parts['query']['dm_search'] == 1) {

      $article_filter = $query->createFilter('AND');
      $article_filter->condition('type', 'stanford_magazine_article', '=');

      $issue_filter = $query->createFilter('AND');
      $issue_filter->condition('type', 'stanford_magazine_issue', '=');

      $dm_filter = $query->createFilter('OR');
      $dm_filter->filter($article_filter);
      $dm_filter->filter($issue_filter);
      $query->filter($dm_filter);

    }
  }
}

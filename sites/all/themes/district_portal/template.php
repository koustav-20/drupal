<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_preprocess_maintenance_page().
 */
function district_portal_preprocess_maintenance_page(&$variables) {
  // By default, site_name is set to Drupal if no db connection is available
  // or during site installation. Setting site_name to an empty string makes
  // the site and update pages look cleaner.
  // @see template_preprocess_maintenance_page
  if (isset($variables['db_is_active']) && !$variables['db_is_active']) {
  // Template suggestion for offline site
    $variables['theme_hook_suggestion'] = 'maintenance_page__offline';
  }
  else {
  // Template suggestion for live site (in maintenance mode)
    $variables['theme_hook_suggestion'] = 'maintenance_page';
  }
  //drupal_add_css(drupal_get_path('theme', 'bartik') . '/css/maintenance-page.css');
}

/**
 * Implements hook_webform_display_file().
 */

function district_portal_webform_display_file($variables) {
  $element = $variables['element'];

  $file = $element['#value'];
  $url = !empty($file) ? webform_file_url($file->uri) : t('no upload');

  if( !empty($file) ) {
    $image_extensions = array("png", "bmp", "jpg", "jpeg", "gif");
    $extension = explode(".", $file->uri);
    $extension = $extension[count($extension) - 1];

    $is_image = in_array($extension, $image_extensions);

    if( $element['#format'] == 'text' ){
      return $url;
    } else if( !$is_image ){
      return l($file->filename, $url);
    } else if( $is_image ){
      $output = '<a href="' . webform_file_url($file->uri) . '">';
      $output .= '<img class="img-responsive" src="' . webform_file_url($file->uri) . '"/> </a>';
             return $output;
         }
     }

     return ' ';
 }


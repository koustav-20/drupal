<?php

/**
 * @file
 * template.php
 */
function recruitment_webform_display_file($variables) {
  $element = $variables['element'];

  $file = $element['#value'];
  $url = !empty($file) ? webform_file_url($file->uri) : t('no upload');

  if( !empty($file) ) {
    $image_extensions = array("png", "bmp", "jpg", "jpeg", "gif");
    $extension = explode(".", $file->uri);
    $extension = drupal_strtolower($extension[count($extension) - 1]);

    $is_image = in_array($extension, $image_extensions);

    if( $element['#format'] == 'text' ){
      return $url;
    } else if( !$is_image ){
      return l($file->filename, $url);
    } else if( $is_image ){
      $output = '<a href="' . webform_file_url($file->uri) . '">';
      $output .= '<img src="' . image_style_url('medium',  $file->uri) . '"/> </a>';
      return $output;
    }
  }

  return ' ';
}

function recruitment_file_link($variables) {
  $file = $variables['file'];

  // Operates only on files uploaded to webform/invite. Change this to operate on the fields you wish to.
  if(strpos($file->uri, 'webform')) {
    // Render as thumbnail.
    $url = file_create_url($file->uri);
    $thumbnail = theme('image_style',array(
      'style_name' => 'medium',
      'path' => $file->uri,
      'alt' => t('uploaded image')
    ));
    return '<span class="file">' . $thumbnail. '</span>';
  }
  else {
    return theme_file_link($variables);
  }
}
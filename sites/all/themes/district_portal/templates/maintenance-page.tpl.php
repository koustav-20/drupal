<?php

/**
 * @file
 * Implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in page.tpl.php.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 * @see bartik_process_maintenance_page()
 */
?>

<!DOCTYPE html>
<html<?php print $rdf_namespaces; ?>>
<head>
  <link rel="profile" href="<?php print $grddl_profile; ?>"/>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
  <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
</head>
<body<?php print $body_attributes; ?>>
<div class="maintenance-block">
  <?php if ($title): ?>
    <h1 class="block-title">
      <?php print $title; ?>
    </h1>
  <?php endif; ?>
  <span><?php print $content; ?></span>
  <?php if ($messages): ?>
  <div id="messages">
    <div class="section clearfix">
      <?php print $messages; ?>
    </div>
  </div>
  <?php endif; ?>
</div>
</body>
</html>

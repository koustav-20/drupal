<?php
/**
 * @file
 * bootstrap-search-form-wrapper.func.php
 */

/**
 * Theme function implementation for bootstrap_search_form_wrapper.
 */
function medinipur_bootstrap_search_form_wrapper($variables) {
  /*$output = ' <div class="nav navbar-nav navbar-right visible-xs-block">';          
  $output .= '<div class="input-group">';
  $output .= $variables['element']['#children'];
  $output .= '<span class="input-group-btn">';
  $output .= '<button type="submit" class="btn btn-default">';
  // We can be sure that the font icons exist in CDN.
  if (theme_get_setting('bootstrap_cdn')) {
    $output .= _bootstrap_icon('search');
  }
  else {
    $output .= t('Go');
  }
  $output .= '</button>';
  $output .= '</span>';
  $output .= '</div></div>'; 
  */
  $output = '<div class="top-nav visible-lg-block visible-md-block visible-sm-block visible-xs-block">
				<div class="dropdown-search animated fadeInDown animation-delay-13">
					<a href="#" class="dropdown-toggle-search" data-toggle="dropdown"><i class="fa fa-search"></i></a>
						<div class="dropdown-menu-search dropdown-menu-right dropdown-search-box animated fadeInUp">';
  $output .= '<div class="input-group">';
  $output .= $variables['element']['#children'];
  $output .= '<span class="input-group-btn">';
  $output .= '<button type="submit" class="btn btn-ar btn-warning">';
  // We can be sure that the font icons exist in CDN.
  if (theme_get_setting('bootstrap_cdn')) {
    $output .= _bootstrap_icon('search');
  }
  else {
    $output .= t('Go!');
  }
  $output .= '</button>';
  $output .= '</span>';
  $output .= '</div></div></div></div>';
  return $output;
}


function medinipur_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
 
  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
     // $element['#title'] .= ' <span class="caret"></span>';
	  $element['#title'] .= ' ';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  
 
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  if ($element['#original_link']['menu_name'] == 'user-menu'){
	 
	   //if($element['#original_link']['has_children'] == 1){
		   
		  // $output = l($element['#title'],'javascript:void(0)',array('fragment' => '','external'=>true), $element['#localized_options']);
		   //$output = l($element['#title'], '', $element['#localized_options']);
		   
			$output = l($element['#title'], $element['#href'], $element['#localized_options']);
		   return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
	   /*}else{
		   $output = l($element['#title'], $element['#href'], $element['#localized_options']);
		   return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
	   }*/
  }else{
	$output = l($element['#title'], $element['#href'], $element['#localized_options']);
	return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
  }
  
}
function medinipur_preprocess_html(&$variables) {



	$goto_class = 'col-sm-9';
	
	if(!drupal_is_front_page()){
		if(!user_is_logged_in()){
			$goto_class = 'col-sm-12';
		}
	}

	drupal_add_js('
			function goToByScroll(id){
			  // Remove "link" from the ID
			id = id.replace("link", "");
			  // Scroll
			jQuery("html,body").animate({
				scrollTop: jQuery("."+id).offset().top},
				"slow");
		}

		jQuery("#skip_menu_link").click(function(e) { 
			  // Prevent a page reload when a link is pressed
			e.preventDefault(); 
			  // Call the scroll function
				goToByScroll("'.$goto_class.'");           
		});	',	
    array('type' => 'inline', 'scope' => 'footer', 'weight' => 5)
  );
}

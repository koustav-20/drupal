// JavaScript Document
jQuery(document).ready(function(){
 
 jQuery(".block-menu .dropdown").click(            
        function(e) {
		        jQuery('.dropdown-menu', this).stop( true, true ).slideToggle("slow");
				jQuery(this).siblings().children('.dropdown-menu').stop( true, true ).slideUp("slow");
                  
        });
 jQuery(".book-block-menu .dropdown").click(            
        function() {
		    jQuery('.dropdown-menu', this).stop( true, true ).slideToggle("slow");
            jQuery(this).siblings().children('.dropdown-menu').stop( true, true ).slideUp("slow");      
        });		
		
 jQuery("#navbar .dropdown").hover(   
        function() {               	
		        if(jQuery(window).width() > 768){
				var toppos = jQuery(this).position().top ;				
                var height = jQuery(this).find('.dropdown-menu').height();  
				jQuery('#navbar').find('.white-overlay').height(height+toppos+60);
				jQuery('#navbar').addClass("nix-navbar-hovered");				   
				jQuery('.dropdown-menu', this).stop( true, true ).fadeIn(2000);
				jQuery(this).addClass('open'); 
 			 }
			 else if(jQuery(window).width() < 768){       
			jQuery('.dropdown-menu', this).stop( true, true ).slideDown("slow");
			jQuery(this).addClass('open'); 
			}
			 		 
        },
	  function() {
	     if(jQuery(window).width() > 768){	
                 
				jQuery('#navbar').find('.white-overlay').height(0);		 
                jQuery(this).removeClass('open');		 
				jQuery('.dropdown-menu', this).stop( true, true ).fadeOut(10);
                jQuery('#navbar').removeClass("nix-navbar-hovered"); 			 
		 }
		  else if(jQuery(window).width() < 768){       
			jQuery('.dropdown-menu', this).stop( true, true ).slideUp("slow");
			jQuery(this).removeClass('open'); 
			}
		 
        });

jQuery("#navbar .dropdown").on("click",
function(e){  

 
}); 
jQuery(".dropdown-toggle-search").click(   
        function() {               	
		        if(jQuery(window).width() > 768){
               // jQuery('#navbar').toggleClass("nix-navbar-hovered-search");				   
				jQuery(this).next('.dropdown-menu-search').stop( true, true ).toggle("FAST");
			
 			 }
			 else if(jQuery(window).width() < 768){       
			jQuery('.dropdown-menu-search').stop( true, true ).slideToggle("FAST");
			
			}
			 		 
        });
});
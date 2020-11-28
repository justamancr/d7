jQuery(document).ready(function($) {
  $(".view-tasks .views-field" ).click(function() {
    $(this).next().slideToggle();
  });

  $( ".view-tasks ul ul" ).hide() ;
});

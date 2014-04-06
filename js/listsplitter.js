Drupal.behaviors.listsplitter = {
  attach: function(context, settings) {
    (function ($) {
      var form = null;
      
      var count = $(Drupal.settings.listsplitter.listsplitter_class).children().length;
      
      if ((count > Drupal.settings.listsplitter.listitems1) &&  (count <= Drupal.settings.listsplitter.listitems2)) {
        $(Drupal.settings.listsplitter.listsplitter_class).easyListSplitter({ 
        colNumber: Drupal.settings.listsplitter.colnum1
        });
      }
      else if(count > Drupal.settings.listsplitter.listitems2) {
        $(Drupal.settings.listsplitter.listsplitter_class).easyListSplitter({ 
        colNumber: Drupal.settings.listsplitter.colnum2
        });
      }
      
      // $('.your-list-class-name').easyListSplitter({ 
      //  colNumber: 3,
      //  direction: 'horizontal'
      // });

    })(jQuery);
  }
};

(function ($) {
  $(document).ready(function($){

  });
})(jQuery);

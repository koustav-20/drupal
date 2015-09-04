<div class="col-xs-12 col-sm-6 col-md-3 col-lg-3">
  <ul class="list-group">
    <li class="list-group-item active">
      <?php print $content['field_post']['0']['#title']; ?>
    </li>
    <li class="list-group-item text-center">
      <?php print render($content['field_photograph']); ?>
    </li>
    <li class="list-group-item">
      <?php print $content['field_full_name']['#items']['0']['value']; ?>
    </li>
  </ul>
</div>
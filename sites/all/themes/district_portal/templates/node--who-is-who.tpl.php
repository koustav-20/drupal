<div class="card-portrait pull-left">
  <div class="thumbnail">
    <img class="img-responsive"
      src="<?php print file_create_url($node->field_photograph[LANGUAGE_NONE][0]['uri']); ?>"
      width="100%"/>
    <div class="caption">
      <strong class="text-primary"><?php print $content['field_post']['0']['#title']; ?></strong>
      <p><?php print $content['field_full_name']['#items']['0']['value']; ?></p>
    </div>
  </div>
</div>
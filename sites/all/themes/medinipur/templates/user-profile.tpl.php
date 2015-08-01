<?php

$current_taxonomy = $user_profile['field_full_name']['#object']->field_post['und'][0]['tid']; //current taxonomy of this user
$parent = taxonomy_get_parents($current_taxonomy);

if (isset($parent) && !empty($parent)) {
    $immediate_head = $parent[key($parent)]->name;
} else {
    $immediate_head = 'NA';
}

print render($user_profile);
?>
<div class="field field-name-field-full-name field-type-text field-label-inline clearfix">
    <div class="field-label">Immediate Head:&nbsp;</div>
    <div class="field-items">
        <div class="field-item even"> <?php print $immediate_head; ?></div>
    </div>
</div>
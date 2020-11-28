<div class="<?php print $classes;?> clearfix ">

  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <!-- Row 1 thru 3. -->
  <?php if ($r1c1): ?>
      <div class="ds-r1c1<?php print $r1c1_classes; ?>">
        <?php print $r1c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r2c1): ?>
      <div class="ds-r2c1<?php print $r2c1_classes; ?>">
        <?php print $r2c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r2c2): ?>
      <div class="ds-r2c2<?php print $r2c2_classes; ?>">
        <?php print $r2c2; ?>
      </div>
  <?php endif; ?>

  <?php if ($r3c1): ?>
      <div class="ds-r3c1<?php print $r3c1_classes; ?>">
        <?php print $r3c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r3c2): ?>
      <div class="ds-r3c2<?php print $r3c2_classes; ?>">
        <?php print $r3c2; ?>
      </div>
  <?php endif; ?>

  <?php if ($r3c3): ?>
      <div class="ds-r3c3<?php print $r3c3_classes; ?>">
        <?php print $r3c3; ?>
      </div>
  <?php endif; ?>

  <?php if ($r3c4): ?>
      <div class="ds-r3c4<?php print $r3c4_classes; ?>">
        <?php print $r3c4; ?>
      </div>
  <?php endif; ?>
    <!-- -->


    <!-- Row 4 thru 6. -->
  <?php if ($r4c1): ?>
      <div class="ds-r4c1<?php print $r4c1_classes; ?>">
        <?php print $r4c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r5c1): ?>
      <div class="ds-r5c1<?php print $r5c1_classes; ?>">
        <?php print $r5c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r5c2): ?>
      <div class="ds-r5c2<?php print $r5c2_classes; ?>">
        <?php print $r5c2; ?>
      </div>
  <?php endif; ?>

  <?php if ($r6c1): ?>
      <div class="ds-r6c1<?php print $r6c1_classes; ?>">
        <?php print $r6c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r6c2): ?>
      <div class="ds-r6c2<?php print $r6c2_classes; ?>">
        <?php print $r6c2; ?>
      </div>
  <?php endif; ?>

  <?php if ($r6c3): ?>
      <div class="ds-r6c3<?php print $r6c3_classes; ?>">
        <?php print $r6c3; ?>
      </div>
  <?php endif; ?>
    <!-- -->


    <!-- Row 7 thru 9. -->
  <?php if ($r7c1): ?>
      <div class="ds-r7c1<?php print $r7c1_classes; ?>">
        <?php print $r7c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r8c1): ?>
      <div class="ds-r8c1<?php print $r8c1_classes; ?>">
        <?php print $r8c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r8c2): ?>
      <div class="ds-r8c2<?php print $r8c2_classes; ?>">
        <?php print $r8c2; ?>
      </div>
  <?php endif; ?>

  <?php if ($r9c1): ?>
      <div class="ds-r9c1<?php print $r9c1_classes; ?>">
        <?php print $r9c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r9c2): ?>
      <div class="ds-r9c2<?php print $r9c2_classes; ?>">
        <?php print $r9c2; ?>
      </div>
  <?php endif; ?>

  <?php if ($r9c3): ?>
      <div class="ds-r9c3<?php print $r9c3_classes; ?>">
        <?php print $r9c3; ?>
      </div>
  <?php endif; ?>
    <!-- -->


    <!-- Row 10 thru 12. -->
  <?php if ($r10c1): ?>
      <div class="ds-r10c1<?php print $r10c1_classes; ?>">
        <?php print $r10c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r11c1): ?>
      <div class="ds-r11c1<?php print $r11c1_classes; ?>">
        <?php print $r11c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r11c2): ?>
      <div class="ds-r11c2<?php print $r11c2_classes; ?>">
        <?php print $r11c2; ?>
      </div>
  <?php endif; ?>

  <?php if ($r12c1): ?>
      <div class="ds-r12c1<?php print $r12c1_classes; ?>">
        <?php print $r12c1; ?>
      </div>
  <?php endif; ?>

  <?php if ($r12c2): ?>
      <div class="ds-r12c2<?php print $r12c2_classes; ?>">
        <?php print $r12c2; ?>
      </div>
  <?php endif; ?>

  <?php if ($r12c3): ?>
      <div class="ds-r12c3<?php print $r12c3_classes; ?>">
        <?php print $r12c3; ?>
      </div>
  <?php endif; ?>
    <!-- -->

</div>

<?php if ( ! empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
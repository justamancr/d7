<?php
/**
 * @file
 * Basic cart shopping cart block
 */
?>

<?php if (empty($cart)): ?>
  <p><?php print t('Your cart is empty.'); ?></p>
<?php else: ?>
  <div class="basic-cart-grid basic-cart-block">
    <?php if(is_array($cart) && count($cart) >= 1): ?>
      <?php foreach($cart as $nid => $node): ?>
        <div class="basic-cart-cart-contents row">
          <div class="basic-cart-cart-node-title cell"><?php print l($node->title, 'node/' . $node->nid); ?></div>

<?php
// Delete image.
$vars = array(
    'path' => base_path() . drupal_get_path('module', 'basic_cart') . '/images/delete2.png',
    'alt' => t('Remove from cart'),
    'title' => t('Remove from cart'),
    'attributes' => array('class' => 'basic-cart-delete-image-image'),
);
$delete_link = l(theme('image', $vars), 'cart/remove/' . $nid, array('html' => TRUE));
?>
            <div class="basic-cart-delete-image cell"><?php print $delete_link?> </div>

            <div class="basic-cart-cart-unit-price cell">
            <strong><?php print basic_cart_price_format($node->basic_cart_unit_price); ?></strong>
          </div>
            
        </div>
      <?php endforeach; ?>
      <div class="basic-cart-cart-total-price-contents row">
        <div class="basic-cart-total-price cell">
          <?php print t('Total price'); ?>:<strong> <?php print $price; ?></strong>
        </div>
      </div>
      <?php if (!empty ($vat)): ?>
        <div class="basic-cart-block-total-vat-contents row">
          <div class="basic-cart-total-vat cell"><?php print t('Total VAT'); ?>: <strong><?php print $vat; ?></strong></div>
        </div>
      <?php endif; ?>
      <div class="basic-cart-cart-checkout-button basic-cart-cart-checkout-button-block row">
        <?php print l(t('Checkout'), 'checkout', array('attributes' => array('class' => array('button')))); ?>
      </div>
    <?php endif; ?>
  </div>
<?php endif; ?>

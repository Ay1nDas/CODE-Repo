export let cart = [
  {
    productID: 'e43638ce-6aa0-4b85-b27f-e1d07eb678c6',
    quantity: 2,
  },
  {
    productID: '15b6fc6f-327a-4ec4-896f-486349e85a3d',
    quantity: 1,
  },
];
export let totalCartItem = 0;

export function addToCart(productID) {
  let isPush = true;

  cart.forEach((cartItem) => {
    if (cartItem.productID === productID) {
      isPush = false;
      cartItem.quantity += 1;
      totalCartItem += 1;
    }
  });

  if (isPush) {
    cart.push({
      productID: productID,
      quantity: 1,
    });

    totalCartItem += 1;
  }
}

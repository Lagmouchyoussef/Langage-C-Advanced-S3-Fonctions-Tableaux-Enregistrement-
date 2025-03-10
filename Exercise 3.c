#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int quantity;
    float price;
} Product;

float calculateTotalPrice(Product p) {
    return p.quantity * p.price * 1.20;
}

float calculateTotalPricePointer(Product *p) {
    return p->quantity * p->price * 1.20;
}

int main() {
    Product product;
    product.quantity = 5;
    product.price = 10.0;

    float totalPrice = calculateTotalPrice(product);
    printf("Total Price (structure): %.2f\n", totalPrice);

    Product *productPtr = &product;
    float totalPricePtr = calculateTotalPricePointer(productPtr);
    printf("Total Price (pointer): %.2f\n", totalPricePtr);

    return 0;
}

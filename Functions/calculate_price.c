#include <stdio.h>

void calculatePrice(float price) {
    float value = price + (0.18 * price); // Assuming price is a global variable
    printf("Total Price: %.2f\n", value);
}
int main() {
    float price;
    printf("Enter the price: ");
    scanf("%f", &price);
    
    calculatePrice(price);
    
    return 0;
}
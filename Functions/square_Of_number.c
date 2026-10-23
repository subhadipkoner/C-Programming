#include <stdio.h>

void square(float number) {
    float value = number * number; // Calculate square of the number
    printf("Square: %.2f\n", value);
}
int main() {  
    float number;
    printf("Enter the number: ");
    scanf("%f", &number);
    
    square(number);
    
    return 0;
}
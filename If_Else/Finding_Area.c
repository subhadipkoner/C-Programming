#include <stdio.h>
int main() {
    float L, B, area, perimeter;
    printf("Enter length: ");
    scanf("%f", &L);
    printf("Enter breadth: ");
    scanf("%f", &B);

    area = L * B;
    perimeter = 2 * (L + B);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    if(area>perimeter){
    printf("Area Greater than Perimeter\n");}
    else if(area<perimeter){
    printf("Area is Not Greater than Perimeter\n");}

    return 0;
}
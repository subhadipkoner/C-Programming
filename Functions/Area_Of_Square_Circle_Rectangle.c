#include <stdio.h>
#include <math.h>

float squareArea(float side) {
    return side * side;
}

float circleArea(float radius) {
    return 3.14 * radius * radius;
}

float rectangleArea(float length, float width) {
    return length * width;
}

int main() {
    float side, radius, length, width;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of Square: %.2f\n", squareArea(side));
    printf("Area of Circle: %.2f\n", circleArea(radius));
    printf("Area of Rectangle: %.2f\n", rectangleArea(length, width));
    return 0;
}
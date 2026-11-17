#include <stdio.h>
int main() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    if(n>99 && n<1000){
        printf("Three digit number\n");
    } else {
        printf("Not a three digit number\n");

    }
}
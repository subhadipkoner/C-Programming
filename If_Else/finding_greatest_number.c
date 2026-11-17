#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);
    printf("Enter 3rd number: ");
    scanf("%d", &z);

    if(x>y && x>z){
        printf("%d is the greatest number\n",x);
     } else if(y>x && y>z){
        printf("%d is the greatest number\n",y);
     } else {
        printf("%d is the greatest number\n",z);
     }
    }
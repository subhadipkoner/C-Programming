#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter 1st side: ");
    scanf("%d", &x);
    printf("Enter 2nd side: ");
    scanf("%d", &y);
    printf("Enter 3rd side : ");
    scanf("%d", &z);

    if((x+y)>z && (y+z)>x && (x+z)>y){
        printf("The sides form a valid triangle\n");
    } else {
        printf("The sides do not form a valid triangle\n");
    }
    }
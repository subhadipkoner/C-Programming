#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%3==0 || n%5==0){
        printf("Divisible by 3 or 5\n");
    } else {
        printf("Not divisible by 3 or 5\n");
    }
}
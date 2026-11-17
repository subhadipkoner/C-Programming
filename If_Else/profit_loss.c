#include <stdio.h>
int main() {
    int cp, sp;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    if(sp>cp){
        printf("Profit: %d",sp-cp);
    } if(cp == sp){
        printf("No profit no loss");
    } 
    else {
        printf("Loss: %d",cp-sp);
    }
    return 0;
}
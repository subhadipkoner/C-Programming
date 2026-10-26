# include <stdio.h>
int main(){
    int price = 100;
    int *ptr = &price;
    int _price = *ptr;
    printf("%d", price);
}
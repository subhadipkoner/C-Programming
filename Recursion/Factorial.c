#include <stdio.h>
int fact(int n){
    if (n==0 || n==1){
        return 1;
}
        int factNum1 = fact(n-1);
        int factNum = n * factNum1;
        return factNum;
}

int main(){
    printf("Enter a number to find its factorial: %d",fact(10));
    return 0;
}
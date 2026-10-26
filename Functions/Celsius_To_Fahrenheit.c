#include <stdio.h>

float convertTemp(float c){
    float F = (c * 9/5)+32;
    return F;
}
int main(){
    float c;
    printf("Enter Temp :%.2f", convertTemp(15));
    return 0;
}
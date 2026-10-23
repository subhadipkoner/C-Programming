#include <stdio.h>

    void printTable(int n);

int main() {
    int n;
    printf("Enter integers: ");
    scanf("%d", &n);
    printTable(n); //argument passed to the function
    return 0;
}
void printTable(int n) {    //parameter passed to the function
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", n * i);
    }
}
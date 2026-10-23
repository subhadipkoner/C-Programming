#include <stdio.h>

void printHello(int n)
{
    if (n == 0)
        return;
    printf("Hello World !\n");
    printHello(n - 1);
}

int main()
{
    printHello(5);
    return 0;
}

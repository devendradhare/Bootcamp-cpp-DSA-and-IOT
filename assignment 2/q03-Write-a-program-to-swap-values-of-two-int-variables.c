//  Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int a = 10, b = 20, temp;
    printf("\nBefore swap\n   a = %d  b = %d",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swap\n   a = %d  b = %d",a,b);
    return 0;
}
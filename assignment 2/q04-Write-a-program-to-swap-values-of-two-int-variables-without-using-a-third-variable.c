// Write a program to swap values of two int variables without using a third variable
#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("\nBefore swap\n   a = %d  b = %d",a,b);
    a += b;
    b = a - b;
    a -= b;
    printf("\nAfter swap\n   a = %d  b = %d",a,b);
    return 0;
}
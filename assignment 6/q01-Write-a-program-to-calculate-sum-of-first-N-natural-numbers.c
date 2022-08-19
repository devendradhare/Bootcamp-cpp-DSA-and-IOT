// 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("\n\ncalculate sum of first N natural numbers\nEnter a number : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        sum += i;
    }
    printf("sum of first %d natural number = %d", n, sum);
    return 0;
}
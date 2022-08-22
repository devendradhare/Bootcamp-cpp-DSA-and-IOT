//  1. Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("\n\ncalculate sum of first N even natural numbers\nEnter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i * 2;
    }
    printf("sum of first %d even natural number = %d", n, sum);
    return 0;
}
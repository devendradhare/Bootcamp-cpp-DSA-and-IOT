//  5. Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("\n\ncalculate sum of cubes of first N natural numbers\nEnter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i * i * i;
    }
    printf("sum = %d", sum);
    return 0;
}
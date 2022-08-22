//  4. Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main()
{
    int i,n,sum = 0;
    printf("\n\ncalculate sum of squares of first N natural numbers\nEnter a number : ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        sum += i*i;
    }
    printf("sum of squares of first %d natural numbers = %d\n\n",n,sum);
    return 0;
}
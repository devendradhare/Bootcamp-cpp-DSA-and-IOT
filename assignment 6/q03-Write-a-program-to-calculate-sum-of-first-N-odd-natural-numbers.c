// 3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    printf("\n\ncalculate sum of first N odd natural numbers\nEnter a number : ");
    scanf("%d",&n);
    for (  i = 1; i <= n; i++)
    {
        sum += i*2-1;
    }
    printf("sum = %d",sum);
    return 0;
}
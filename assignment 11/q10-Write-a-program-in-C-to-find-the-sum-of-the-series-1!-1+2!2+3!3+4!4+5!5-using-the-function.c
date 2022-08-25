// 10.Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int series(int n);
int factorial(int n);
int main()
{
    int n,sum;
    printf("\n\nfind the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the function\n\nEnter a number : ");
    scanf("%d",&n);
    sum = series(n);
    printf("\nsum = %d\n\n",sum);
    return 0;
}

int series(int n)
{
    int i,sum = 0;
    for(i = 1;i<=n;i++)
    {
        sum += factorial(i)/i;
    }
    return sum;
}

int factorial(int n)
{
    int i,f = 1;
    for(i = 2;i<=n;i++)
    {
        f *= i;
    }
    return f;
}
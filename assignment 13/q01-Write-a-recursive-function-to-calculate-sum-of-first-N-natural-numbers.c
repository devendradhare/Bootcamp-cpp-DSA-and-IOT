// 1.Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum_n_natural(int n);
int main()
{
    int n,sum;
    printf("\n\nrecursive function to calculate sum of first N natural numbers\nEnter a number : ");
    scanf("%d",&n);
    sum = sum_n_natural(n);
    printf("\nsum of first %d natural number is %d",n,sum);
    return 0;
}
int sum_n_natural(int n)
{
    if(n==1)
        return 1;
    return n+sum_n_natural(n-1);
}
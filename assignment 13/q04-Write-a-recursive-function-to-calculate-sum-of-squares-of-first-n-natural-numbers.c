// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sum_n_natural_sqr(int n);
int main()
{
    int n,sum;

    printf("\n\nrecursive function to calculate sum of squares of first n natural numbers\nEnter a number : ");
    scanf("%d",&n);

    sum = sum_n_natural_sqr(n);
    
    printf("\nsum of squares of first %d natural number is %d",n,sum);
    return 0;
}
int sum_n_natural_sqr(int n)
{
    if(n==1)
        return 1;
    return (n*n)+sum_n_natural_sqr(n-1);
}
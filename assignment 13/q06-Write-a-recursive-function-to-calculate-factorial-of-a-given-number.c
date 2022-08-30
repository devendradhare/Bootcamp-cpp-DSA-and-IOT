// 6.Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int factorial(int n);
int main()
{
    int n,facto;
    printf("\n\nrecursive function to calculate factorial of a given number\nEnter a number : ");
    scanf("%d",&n);

    facto = factorial(n);

    printf("\nfactorial of %d is %d",n,facto);
    return 0;
}
int factorial(int n)
{
    if(n <= 2)
        return n;
    return n*factorial(n-1);
}
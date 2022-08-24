// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int n);
int main()
{
    int n,facto;
    printf("\nfactorial of a number\nEnter a number : ");
    scanf("%d",&n);
    facto = factorial(n);
    printf("\nfactorial of %d is %d",n,facto);
    return 0;
}
int factorial(int n)
{
    int i,facto = 1;
    for(i = 2; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}
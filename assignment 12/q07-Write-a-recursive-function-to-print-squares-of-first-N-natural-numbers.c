// 7.Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
int n_natural_squares(int n);
int main()
{
    int n;
    printf("\nFunction to print squares of first N natural numbers\nEnter a number : ");
    scanf("%d",&n);
    n_natural_squares(n);
    return 0;
}
int n_natural_squares(int n)
{
    if (n<=1)
    {
        printf("%d ",n*n);
        return 1;
    }
    n_natural_squares(n-1);
    printf("%d ",n*n);
    return 0;
}
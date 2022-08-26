// 4.Write a recursive function to print first N odd natural numbers in reverse order
int n_odd_natural_rev(int n);
#include<stdio.h>
int main()
{
    int n;
    printf("\nrecursive function to print first N odd natural numbers in reverse order\nEnter a number : ");
    scanf("%d",&n);
    n_odd_natural_rev(n);
    return 0;
}
int n_odd_natural_rev(int n)
{
    if (n<=1)
    {
        printf("%d ",n);
        return 1;
    }
    printf("%d ",n*2-1);
    n_odd_natural_rev(n-1);
    return 0;
}
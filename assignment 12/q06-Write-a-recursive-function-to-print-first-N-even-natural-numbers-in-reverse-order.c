// 6. Write a recursive function to print first N even natural numbers in reverse order
int n_even_natural_rev(int n);
#include<stdio.h>
int main()
{
    int n;
    printf("\nrecursive function to print first N even natural numbers in reverse order\nEnter a number : ");
    scanf("%d",&n);
    n_even_natural_rev(n);
    return 0;
}
int n_even_natural_rev(int n)
{
    if (n<=1)
    {
        printf("%d ",n*2);
        return 1;
    }
    printf("%d ",n*2);
    n_even_natural_rev(n-1);
    return 0;
}
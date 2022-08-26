// 5.Write a recursive function to print first N even natural numbers
int n_even_natural(int n);
#include<stdio.h>
int main()
{
    int n;
    printf("\nrecursive function to print first N even natural numbers\nEnter a number : ");
    scanf("%d",&n);
    n_even_natural(n);
    return 0;
}
int n_even_natural(int n)
{
    if (n<=1)
    {
        printf("%d ",n*2);
        return 2;
    }
    n_even_natural(n-1);
    printf("%d ",n*2);
    return 0;
}
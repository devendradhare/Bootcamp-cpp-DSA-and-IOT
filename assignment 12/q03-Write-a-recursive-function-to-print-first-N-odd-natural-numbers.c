// 3.Write a recursive function to print first N odd natural numbers
int n_odd_natural(int n);
#include<stdio.h>
int main()
{
    int n;
    printf("\nrecursive function to print first N odd natural numbers\nEnter a number : ");
    scanf("%d",&n);
    n_odd_natural(n);
    return 0;
}
int n_odd_natural(int n)
{
    if (n<=1)
    {
        printf("%d ",n);
        return 1;
    }
    n_odd_natural(n-1);
    printf("%d ",n*2-1);
    return 0;
}
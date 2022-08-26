// 1.Write a recursive function to print first N natural numbers
int n_natural(int n)
#include<stdio.h>
int main()
{
    int n;
    printf("\nFunction to printf first N natural numbers\nEnter a number : ");
    scanf("%d",&n);
    n_natural(n);
    return 0;
}
int n_natural(int n)
{
    if (n<=1)
    {
        printf("%d ",n);
        return 1;
    }
    n_natural(n-1);
    printf("%d ",n);
    return 0;
}
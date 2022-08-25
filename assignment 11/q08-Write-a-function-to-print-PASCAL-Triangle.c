// 8. Write a function to print PASCAL Triangle.(TSRN)
#include <stdio.h>
int factorial(int n);
int comb(int n, int r);
int main()
{
    int n, i, j;
    printf("\n\nfunction to print PASCAL Triangle\nEnter number of rwos : ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
            printf("  ");
        for (j = 0; j <= i; j++)
            printf(" %3d", comb(i, j));
        printf("\n");
    }
    return 0;
}

int factorial(int n)
{
    int f;
    for (f = 1; n > 1; n--)
        f *= n;
    return f;
}

int comb(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}
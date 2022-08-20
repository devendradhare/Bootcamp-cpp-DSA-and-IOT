// 1. Write a program to find the Nth term of the Fibonnaci series
#include <stdio.h>
int main()
{
    int a = -1, b = 1, c, n, i;
    printf("\n\nFind Nth term of the Fibonnaci series\nEnter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%dth term = %d\n", i, c);
    }
    printf("\n\n%dth term = %d\n\n", n, c);
    return 0;
}
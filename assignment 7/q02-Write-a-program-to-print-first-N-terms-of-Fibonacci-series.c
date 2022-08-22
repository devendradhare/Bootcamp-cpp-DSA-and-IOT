//  2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int a = -1, b = 1, c, n, i;
    printf("\n\nPrint first N terms of Fibonacci series\nEnter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%dth term = %d\n", i, c);
    }
    return 0;
}
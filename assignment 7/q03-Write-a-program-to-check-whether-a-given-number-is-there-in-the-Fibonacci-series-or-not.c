// 3. Write a program to check whether a given number is there in the Fibonacci series or not
#include <stdio.h>
int main()
{
    int a = -1, b = 1, c = 0, n, i;
    printf("\n\nPrint first N terms of Fibonacci series\nEnter a number : ");
    scanf("%d", &n);
    while (c <= n)
    {
        c = a + b;
        a = b;
        b = c;
        if (c == n)
        {
            printf("\n\n%d is a part of fibonacci series\n\n", n);
            break;
        }
    }
    if (c > n)
    {
        printf("\n\n%d is not a part of fibonacci series\n\n", n);
    }
    return 0;
}
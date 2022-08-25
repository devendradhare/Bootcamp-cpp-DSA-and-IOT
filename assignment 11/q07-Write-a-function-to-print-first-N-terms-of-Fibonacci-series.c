// 7.Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void print_fibonacci(int n);
int main()
{
    int n;
    printf("\n\nfunction to print first N terms of Fibonacci series\nEnter a number : ");
    scanf("%d",&n);
    print_fibonacci(n);
    return 0;
}
void print_fibonacci(int n)
{
    int a = -1, b = 1, c, i;
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%dth term = %d\n", i, c);
    }
}
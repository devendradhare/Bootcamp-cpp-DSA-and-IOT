// 9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
int octal(int n);
int main()
{
    int n;
    double b;
    printf("\n\nrecursive function to print octal of a given decimal number\nEnter a number : ");
    scanf("%d", &n);
    b = octal(n);
    printf("\noctal of %d is %.0lf", n, b);
    return 0;
}
int octal(int n)
{
    double b;
    if (n <= 7)
        return n;
    b = n % 8;
    return octal(n / 8) * 10 + b;
}

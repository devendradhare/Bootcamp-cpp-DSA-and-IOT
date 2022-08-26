// 8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
int binary(int n);
int main()
{
    int n;
    double b;
    printf("\n\nrecursive function to print binary of a given decimal number\nEnter a number : ");
    scanf("%d", &n);
    b = binary(n);
    printf("\nbinary of %d is %.0lf", n, b);
    return 0;
}
int binary(int n)
{
    double b;
    if (n <= 1)
        return 1;
    b = n % 2;
    return binary(n / 2) * 10 + b;
}

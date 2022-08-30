// 3. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int sum_n_odd_natural(int n);
int main()
{
    int n, sum;
    printf("\n\nrecursive function to calculate sum of first N odd natural numbers\nEnter a number : ");
    scanf("%d", &n);
    sum = sum_n_odd_natural(n);
    printf("\nsum of first %d odd natural number is %d", n, sum);
    return 0;
}
int sum_n_odd_natural(int n)
{
    if (n == 1)
        return 1;
    return (n * 2 - 1) + sum_n_odd_natural(n - 1);
}
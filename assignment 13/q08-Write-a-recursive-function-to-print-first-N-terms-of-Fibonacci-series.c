// 8. Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>
int fibonacci_n_terms(int n);
int fibonacci_nth_term(int n);
int main()
{
    int n;
    printf("\n\nrecursive function to print first N terms of fibonacci series\nEnter a number : ");
    scanf("%d", &n);

    fibonacci_n_terms(n);
    return 0;
}
int fibonacci_n_terms(int n)
{
    int f;
    if (n == 1)
    {
        f = fibonacci_nth_term(n - 1) + fibonacci_nth_term(n - 2);
        printf("%d ", f);
        return 0;
    }
    f = fibonacci_nth_term(n - 1) + fibonacci_nth_term(n - 2);
    fibonacci_n_terms(n - 1);

    printf("%d ", f);
    return f;
}
int fibonacci_nth_term(int n)
{
    int f;
    if (n == -1)
        return -1;
    if (n == 0)
        return 1;
    f = fibonacci_nth_term(n - 1) + fibonacci_nth_term(n - 2);
    return f;
}

// 0 1 1 2 3 5 8 13 21 34
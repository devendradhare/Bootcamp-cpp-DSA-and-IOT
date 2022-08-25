// 5. Write a function to print first N prime numbers. (TSRN)
#include <stdio.h>
void print_first_n_prime(int n);
int main()
{
    int n;
    printf("\n\nFunction to print first N prime numbers\nEnter a number : ");
    scanf("%d", &n);
    print_first_n_prime(n);
    return 0;
}
void print_first_n_prime(int n)
{
    int i, j;
    for (i = 1; n > 0; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= i)
        {
            printf("%d ", i);
            n--;
        }
    }
}
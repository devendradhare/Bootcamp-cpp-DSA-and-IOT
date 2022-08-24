// 5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void n_odd(int n);
int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d", &n);
    n_odd(n);
    return 0;
}
void n_odd(int n)
{
    int i;
    for (i = 1; i <= n * 2; i += 2)
    {
        printf("\n%d",i);
    }
}
//  Write a program to check whether two given numbers are co-prime numbers or not
#include <stdio.h>
int main()
{
    int n1, n2, i;
    printf("\n\ntwo given numbers are co-prime numbers or not\nEnter two numbers : ");
    scanf("%d%d", &n1, &n2);

    for (i = 2; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            printf("	%d and %d are not co-prime", n1, n2);
            break;
        }
    }
    if (i == n1 + 1)
        printf("	%d and %d are co-prime", n1, n2);
    return 0;
}
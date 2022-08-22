//            pattern 18
//  draw the following patterns
//      *
//     ***
//    *****
//     ***
//      *
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("\n\n\t\tpattern 18\nEnter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
    {

        for (j = 1; j < n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    for (i = n / 2 - 1; i >= 1; i--)
    {

        for (j = 1; j < n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
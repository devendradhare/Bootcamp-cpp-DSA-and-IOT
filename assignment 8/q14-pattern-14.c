//           pattern 14
// draw the following patterns
// *
// **
// * *
// *  *
// *****
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 14\nEnter a number : ");
    scanf("%d", &n);
    if (n != 0)
        printf("*\n");
    for (i = 1; i < n - 1; i++)
    {
        printf("*");
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    if (n != 1)
        for (i = 1; i <= n; i++)
        {
            printf("*");
        }
    return 0;
}
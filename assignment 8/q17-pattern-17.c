//           pattern 17
// draw the following patterns
//     *
//    **
//   * *
//  *  *
// *****
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 17\nEnter a number : ");
    scanf("%d", &n);
    if (n != 1)
        for (i = 1; i <= n; i++)
        {
            printf("* ");
        }
            printf("\n");
    for (i = n-2; i >= 1; i--)
    {
        for (j = 1; j < n - i; j++)
            printf(" ");
        printf("*");
        for (j = 1; j < i*2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    if (n != 0)
    {
        for (i = 1; i < n; i++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}
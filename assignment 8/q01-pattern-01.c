//           pattern 01
// draw the following patterns
// *
// **
// ***
// ****
// *****

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 01\nEnter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
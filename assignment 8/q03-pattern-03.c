//           pattern 03
// draw the following patterns
// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 03\nEnter a number : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//          pattern 06
// draw the following patterns
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 06\nEnter a number : ");
    scanf("%d", &n);
    for (i = n*2; i > 0; i -= 2)
    {
        for (j = i/2; j < n; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
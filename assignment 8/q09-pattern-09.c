//           pattern 09
//  draw the following patterns
//   1234321
//    12321
//     121
//      1
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 09\nEnter a number : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (  j = i; j < n; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d",j%10);
        }
        for(j = i-1; j>0; j--)
        {
            printf("%d",j%10);
        }

        printf("\n");
    }
    return 0;
}
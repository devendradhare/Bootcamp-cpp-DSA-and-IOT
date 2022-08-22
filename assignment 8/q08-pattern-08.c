//           pattern 08
//  draw the following patterns
//      1
//     121
//    12321
//   1234321
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 08\nEnter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
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
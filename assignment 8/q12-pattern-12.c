//           pattern 12
//  draw the following patterns
//   ABCDCBA
//    ABCBA
//     ABA
//      A

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 12\nEnter a number : ");
    scanf("%d", &n);
    for (i = 'A'+n; i >= 'A'; i--)
    {
        for (  j = i; j < 'A'+n; j++)
        {
            printf("  ");
        }
        for (j = 'A'; j <= i; j++)
        {
            printf("%c ",j);
        }
        for(j = i-1; j>'A'-1; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
//           pattern 11
//  draw the following patterns
//      A
//     ABA
//    ABCBA
//   ABCDCBA

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 11\nEnter a number : ");
    scanf("%d", &n);
    for (i = 'A'; i <= 'A'+n; i++)
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
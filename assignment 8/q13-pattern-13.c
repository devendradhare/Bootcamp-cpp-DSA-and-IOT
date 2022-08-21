//           pattern 13
// draw the following patterns
// 1234321
// 123 321
// 12   21
// 1     1

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 13\nEnter a number : ");
    scanf("%d", &n);
    for (i = 'A'+n-1; i >= 'A'; i--)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c",j);
        }
        for(j = 1; j < n+'A'-i ; j++)
        {
            printf("  ");
        }
        for (j = i; j >= 'A'; j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
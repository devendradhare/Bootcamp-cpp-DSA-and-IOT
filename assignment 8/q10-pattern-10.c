//            pattern 07
//  draw the following patterns
//  1234321
//  123 321
//  12   21
//  1     1

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 07\nEnter a number : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",j%10);
        }
        for(j = 0; j < n-i; j++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d",j%10);
        }
        printf("\n");
    }
    return 0;
}
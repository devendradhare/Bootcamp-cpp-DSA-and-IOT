//  6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
    int i,j;
    printf("\n\nprint all Prime numbers under 100\n");
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
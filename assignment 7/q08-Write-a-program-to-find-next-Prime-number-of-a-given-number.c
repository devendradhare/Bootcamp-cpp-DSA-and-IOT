// 8. Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int i, j =2 , a;
    printf("\n\nfind next Prime number of a given number\nEnter a numbers : ");
    scanf("%d", &a);
    for (i = a+1; ; i++)
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
            printf("%d\n\n", i);
            break;
        }
    }
    return 0;
}
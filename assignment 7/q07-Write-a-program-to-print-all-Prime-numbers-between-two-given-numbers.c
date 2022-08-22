//  7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int i, j, a, b;
    printf("\n\nprint all Prime numbers between two given numbers\nEnter any two numbers : ");
    scanf("%d%d", &a, &b);
    a > b ? a += b, b = a - b, a -= b : 1;
    for (i = a; i <= b; i++)
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
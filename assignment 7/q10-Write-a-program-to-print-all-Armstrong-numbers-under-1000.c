//  10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
int main()
{
    int j, i, tmp, count = 0, rmd, ghat = 1, armstrong = 0;
    printf("\n\nprint all Armstrong numbers under 1000\n");
    for (j = 1; j <= 1000; j++)
    {
        tmp = j;
        while (tmp > 0)
        {
            tmp /= 10;
            count++;
        }
        tmp = j;
        while (tmp > 0)
        {
            rmd = tmp % 10;
            for (i = 1; i <= count; i++)
            {
                ghat *= rmd;
            }
            armstrong += ghat;
            tmp /= 10;
            ghat = 1;
        }
        if (armstrong == j)
        {
            printf("\n%d", j);
        }
        count = 0;
        armstrong = 0;
    }
    return 0;
}
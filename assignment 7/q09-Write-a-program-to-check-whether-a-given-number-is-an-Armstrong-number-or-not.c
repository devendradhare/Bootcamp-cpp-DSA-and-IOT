// 9. Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
int main()
{
    int num, i, tmp, count = 0, rmd, ghat = 1, armstrong = 0;
    printf("\n\ncheck whether a given number is an Armstrong number or not\nEnter a number : ");
    scanf("%d", &num);
    tmp = num;
    while (tmp > 0)
    {
        tmp /= 10;
        count++;
    }
    tmp = num;
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
    if (armstrong == num)
    {
        printf("\n%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }

    return 0;
}
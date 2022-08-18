// 08.  Write a program to check whether a given year is a leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("\n\nCheck the year is leap year or not\nEnter an year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("\n%d is a leap year ", year);
            }
            else
            {
                printf("\n%d is not a leap year", year);
            }
        }
        else
        {
            printf("\n%d is a leap year ", year);
        }
    }
    else
    {
        printf("\n%d is not a leap year", year);
    }
    return 0;
}
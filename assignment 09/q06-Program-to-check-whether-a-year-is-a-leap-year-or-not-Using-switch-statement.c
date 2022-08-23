// 6. Program to check whether a year is a leap year or not. Using switch statement
#include <stdio.h>
int main()
{
    int year;
    printf("\n\nyear is a leap year or not. Using switch statement\nEnter a year : ");
    scanf("%d", &year);
    switch (year % 4)
    {
    case 0:
        switch (year % 100)
        {
        case 0:
            switch (year % 400)
            {
            case 0:
                printf("\n%d is a leap year\n\n", year);
                break;
            default:
                printf("\n%d is not a leap year\n\n", year);
                break;
            }
            break;
        default:
            printf("\n%d is a leap year\n\n", year);
            break;
        }
        break;
    default:
            printf("\n%d is not a leap year\n\n", year);
        break;
    }
    return 0;
}

// 1. Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
int main()
{
    int n;
    printf("\n\nEnter a number of month : ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("\n31 days\n\n");
        break;
    case 2:
        printf("\n30 or 29 days\n\n");
        break;
    case 3:
        printf("\n31 days\n\n");
        break;
    case 4:
        printf("\n30 days\n\n");
        break;
    case 5:
        printf("\n31 days\n\n");
        break;
    case 6:
        printf("\n30 days\n\n");
        break;
    case 7:
        printf("\n31 days\n\n");
        break;
    case 8:
        printf("\n31 days\n\n");
        break;
    case 9:
        printf("\n30 days\n\n");
        break;
    case 10:
        printf("\n31 days\n\n");
        break;
    case 11:
        printf("\n30 days\n\n");
        break;
    case 12:
        printf("\n31 days\n\n");
        break;
    
    default:
        printf("\n%d is not a valid number\n\n",n);
        break;
    }
    return 0;
}
// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day
#include<stdio.h>
int main()
{
    int day;
    printf("\nEnter the day number : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("\nthis is monday\n\n");
        break;
    case 2:
        printf("\nthis is tuesday\n\n");
        break;
    case 3:
        printf("\nthis is wednesday\n\n");
        break;
    case 4:
        printf("\nthis is thursday\n\n");
        break;
    case 5:
        printf("\nthis is friday\n\n");
        break;
    case 6:
        printf("\nthis is saturday\n\n");
        break;
    case 7:
        printf("\nthis is sunday\n\n");
        break;
    default:
        printf("\n%d is not valid day number\n\n",day);
        break;
    }
    return 0;
}

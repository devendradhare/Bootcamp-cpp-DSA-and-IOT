// 18. Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
    int m_no;
    printf("\n\ntakes the month number as an input and display number of days in that month\nEnter month nomber : ");
    scanf("%d",&m_no);
    if (m_no == 1||m_no == 3||m_no == 5||m_no == 7||m_no == 8||m_no == 10||m_no == 12)
    {
        printf("day = 31");
    }
    else if (m_no == 2)
    {
        printf("days = 30 29");
    }
    else
    {
        printf("days = 30");
    }
    return 0;
}
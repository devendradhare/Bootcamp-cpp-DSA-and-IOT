// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    float cost, sell, profit;
    printf("\n\n\t\tProfit or loss percentage\nEnter cost price : ");
    scanf("%f",&cost);
    printf("Enter selling price : ");
    scanf("%f",&sell);
    
    profit = ((sell*100)/cost)-100;

    if (profit>=0)
    {
        printf("\n %f%% profit",profit);
    }
    else
    {
        printf("\n %f%% loss",profit);
    }
    return 0;
}
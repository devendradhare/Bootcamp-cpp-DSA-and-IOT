//  7. Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int num,i,count = 0;
    printf("\n\ncount digits in a given number\nEnter a number : ");
    scanf("%d",&num);
    i = num;
    while (num>0)
    {
        num /= 10;
        count++;
    }
    printf("\ndigits in %d   =  %d",i,count);
    return 0;
}
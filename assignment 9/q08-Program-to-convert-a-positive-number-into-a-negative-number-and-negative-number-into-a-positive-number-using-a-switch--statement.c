// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch  statement
#include<stdio.h>
int main()
{
    int num;
    printf("\nconvert a positive number into a negative number and negative number into a positive number using a switch  statement\n\n\tEnter a number : ");
    scanf("%d",&num);
    switch (num>0)
    {
    case 1:
        num = -num;
        printf("\nnumber = %d\n\n",num);
        break;
    
    default:
        num = -num;
        printf("\nnumber = %d\n\n",num);
        break;
    }
    return 0;
}
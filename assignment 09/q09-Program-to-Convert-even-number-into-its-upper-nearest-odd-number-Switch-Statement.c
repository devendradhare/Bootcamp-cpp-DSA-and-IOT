// 9. Program to Convert even number into its upper nearest odd number Switch Statement
#include<stdio.h>
int main()
{
    int num;
    printf("\n\nConvert even number into its upper nearest odd number Switch Statement\n\nEnter a number : ");
    scanf("%d",&num);
    switch (num%2)
    {
    case 1:
        num--;
        printf("\n%d\n\n",num);
        break;
    
    default:
        printf("\n%d\n\n",num);
        break;
    }
    return 0;
}
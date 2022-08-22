//  8. Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
    int num,i;
    printf("\n\ncheck whether a given number is a Prime number or not\nenter a number : ");
    scanf("%d",&num);
    for(i = 2;i < num; i++)
    {
        if (num%i==0)
        {
            break;
        }
    }
    if (i>=num)
    {
        printf("\n\n%d is a prime number\n\n",num);
    }
    else
    {
        printf("\n\n%d is not a prime number\n\n",num);
    }
    return 0;
}
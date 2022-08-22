//  5.  Write a program to check whether a given number is a three-digit number or not
#include <stdio.h>
int main()
{
    int n;
    printf("\n\n\t\tCheck the number is three digit number or not\nEnter a number : ");
    scanf("%d",&n);
    if (n>99&&n<1000)
    {
        printf("\n%d is a three digit number\n\n",n);
    }
    else
    {
        printf("\n%d is not a three digit number\n\n",n);
    }
    return 0;
}
//  Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int n;
    printf("\n\n\t\tCheck number is divisible by 5 or not\nEnter a number : ");
    scanf("%d",&n);
    if (n%5)
    {
        printf("\n%d is not divisible by 5\n\n",n);
    }
    else
    {
        printf("\n%d is divisible by 5\n\n",n);
    }
    return 0;
}
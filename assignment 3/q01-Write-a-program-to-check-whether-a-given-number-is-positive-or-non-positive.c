//  1.  Write a program to check whether a given number is positive or non-positive
#include <stdio.h>
int main()
{
    int n;
    printf("\n\n\tCheck number is positive or non-positive\nEnter a number : ");
    scanf("%d",&n);
    
    if (n>0)
    {
        printf("\n%d is a positive number\n\n",n);
    }
    else
    {
        printf("\n%d is a non-positive number\n\n",n);
    }
    
    return 0;
}
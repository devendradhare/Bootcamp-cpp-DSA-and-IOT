//  15. Write a program to check whether a given number is positive, negative or zero
#include <stdio.h>
int main()
{
    int n;
    printf("\n\ncheck whether a given number is positive, negative or zero\nEnter a number : ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("\n%d is a positive number\n\n",n);
    }
    else if (n<0)
    {
        printf("\n%d is a negative number\n\n",n);
    }
    else
    {
        printf("\n0 is zero\n\n");
    }
    return 0;
}
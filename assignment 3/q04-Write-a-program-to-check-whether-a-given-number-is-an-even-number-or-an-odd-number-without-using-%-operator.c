//  Write a program to check whether a given number is an even number or an odd number without using % operator
#include <stdio.h>
int main()
{
    int n;
    printf("\n\n\t\tCheck the number is even or odd\nEnter a number : ");
    scanf("%d",&n);
    if (n/2*2==n)
    {
        printf("%\n%d is a even number\n\n",n);
    }
    else
    {
        printf("%\n%d is a odd number\n\n",n);
    }
    return 0;
}
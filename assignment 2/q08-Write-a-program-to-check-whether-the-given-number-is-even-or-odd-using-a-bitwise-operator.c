// 8.  Write a program to check whether the given number is even or odd using a bitwise operator
#include <stdio.h>
int main()
{
    int n;
    printf("\n\n\t\tCheck number is even or odd\nEnter a number : ");
    scanf("%d", &n);
    if (1 & n)
    {
        printf("\n%d is a odd number\n\n",n);
    }
    else
    {
        printf("\n%d is a even number\n\n",n);
    }
    return 0;
}
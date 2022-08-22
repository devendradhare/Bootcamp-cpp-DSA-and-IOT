//  6. Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int i,n,facto = 1;
    printf("\n\ncalculate factorial of a number\nEnter a number : ");
    scanf("%d",&n);
    for (  i = 1; i <= n; i++)
    {
        facto *= i;
    }
    printf("factorial of %d = %d",n,facto);
    return 0;
}
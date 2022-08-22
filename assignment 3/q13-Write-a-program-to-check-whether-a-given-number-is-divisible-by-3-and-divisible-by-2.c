//  13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>
int main()
{
    int n;
    printf("\n\n\tcheck given number is divisible by 3 and 2\nEnter a number : ");
    scanf("%d", &n);
    if (n % 2 == 0 && n % 3 == 0)
    {
        printf("%d is divisible by 3 and 2", n);
    }
    else
    {
        printf("%d is not divisible by 3 and 2", n);
    }
    return 0;
}
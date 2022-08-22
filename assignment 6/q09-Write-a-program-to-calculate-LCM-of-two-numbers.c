//  9. Write a program to calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int num1, num2, lcm, i;
    printf("\n\nCalculate LCM of two numbers \nEnter a number : ");
    scanf("%d%d", &num1, &num2);
    for (i = num1;; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("\n\nLCM = %d\n\n", lcm);
    return 0;
}
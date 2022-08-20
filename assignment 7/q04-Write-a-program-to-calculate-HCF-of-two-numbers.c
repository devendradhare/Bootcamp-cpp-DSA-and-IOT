// 4. Write a program to calculate HCF of two numbers
#include <stdio.h>
int main()
{
    int num1, num2, i = 1, hcf = 1;
    printf("\n\nCalculate HCF of two numbers\nEnter any two numbers : ");
    scanf("%d%d", &num1, &num2);
    // if (num1 < num2)
    // {
    //     num1 += num2;
    //     num2 = num1 - num2;
    //     num1 -= num2;
    // }
    num1 < num2 ? num1 += num2, num2 = num1 - num2, num1 -= num2 : 1;
    while (i < num1)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
        i++;
    }
    printf("hcf = %d\n\n", hcf);
    return 0;
}
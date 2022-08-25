// 2.Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int HCF(int a, int b);
int main()
{
    int a, b, hcf;
    printf("\n\nFunction to calculate HCF of two numbers\nEnter any two numbers : ");
    scanf("%d%d", &a, &b);
    hcf = HCF(a, b);
    printf("\nHCF of %d and %d is %d", a, b, hcf);
    return 0;
}
int HCF(int a, int b)
{
    int i, hcf;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
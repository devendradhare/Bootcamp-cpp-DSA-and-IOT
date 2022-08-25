// 1.Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int LCM(int a, int b);
int main()
{
    int a, b, lcm;
    printf("\n\nFunction to calculate LCM of two numbers\nEnter any two numbers : ");
    scanf("%d%d", &a, &b);
    lcm = LCM(a, b);
    printf("\nLCM of %d and %d is %d", a, b, lcm);
    return 0;
}
int LCM(int a, int b)
{
    int i;
    printf("%d %d\n", a, b);
    if (a > b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    printf("%d %d\n", a, b);
    for (i = a; ; i += a)
    {
        printf("  %d  ",i);
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}
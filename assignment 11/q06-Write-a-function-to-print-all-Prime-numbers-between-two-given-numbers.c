// 6.Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime_between(int a,int b);
int main()
{
    int a,b;
    printf("\n\nfunction to print all Prime numbers between two given numbers\nEnter a number : ");
    scanf("%d%d",&a,&b);
    prime_between(a,b);
    return 0;
}
void prime_between(int a,int b)
{
    int i, j;
    a > b ? a += b, b = a - b, a -= b : 1;
    for (i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= i)
        {
            printf("%d\n", i);
        }
    }
}
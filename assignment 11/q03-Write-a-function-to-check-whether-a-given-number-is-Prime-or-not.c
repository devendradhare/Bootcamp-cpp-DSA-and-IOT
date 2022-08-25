// 3.Write a function to check whether a given number is Prime or not. (TSRS)
int prime(int num);
#include<stdio.h>
int main()
{
    int n;
    printf("\n\nCheck whether a given number is prime or not\nEnter a number : ");
    scanf("%d",&n);
    if(prime(n))
    {
        printf("\n%d is a prime number\n\n",n);
    }
    else
    {
        printf("\n%d is not a prime number\n\n",n);
    }
    return 0;
}
int prime(int num)
{
    int i;
    for(i = 2;i < num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
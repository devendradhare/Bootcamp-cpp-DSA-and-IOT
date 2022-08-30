// 5.Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int digit_sum(int n);
int main()
{
    int n,sum;
    printf("\n\nrecursive function to calculate sum of digit of a given number\nEnter a number : ");
    scanf("%d",&n);

    sum = digit_sum(n);

    printf("\nsum of digits of %d is %d\n\n",n,sum);
    return 0;
}
int digit_sum(int n)
{
    if(n<1)
    {
        return n;
    }
    return (n%10)+digit_sum(n/10);
}
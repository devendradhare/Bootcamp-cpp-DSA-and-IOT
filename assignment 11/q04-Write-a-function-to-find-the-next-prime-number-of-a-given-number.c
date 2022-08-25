// 4.Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int next_prime(int n);
int main()
{
    int n;
    printf("\n\nFind the next prime number of a given number\nEnter a number : ");
    scanf("%d",&n);
    printf("\nNext prime number = %d\n\n",next_prime(n));
    return 0;
}
int next_prime(int n)
{
    int i,j;
    for(i = n+1; ;i++)
    {
        for(j = 2;j < i; j++)
        {
            if (i%j == 0)
            {
                break;
            }
        }
        if(j>=i)
         return i;
    }
}
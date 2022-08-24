// 10. Write a function to print all prime factors of a given number. For example, if the 
//  number is 36 then your result should be 2, 2, 3, 3. (TSRN)  
void prime_factors(int n);
#include<stdio.h>
int main()
{
    int n;
    printf("\n\nfunction to print all prime factors of a number\nEnter a number : ");
    scanf("%d",&n);
    prime_factors(n);
    return 0;
}
void prime_factors(int n)
{
    int i;
    for(i = 2;i > 0&&i <= n ;)
    {
        if (n%i==0)
        {
            n /= i;
            printf("%d ",i);
        }
        else
        {
            i++;
        }        
    }
}
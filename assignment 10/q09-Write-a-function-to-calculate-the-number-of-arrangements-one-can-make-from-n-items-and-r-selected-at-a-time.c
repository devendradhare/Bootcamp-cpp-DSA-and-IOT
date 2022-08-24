// 9. Write a function to check whether a given number contains a given digit or not. 
// (TSRS)
#include<stdio.h>
int digit(int n,int d);
int main()
{
    int n,d;
    printf("\n\ncheck whether a given number contains a given digit or not\nEnter a number : ");
    scanf("%d",&n);
    printf("Enter a digit : ");
    scanf("%d",&d);

    if (digit(n,d))
    {
        printf("\ndigit %d is available in %d\n\n",d,n);
    }
    else
    {
        printf("\ndigit %d is not in %d\n\n",d,n);
    }
    return 0;
}
int digit(int n,int d)
{
    int i;
    while (n>0)
    {
        if (n%10==d)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}
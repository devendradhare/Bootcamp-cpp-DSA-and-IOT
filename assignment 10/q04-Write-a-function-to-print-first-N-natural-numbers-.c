// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void n_natural(int); 
int main()
{
    int n;
    printf("\nPrint first N natural number\nEnter a number : ");
    scanf("%d",&n);
    n_natural(n);
    return 0;
}
void n_natural(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("\n%d",i);
    }
    
}
// 10.  Write a program to print a table of N
#include<stdio.h>
int main()
{
    int i,n;
    printf("\n\nprint a table of N\nEnter a number : ");
    scanf("%d",&n);
    for(i = 1; i <= 10 ; i++)
    {
        printf("%2d * %d = %d\n",i,n,n*i);
    }
    return 0;
}
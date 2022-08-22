//  6.  Write a program to print greater between two numbers. Print one number of both are the same
#include <stdio.h>
int main()
{
    int a,b;
    printf("\n\n\t\tGreater number between two number\nEnter any two number : ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("\n\n\t\t%d\n\n",a);
    }
    else
    {
        printf("\n\n\t\t%d\n\n",b);
    }
    return 0;
}
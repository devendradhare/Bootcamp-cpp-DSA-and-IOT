// 10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int a,int b);
int main()
{
    int x,n,p;
    printf("\n\ncalculate the power of any number using recursion\nEnter a number : ");
    scanf("%d",&x);
    printf("Enter power of the number : ");
    scanf("%d",&n);

    p = power(x,n);

    printf("%d^%d = %d",x,n,p);
    return 0;
}
int power(int a,int b)
{
    if(b<=1)
        return a;
    return a*power(a,b-1);
}

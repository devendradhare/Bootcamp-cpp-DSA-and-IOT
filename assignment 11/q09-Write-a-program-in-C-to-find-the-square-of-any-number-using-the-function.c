// 9.Write a program in C to find the square of any number using the function.
#include<stdio.h>
int sqr(int n);
int main()
{
    int n;
    printf("\n\nfind the square of any number using the function\nEnter a number : ");
    scanf("%d",&n);
    printf("\nsquare of %d is %d\n\n",n,sqr(n));
    return 0;
}
int sqr(int n)
{
    return n*n;
}
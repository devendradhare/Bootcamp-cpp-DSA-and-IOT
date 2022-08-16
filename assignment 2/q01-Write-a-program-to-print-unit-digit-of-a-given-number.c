// 1. Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf("\nThe unit digit of %d is %d\n",n,n%10);
    return 0;
}
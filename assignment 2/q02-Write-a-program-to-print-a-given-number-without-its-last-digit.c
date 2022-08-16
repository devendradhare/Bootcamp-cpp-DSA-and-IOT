// Write a program to print a given number without its last digit
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf("\nNumber without its last digit = %d\n\n",n/10);
}
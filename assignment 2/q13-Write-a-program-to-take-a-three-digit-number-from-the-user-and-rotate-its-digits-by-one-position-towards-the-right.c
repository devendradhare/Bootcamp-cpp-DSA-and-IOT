// Write a program to take a three-digit number from the user and rotate its digits by one position towards the right
#include<stdio.h>
int main()
{
    int n,r;
    printf("\n\nEnter a three digit number : ");
    scanf("%d",&n);
    r = (n/10)+((n%10)*100);
    printf("after rotate = %d",r);
}
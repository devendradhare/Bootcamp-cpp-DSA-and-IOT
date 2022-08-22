//  Write a program to input a three-digit number and display the sum of the digits
#include <stdio.h>
int main()
{
    int n,sum = 0;
    printf("Enter a three-digit number : ");
    scanf("%d",&n);
    sum = (n%10)+((n/10)%10)+(n/100);
    printf("sum of all three digits is = %d",sum);
    return 0;
}
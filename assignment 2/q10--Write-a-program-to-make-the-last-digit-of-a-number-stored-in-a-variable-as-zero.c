//  10.  Write a program to make the last digit of a number stored in a variable as zero
// (Example - if x=2345 then make it x=2340)
#include <stdio.h>
int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\t%d",n-(n%10));
    return 0;
}
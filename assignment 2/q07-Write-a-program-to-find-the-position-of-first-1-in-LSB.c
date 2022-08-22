//  7. Write a program to find the position of first 1 in LSB
#include <stdio.h>
int main()
{
    int n,count = 1;
    printf("\n\nPosition of first 1 in LSB\nEnter a number : ");
    scanf("%d",&n);
    while ((n&1)==0)
    {
        n = n>>1;
        count++;
    }
    printf("\n\nPosition of first 1 in LSB = %d\n\n",count);
    return 0;
}
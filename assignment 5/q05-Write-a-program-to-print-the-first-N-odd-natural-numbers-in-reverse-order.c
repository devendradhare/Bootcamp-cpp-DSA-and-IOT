//  5. Write a program to print the first N odd natural numbers in reverse order
#include <stdio.h>
int main()
{
    int i,n;
    printf("print the first N odd natural numbers in reverse order\nEnter a number : ");
    scanf("%d",&n);
    for (  i = n; i > 0; i--)
    {
        printf("%d\n",i*2-1);
    }
    return 0;
}
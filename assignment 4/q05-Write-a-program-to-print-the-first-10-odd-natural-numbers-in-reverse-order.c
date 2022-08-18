// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i;
    for (  i = 10; i > 0; i--)
    {
        printf("%d\n",i*2-1);
    }
    return 0;
}
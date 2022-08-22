//  10. Write a program to print a table of 5
#include <stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 10 ; i++)
    {
        printf("%2d * %d = %d\n",i,5,5*i);
    }
    return 0;
}
//  2. Write a program to print the first N natural numbers
#include <stdio.h>
int main()
{
    int i, n;
    printf("\n\nPrint the first N natural numbers\nEnter a number : ");
    scanf("%d",&n);
    for (  i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
//  3. Write a program to print the first N natural numbers in reverse order
#include <stdio.h>
int main()
{
    int i,n;
    printf("Print the first N natural number\nEnter a number : ");
    scanf("%d",&n);
    for (  i = n; i > 0; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
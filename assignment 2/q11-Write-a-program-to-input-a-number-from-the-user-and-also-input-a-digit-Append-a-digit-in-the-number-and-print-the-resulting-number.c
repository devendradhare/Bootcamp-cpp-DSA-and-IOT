// 11.  Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number
#include <stdio.h>
int main()
{
    int n, d, c;
    printf("\n\nEnter a number : ");
    scanf("%d", &n);
    printf("Enter a digit : ");
    scanf("%d", &d);
    c = n * 10 + d;
    printf("\n\n%d\n\n", c);
    return 0;
}
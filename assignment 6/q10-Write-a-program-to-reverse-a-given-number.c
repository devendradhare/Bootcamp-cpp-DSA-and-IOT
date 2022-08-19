// 10. Write a program to reverse a given number
#include <stdio.h>
int main()
{
    int num, i, Rnum = 0;
    printf("\n\nreverse a given number\nEnter a number : ");
    scanf("%d", &num);
    while (num > 0)
    {
        Rnum *= 10;
        Rnum += num % 10;
        num /= 10;
    }
    printf("\n\nreverse number = %d\n\n",Rnum);
    return 0;
}
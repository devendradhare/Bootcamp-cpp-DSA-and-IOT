// 9. Write a program in C to count the digits of a given number using recursion
#include <stdio.h>
int count_digit(int n);
int main()
{
    int n, d;
    printf("\n\ncount the digits of a given number using recursion\nEnter a number : ");
    scanf("%d", &n);

    d = count_digit(n);

    printf("\n%d has %d digits\n\n", n, d);

    return 0;
}
int count_digit(int n)
{
    int count = 1;
    if (n / 10 != 0)
    {
        count += count_digit(n/10);
        return count;
    }
    return 1;

}
// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>
int sum = 0, r;
int reverse(int num);
int main()
{
    int n, rev;
    printf("\n\nrecursive function to print reverse of a given number\nEnter any number : ");
    scanf("%d", &n);
    rev = reverse(n);
    printf("The reverse of entered number is :%d", rev);
    return 0;
}

int reverse(int num)
{
    if (num)
    {
        r = num % 10;
        sum = sum * 10 + r;
        reverse(num / 10);
    }
    return sum;
}
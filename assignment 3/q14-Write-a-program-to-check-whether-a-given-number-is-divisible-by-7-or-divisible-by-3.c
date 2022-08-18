// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3. 
#include<stdio.h>
int main()
{
    int n;
    printf("\n\ncheck whether a given number is divisible by 7 or divisible by 3\nEnter a number : ");
    scanf("%d",&n);
    if (n%7==0||n%3==0)
    {
        printf("\nnumber is divisible by 7 or divisible by 3\n\n");
    }
    else
    {
        printf("\nnumber is not divisible by 7 or divisible by 3\n\n");
    }
    return 0;
}
// 3. Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int even_odd(int n);
int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    if(even_odd(num))
    {
        printf("\n%d is a odd number\n\n",num);
    }
    else
    {
        printf("\n%d is a even number\n\n",num);
    }
}
int even_odd(int n)
{
    return n%2;
}
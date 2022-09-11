// 1.Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swap(int *a, int *b);
int main()
{
    int a,b;
    printf("\n\n\tfunction to swap values of two in variables of calling function\n\nEnter two number a and b : ");
    scanf("%d%d",&a,&b);
    printf("\na = %d\tb = %d",a,b);

    swap(&a,&b);

    printf("\na = %d\tb = %d",a,b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
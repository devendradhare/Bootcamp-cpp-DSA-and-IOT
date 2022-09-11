// 5.Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main()
{
    int a = 10,b = 99,temp;
    int *aa = &a, *bb = &b;

    printf("\n\nbrfore swaping\n\ta = %d\tb = %d",*aa,*bb);

    temp = *aa;
    *aa = *bb;
    *bb = temp;

    printf("\n\nafter swaping\n\ta = %d\tb = %d\n\n",*aa,*bb);
    
    return 0;
}
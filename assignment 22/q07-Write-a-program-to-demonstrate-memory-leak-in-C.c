// 7. Write a program to demonstrate memory leak in C
#include<stdio.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int)*10);
    ptr =   NULL;   
    return 0;
}
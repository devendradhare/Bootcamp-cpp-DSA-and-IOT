// 8. Write a program to demonstrate dangling pointers in C
#include<stdio.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(10*sizeof(int));
    free(ptr);
    return 0;
}
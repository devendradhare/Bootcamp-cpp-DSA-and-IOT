// 9.  Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int int_num;
    float float_num;
    char ch;
    double dbl;
    printf("size of an int variable   = %d\nSize of a float variable  = %d\nSize of a char variable   = %d\nSize of a double variable = %d",sizeof(int_num),sizeof(float_num),sizeof(ch),sizeof(dbl));
    return 0;
}
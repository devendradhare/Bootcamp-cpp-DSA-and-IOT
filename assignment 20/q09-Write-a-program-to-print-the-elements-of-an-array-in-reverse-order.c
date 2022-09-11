// 9.Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10},i,*p = arr;
    printf("\n\ndemo array = ");
    for(i = 0;i < 10; i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n\narray in reverse = ");
    for(i = 9;i >= 0; i--)
    {
        printf("%d ",*(p+i));
    }
    printf("\n\n");
    return 0;
}
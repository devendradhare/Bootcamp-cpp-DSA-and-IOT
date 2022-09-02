// 2.Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest_in_arr(int a[],int size);
int main()
{
    int array[10] = {1,20,2,1000,5,200,10,500,100,50};
    int min;

    min = smallest_in_arr(array,10);

    printf("\n%d is the smallest number in the array\n\n",min);

    return 0;
}

int smallest_in_arr(int a[],int size)
{
    int min = a[0];
    for(size;size >= 0; size--)
    {
        if (min > a[size])
        {
            min = a[size];
        }
    }
    return min;
}
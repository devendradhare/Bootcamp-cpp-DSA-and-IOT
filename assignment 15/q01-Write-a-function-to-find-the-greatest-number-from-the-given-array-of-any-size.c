// 1.Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest_in_arr(int a[],int size);
int main()
{
    int array[10] = {1,20,2,1000,5,200,10,500,100,50};
    int max;

    max = greatest_in_arr(array,10);

    printf("\n%d is the greatest number in the array\n\n",max);

    return 0;
}

int greatest_in_arr(int a[],int size)
{
    int max = a[0];
    for(size;size >= 0; size--)
    {
        if (max < a[size])
        {
            max = a[size];
        }
    }
    return max;
}
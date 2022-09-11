// 8.Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sum = 0, i, *p = arr;
    printf("\n\ndemo array = ");
    
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
        sum += *(p + i);
    }

    printf("\n\nsum = %d\n\n", sum);
    return 0;
}
// 10.Write a program in C to copy the elements of one array into another array.Take arrayvalues from the user.
#include <stdio.h>
int main()
{
    int array1[10], array2[10], i;
    printf("\n\nEnter any 10 numbers : ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &array1[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        array2[i] = array1[i];
    }

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", array2[i]);
    }
    return 0;
}

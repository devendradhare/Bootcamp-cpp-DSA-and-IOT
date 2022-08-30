// 9.Write a program in C to read n number of values in an array and display it in reverseorder.Take array values from the user.
#include <stdio.h>
int main()
{
    int array[10],i;
    printf("\nEnter any 10 numbers : ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    return 0;
}
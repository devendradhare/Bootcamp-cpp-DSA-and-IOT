// 2.Write a program to ask the user to input a number of data values he would like toenter
// then create an array dynamically to accommodate the data values.
// Now takethe input from the user and display the average of data values.
#include <stdio.h>
int main()
{
    int n, i, *str, sum = 0;
    float avg;
    printf("\n\n\t\taverage of n numbers\n\nEnter value of n : ");
    scanf("%d", &n);

    str = (int *)calloc(sizeof(int), n);
    printf("\nEnter %d numbers : ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &str[i]);
        sum += str[i];
    }
    avg = (sum+0.0) / n;
    printf("\naverage = %.1f\n\n", avg);
    return 0;
}
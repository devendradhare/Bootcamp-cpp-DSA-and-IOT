// 1.Write a program to calculate the sum of numbers stored in an array of size 10. Takearray values from the user
#include<stdio.h>
int main()
{
    int i,arr[10],sum = 0;
    printf("\n\nSum of 10 numbers \nEnter any 10 numbers : ");
    for(i = 0; i <=9; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("\nsum of the 10 numbers are %d\n\n",sum);
    return 0;
}
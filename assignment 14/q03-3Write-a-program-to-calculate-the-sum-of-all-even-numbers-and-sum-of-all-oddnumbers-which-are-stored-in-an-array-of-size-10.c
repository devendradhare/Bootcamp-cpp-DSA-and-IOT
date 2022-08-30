// 3.Write a program to calculate the sum of all even numbers and sum of all oddnumbers,
// which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10],i,sum_even = 0,sum_odd = 0;
    printf("\n\nEnter any 10 numbers : ");
    for(i = 0; i <= 9; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sum_even += arr[i];
        else
            sum_odd += arr[i];
    }
    
    printf("\nsum of all even number = %d",sum_even);
    printf("\nsum of all odd number = %d\n\n",sum_odd);
    return 0;
}
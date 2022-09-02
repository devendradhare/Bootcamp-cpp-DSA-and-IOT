// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.

#include<stdio.h>
int first_occurrence(int a[],int si);
int main()
{
    int i,arr[10] = {4,5,3,6,8,3,3,5,8,1};
    printf("\n\nfirst occurrence of adjacent duplicate values in the array");
    
    printf("\n\nfirst occurrence = %d\n\n",first_occurrence(arr,10));
    return 0;
}

int first_occurrence(int a[],int si)
{
    int i;
    for(i = 0; i < si; i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    return 0;
}
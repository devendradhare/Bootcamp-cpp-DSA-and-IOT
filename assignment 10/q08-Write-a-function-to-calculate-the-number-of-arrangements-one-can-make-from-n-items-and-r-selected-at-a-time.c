// 8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)

int permutations(int n,int r);
int factorial(int n);
#include<stdio.h>
int main()
{ 
    int n,r,c;
    printf("\n\ncalculate the number of arrangements one can make from n items and r selected at a time\nEnter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    c = permutations(n,r);
    printf("\n permutations = %d",c);
    return 0;
}

int permutations(int n,int r)
{
    return factorial(n)/factorial(n-r);
}

int factorial(int n)
{
    int i,facto = 1;
    for(i = 2; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}
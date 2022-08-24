// 7. Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)
int combinations(int n,int r);
int factorial(int n);
#include<stdio.h>
int main()
{ 
    int n,r,c;
    printf("\n\ncalculate the number of combinations one can make from n items and r selected at a time\nEnter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    c = combinations(n,r);
    printf("\ncombinations = %d",c);
    return 0;
}

int combinations(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
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
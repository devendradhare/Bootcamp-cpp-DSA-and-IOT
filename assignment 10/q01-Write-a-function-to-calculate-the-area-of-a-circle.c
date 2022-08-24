// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area_of_circle(float r);
int main()
{
    float r;
    printf("\ncalculate the area of a circle\nEnter a number : ");
    scanf("%f",&r);
    r = area_of_circle(r);
    printf("\narea of circle = %.1f\n\n",r);
    return 0;
}
float area_of_circle(float r)
{
    return 22/7.0*r*r;
}
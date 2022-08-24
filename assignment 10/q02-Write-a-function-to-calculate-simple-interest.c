// 2. Write a function to calculate simple interest (TSRS)
#include <stdio.h>
float simpleI(float p,float r ,float t);
int main()
{
    float si, time, rate, P_balence;
    printf("\n\n        simple interest calculater\n\nEnter initial principal balence : ");
    scanf("%f", &P_balence);
    printf("Enter annual interest rate : ");
    scanf("%f", &rate);
    printf("Enter time (in year) : ");
    scanf("%f", &time);
    si = simpleI(P_balence,rate,time);
    printf("si = %f", si);
    return 0;
}
float simpleI(float p,float r ,float t)
{
    return (p * r * t) / 100;
}
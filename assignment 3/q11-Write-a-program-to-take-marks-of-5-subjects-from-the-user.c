//  11. Write a program to take marks of 5 subjects from the user. Assume marks are given
//  out of 100 and passing marks is 33. Now display whether the candidate passed the
//  examination or failed.
#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, percent,total;
    printf("\n\n\t\tCheck pass or fail\nEnter your marks of 5 subject : ");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    total = sub1+sub2+sub3+sub4+sub5;
    percent = (total*100)/500;
    printf("\n\ntotal marks (out of 500) = %f\npercentage = %f%%",total,percent);
    if (sub1>=33&&sub2>=33&&sub3>=33&&sub4>=33&&sub5>=33)
    {
        printf("\tPASS\n\n");
    }
    else
    {
        printf("\tFAIL\n\n");
    }
    return 0;
}
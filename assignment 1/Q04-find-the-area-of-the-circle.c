//  WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
//  Expected output format – “Area of circle is A having the radius R”.
//  Replace A with area & R with radius.
#include <stdio.h>
int main()
{
    double r,area;
    printf("Enter radius of the circle : ");
    scanf("%lf",&r);
    area = (22.0/7.0)*r*r;
    printf("\nArea of circle is %lf having the radius %lf",area,r);
    return 0;
}
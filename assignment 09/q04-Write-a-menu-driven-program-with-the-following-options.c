// 4. Write a menu driven program with the following options:
//      a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
//      b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
//      c. Check whether a given set of three numbers are equilateral triangle or not
//      d. Exit
#include <stdio.h>
int main()
{
    char n;
    float a, b, c;
    while (n != 'd')
    {
        printf("\n\tselect an option to check\n\ta. a given set of three numbers are lengths of an isosceles triangle or not\n\tb. a given set of three numbers are lengths of sides of a right angled triangle or not\n\tc. a given set of three numbers are equilateral triangle or not\n\td. Exit\n\t");
        scanf("%c", &n);
        switch (n)
        {
        case 'a':
            printf("\n\tisosceles triangle\nenter three sides of the triangle : ");
            scanf("%f%f%f", &a, &b, &c);
            switch (a + b > c && a + c > b && b + c > a && (a == b || a == c || b == c))
            {
            case 1:
                printf("\n\t%.1f, %.1f and %.1f are the sides of isosceles triangle\n", a, b, c);
                break;
            default:
                printf("\n\t%.1f, %.1f and %.1f are not the sides of isosceles triangle\n", a, b, c);
                break;
            }
            break;
        case 'b':
            printf("\n\tright angled triangle\nenter three sides of the triangle : ");
            scanf("%f%f%f", &a, &b, &c);
            if (a > c)
            {
                a += c;
                c = a - c;
                a -= c;
            }
            if (b > c)
            {
                b += c;
                c = b - c;
                b -= c;
            }
            switch (a * a + b * b == c * c)
            {
            case 1:
                printf("\n\t%.1f, %.1f and %.1f are the sides of right angled triangle\n", a, b, c);
                break;
            default:
                printf("\n\t%.1f, %.1f and %.1f are not the sides of right angled triangle\n", a, b, c);
                break;
            }
            break;
        case 'c':
            printf("\n\equilateral triangle\nenter three sides of the triangle : ");
            scanf("%f%f%f", &a, &b, &c);
            switch (a == b && b == c)
            {
            case 1:
                printf("\n\t%.1f, %.1f and %.1f are the sides of equilateral triangle\n", a, b, c);
                break;
            default:
                printf("\n\t%.1f, %.1f and %.1f are not the sides of equilateral triangle\n", a, b, c);
                break;
            }
            break;
        case 'd':
            break;
        default:
            printf("\n%c is not a velid option\n");
            break;
        }
        printf("\nEnter any key to contineu\n");
        getch();
        fflush(stdin);
    }
    return 0;
}
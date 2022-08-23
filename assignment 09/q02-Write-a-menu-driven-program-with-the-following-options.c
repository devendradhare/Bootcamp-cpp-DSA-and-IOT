// 2. Write a menu driven program with the following options:
//       a. Addition
//       b. Subtraction
//       c. Multiplication
//       d. Division
//       e. Exit
#include <stdio.h>
int main()
{
    char option = 0;
    float a, b;
    while (option != 'e')
    {
        printf("\n\n\tselect a character from follwing option :\n\ta. Addition\n\tb. Subtraction\n\tc. Multiplication\n\td. Division\n\te. Exit\n\t:");
        scanf("%c", &option);
        switch (option)
        {
        case 'a':
            printf("\n\tAddition\nEnter any two numbers : ");
            scanf("%f%f", &a, &b);
            printf("%.3f+ %.3f= %.3f", a, b, a + b);
            break;
        case 'b':
            printf("\n\tSubtraction\nEnter any two numbers : ");
            scanf("%f%f", &a, &b);
            printf("%.3f- %.3f= %.3f", a, b, a - b);
            break;
        case 'c':
            printf("\n\tMultiplication\nEnter any two numbers : ");
            scanf("%f%f", &a, &b);
            printf("%.3f* %.3f= %.3f", a, b, a * b);
            break;
        case 'd':
            printf("\n\tDivision\nEnter any two numbers : ");
            scanf("%f%f", &a, &b);
            printf("%.3f/ %.3f= %.3f", a, b, a / b);
            break;
        case 'e':
            break;
        default:
            printf("\n%c is not vaild option\n\n", option);
            break;
        }
        printf("\nEnter any key to continue");
        getch();
        fflush(stdin);
    }
    return 0;
}
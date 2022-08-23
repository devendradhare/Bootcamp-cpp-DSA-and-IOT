// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
//      For the first 50 units Rs. 0.50/unit
//      For the next 100 units Rs. 0.75/unit
//      For the next 100 units Rs. 1.20/unit
//      For units above 250 Rs. 1.50/unit
//      An additional surcharge of 20% is added to the bill
#include <stdio.h>
int main()
{
    float unit, bill;
    printf("\n\nEnter electricity unit : ");
    scanf("%f", &unit);
    switch (unit <= 50)
    {
    case 1:
        bill = unit * 0.50;
        bill += (bill * 20) / 100;
        printf("\nbill = RS. %.1f", bill);
        break;
    default:
        switch (unit <= 150)
        {
        case 1:
            bill = 25;
            unit -= 50;
            bill += unit * 0.75;
            bill += (bill * 20) / 100;
            printf("\nbill = RS. %.1f", bill);
            break;
        default:
            switch (unit <= 250)
            {
            case 1:
                bill = 100;
                unit -= 150;
                bill += unit * 1.20;
                bill += (bill * 20) / 100;
                printf("\nbill = RS. %.1f", bill);
                break;
            default:
                bill = 220;
                unit -= 250;
                bill += unit * 1.50;
                bill += (bill * 20) / 100;
                printf("\nbill = RS. %.1f", bill);
                break;
            }
            break;
        }
        break;
    }
    return 0;
}
// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to Dollar and Dollar to Rupee conversion.
// Example -
// int main()
// {
//     Rupee r = 23;
//     Dollar d = r; // Rupee to Dollar conversion
//     d.display();
//     r.display();
//     r = d; // Dollar to Rupee Conversion
//     d.display();
//     r.display();
//     return 0;
// }
#include <iostream>
using namespace std;
float DOLLAR = 100;
class Dollar
{
private:
    float D;

public:
    Dollar() {}
    Dollar(float $)
    {
        D = $;
    }
    float getD()
    {
        return D;
    }
    void display()
    {
        cout << "\n"
             << D << "$";
    }
};
class Rupee
{
private:
    float Rs;

public:
    Rupee() {}
    Rupee(float Rs)
    {
        this->Rs = Rs;
    }
    Rupee(Dollar D)
    {
        Rs = D.getD() * DOLLAR;
    }
    operator Dollar()
    {
        Dollar temp(Rs / DOLLAR);
        return temp;
    }
    void display()
    {
        cout << "\n"
             << Rs << "Rs";
    }
};
int main()
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();

    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
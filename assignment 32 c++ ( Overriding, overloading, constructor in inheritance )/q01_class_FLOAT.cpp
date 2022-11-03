// 1.Create a class FLOAT that contains one float data member.
// Overload all the four arithmetic operators so that they can operate on the objects of FLOAT

#include <iostream>
using namespace std;
class FLOAT
{
private:
    float num;

public:
    FLOAT() {}
    FLOAT(float float_num) { num = float_num; }

    FLOAT operator+(FLOAT f) { return num + f.num; }
    FLOAT operator-(FLOAT f) { return num - f.num; }
    FLOAT operator*(FLOAT f) { return num * f.num; }
    FLOAT operator/(FLOAT f) { return num / f.num; }

    void operator=(FLOAT f) { num = f.num; }
    friend ostream &operator<<(ostream &float_out, FLOAT f);
};

ostream &operator<<(ostream &float_out, FLOAT f)
{
    cout << f.num;
    return float_out;
}

int main()
{
    FLOAT F1(3), F2;
    F2 = 2;

    cout << "\n\nF1 = " << F1 << "\nF2 = " << F2<<endl;
    cout << "\nF1 + F2 = " << F1 + F2;
    cout << "\nF1 - F2 = " << F1 - F2;
    cout << "\nF1 * F2 = " << F1 * F2;
    cout << "\nF1 / F2 = " << F1 / F2;

    cout << "\n\n";
    return 0;
}
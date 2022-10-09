// 7.Define a C++ class fraction

// class fraction
// {
//     long numerator;
//     long denominator;

// public:
//     fraction(long n = 0, long d = 0);

// }

// Overload the following operators as member or friend :
//         a)  Unary ++ (pre and post both)
//         b)  Overload as friend functions :
//                 operators << and >>

#include <iostream>
using namespace std;
class fraction
{
private:
    long numerator;
    long denominator;

public:
    fraction(long n = 0, long d = 0)
    {
        numerator = n;
        denominator = d;
    }
    void set_data(int n, int d)
    {
        numerator = n;
        denominator = d;
    }
    fraction operator++()
    {
        fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
    }
    fraction operator++(int)
    {
        fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }
    char show()
    {
        cout << numerator << "/" << denominator;
        return 0;
    }
};

int main()
{
    fraction f1, f2;
    int n, d;
    cout << "\nf1 = " << f1.show();
    cout << "\nf2 = " << f2.show() << endl;

    cout << "Enter first fraction value : ";
    cout << "\n\nnumerator : ";
    cin >> n;
    cout << "denominator : ";
    cin >> d;
    f1.set_data(n, d);
    cout<<"\nf1 = ";
    f1.show();
    cout<<"\nf2 = ";
    f2.show();

    f2 = ++f1;
    cout<<"\n\nf2 = ++f1";
    cout<<"\nf1 = ";
    f1.show();
    cout<<"\nf2 = ";
    f2.show();

    f2 = f1++;
    cout<<"\n\nf2 = f1++";
    cout<<"\nf1 = ";
    f1.show();
    cout<<"\nf2 = ";
    f2.show();

    return 0;
}
// 1.Define a class Complex to represent a complex number with instance variables a and b
//   to store real and imaginary parts. Also define following member functions
//       a. void setData(int,int)
//       b. void showData()
//       c. Complex add(Complex)

#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " + " << b << "i";
    }
    Complex add(Complex comp_arg)
    {
        Complex tamp;
        tamp.a = a + comp_arg.a;
        tamp.b = b + comp_arg.b;
        return tamp;
    }
};

int main()
{
    Complex comp1, comp2;
    comp1.setData(3, 4);
    comp2.setData(5, 6);
    cout << "\n\n\tthis is class Complex\ncomp1 = ";
    comp1.showData();
    cout << "\ntcomp2 = ";
    comp2.showData();
    cout<<"\ncomp1 + comp2 = ";
    comp1.add(comp2).showData();
    cout<<"\n\n";
    return 0;
}
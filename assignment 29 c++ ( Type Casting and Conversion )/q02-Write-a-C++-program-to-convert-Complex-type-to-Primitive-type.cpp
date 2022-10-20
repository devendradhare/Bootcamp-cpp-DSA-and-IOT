// 2. Write a C++ program to convert Complex type to Primitive type.
// Example -
//     int main()
//     {
//         Complex c1;
//         c1.setData(3, 4);
//         int x;
//         x = c1;
//         return 0;
//     }
#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex() {}
    void setData(int real,int img)
    {
        a = real;
        b = img;
    }
    operator int()
    {
        return a;
    }
    void display()
    {
        cout<<a<<" + "<<b<<"i";
    }
};
int main()
{
    Complex c1;
    c1.setData(3, 4);
    int x;
    cout<<"\nx = "<<x;
    x = c1;
    cout<<"\nx = "<<x<<"\nc1 = ";
    c1.display();

    return 0;
}
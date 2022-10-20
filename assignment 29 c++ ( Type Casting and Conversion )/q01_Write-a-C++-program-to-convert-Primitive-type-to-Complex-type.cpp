// 1.Write a C++ program to convert Primitive type to Complex type.
//
//     Example -
//
//         int main()
//         {
//             Complex c1;
//             Int x = 5;
//             c1 = x;
//             return 0;
//         }

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex() {}
    Complex(int a)
    {
        this->a = a;
        this->b = a + 1;
    }
    void display()
    {
        cout << a << " + " << b << "i";
    }
};
int main()
{
    Complex c1 = 3,c2(5);
    cout << "\nc1 = ";
    c1.display();
    cout << endl;

    cout << "\nc2 = ";
    c2.display();
    cout << endl;

    int x = 8;
    c1 = x;
    cout << "\nc1 = ";
    c1.display();
    return 0;
}
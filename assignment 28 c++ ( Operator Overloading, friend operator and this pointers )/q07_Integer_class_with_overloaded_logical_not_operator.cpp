// 7.Create an Integer class and overload logical not operator for that class.

#include <iostream>
using namespace std;
class Integer
{
private:
    int a;

public:
    Integer() {}
    Integer(int a)
    {
        this->a = a;
    }
    void setData(int a)
    {
        this->a = a;
    }
    bool operator!()
    {
        return (!a);
    }
    void display()
    {
        cout << a;
    }
};
int main()
{
    Integer i1(0), i2(1), i3;
    i3.setData(3);
    cout << "\ni1 = ";
    i1.display();
    cout << "\t !i1 = " << !i1;

    cout << "\ni2 = ";
    i2.display();
    cout << "\t !i2 = " << !i2;

    cout << "\ni3 = ";
    i3.display();
    cout << "\t !i3 = " << !i3;

    return 0;
}
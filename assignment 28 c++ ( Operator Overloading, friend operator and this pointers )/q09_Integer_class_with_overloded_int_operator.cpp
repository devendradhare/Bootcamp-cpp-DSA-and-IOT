// 9.Create an Integer class that contains int x as an instance variable and overloadcasting int() operator
// that will type cast your Integer class object to int data type.

#include <iostream>
using namespace std;
class Integer
{
private:
    int x;

public:
    Integer() {}
    Integer(int a)
    {
        x = a;
    }
    void setData(int a)
    {
        x = a;
    }

    operator int()
    {
        return x;
    }
    void display()
    {
        cout << x;
    }
};

int main()
{
    Integer i1, i2(7);
    i1.setData(8);
    cout << "\ni1 = ";
    i1.display();
    cout << "\ni2 = ";
    i2.display();

    int num;

    num = i1;
    cout << "\nafter doing\n\tnum = i1\n";
    cout << "num = " << num;
    return 0;
}
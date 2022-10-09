//  5.   Consider following class Numbers
//
//       class Numbers
//       {
//           int x, y, z;
//
//       public:
//            methods...
//            ..........
//            ..........
//       };
//
//       Overload the operator unary minus (-) to negate the numbers.

#include <iostream>
using namespace std;
class Numbers
{
private:
    int x, y, z;

public:
    void set_data(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void show()
    {
        cout << "x = " << x << " y = " << y << " z = " << z;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main()
{
    Numbers n1, n2;
    n1.set_data(2, 3, 4);
    cout << "\nnumbers before negete : ";
    n1.show();

    -n1;
    cout << "\nnumbers after negete  : ";
    n1.show();

    return 0;
}

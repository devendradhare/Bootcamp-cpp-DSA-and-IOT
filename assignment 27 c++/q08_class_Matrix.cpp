// 8.Consider a class Matrix
//
// Class Matrix
// {
//     int a[3][3];
// public:
//     //methods;
// };
//
// Overload the - (Unary) should negate the numbers stored in the object.

#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];

public:
    void set_Matrix()
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
    }
    void show_Matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
    void operator-()
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = -a[i][j];
            }
    }
};
int main()
{
    Matrix m1, m2;
    cout<<"\nEnter your matrix : ";
    m1.set_Matrix();
    cout << "\nyour matrix : \n";
    m1.show_Matrix();

    -m1;

    cout << "\nyour matrix : \n";
    m1.show_Matrix();
    return 0;
}

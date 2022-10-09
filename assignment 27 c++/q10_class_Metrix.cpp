// 10. Class Matrix
// {
//     int a[3][3];

// public:
//     // methods;
// };

// Let m1 and m2 are two matrices.Find out m3 = m1 + m2(use operatoroverloading).
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
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    Matrix operator+(Matrix matrix)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix.a[i][j] += a[i][j];
            }
        }
        return matrix;
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << "\t" << a[i][j];
            }
        }
    }
};

int main()
{
    Matrix m1, m2, m3;

    cout << "\nEnter matrix element (3 x 3) : \n";
    m1.set_Matrix();
    cout << "\nEnter matrix element (3 x 3) : \n";
    m2.set_Matrix();

    cout << "\n\nmatrix 1 : ";
    m1.display();

    cout << "\n\nmatrix 2 : ";
    m2.display();

    m3 = m1 + m2;

    cout<<"\nmatrix 1 + matrix 2 = \n";
    m3.display();
    cout<<"\n\n";
    return 0;
}
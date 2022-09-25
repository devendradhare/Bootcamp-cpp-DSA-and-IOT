// 4. Write a C++ program to calculate the area of a circle
#include <iostream>
using namespace std;
int main()
{
    float r, a;
    cout << "\n\n\t\tcalculate the area of a circle\nEnter radias of the circle : ";
    cin >> r;
    a = (22 / 7.0) * r * r;
    cout << "\narea = " << a << "\n\n";
    return 0;
}
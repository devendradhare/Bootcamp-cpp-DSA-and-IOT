// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include <iostream>
using namespace std;

inline float area(int r);
inline int area(int a, int b);
inline float area(float h, float b);
float area(int r)
{
    return (22 / 7.0) * r * r;
}

int area(int a, int b)
{
    return a * b;
}

float area(float h, float b)
{
    return (b * h) / 2;
}

int main()
{
    int a, b, option;
    float w, h;
    while (1)
    {
        cout << "\n\n\tarea claculater\nEnter 0 to exit\nEnter 1 for area of circle\nEnter 2 for area of ractangle\nEnter 3 for area of triangle\n";
        cin >> option;
        if (!option)
        {
            break;
        }

        switch (option)
        {
        case 1:
            cout << "\nEnter radius of circle : ";
            cin >> a;
            cout << "\narea of the circle is " << area(a) << "\n\n";
            break;
        case 2:
            cout << "\nEnter width and hight of rectangle : ";
            cin >> a >> b;
            cout << "\narea of the rectangle is " << area(a, b) << "\n\n";
            break;
        case 3:
            cout << "\nEnter base and hight of triangle : ";
            cin >> w >> h;
            cout << "\narea of the triangle is " << area(w, h) << "\n\n";
            break;
        default:
            cout << "\n\ninvalid input\n";
            break;
        }
    }
}
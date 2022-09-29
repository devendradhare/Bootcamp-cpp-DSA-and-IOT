// 3. Define a function to calculate x raised to the power y
#include <iostream>
using namespace std;

int power(int x, int y);

int power(int x, int y)
{
    int p = 1;
    for (y; y > 0; y--)
    {
        p *= x;
    }
    return p;
}
int main()
{
    int x, y;
    cout << "\n\ncalculate x raised to the power y\nEnter value of x then y : ";
    cin >> x >> y;

    cout << "\npower = " << power(x, y) << "\n\n";
    return 0;
}
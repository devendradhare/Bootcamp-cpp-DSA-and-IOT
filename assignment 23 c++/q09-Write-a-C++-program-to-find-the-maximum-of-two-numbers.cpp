// 9. Write a C++ program to find the maximum of two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "\n\n\tmaximum of two numbers\n\nEnter any two numbers : ";
    cin >> a >> b;
    cout << "\n\t" << (a > b ? a : b) << "\n\n";
    return 0;
}
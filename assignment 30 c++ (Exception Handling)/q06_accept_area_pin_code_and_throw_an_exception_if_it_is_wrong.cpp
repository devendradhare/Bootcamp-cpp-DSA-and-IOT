// 6.Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.
#include <iostream>
using namespace std;
int main()
{
    double area_pin;
    cout << "\n\nEnter your area pin code : ";
    try
    {
        cout << "<" << area_pin << ">\n";
        cin >> area_pin;
        cout << "<" << area_pin << ">\n";
        if (area_pin == 0)
            throw exception();
        if (area_pin <= 99999)
            throw area_pin;
        if (area_pin > 999999)
            throw area_pin;
    }
    catch (double e)
    {
        cout << "\nError: invalid area pin " << e << "\n\n";
        return 0;
    }
    catch (...)
    {
        cout << "\nError: charecters is not allowd\n\n";
    }
    cout << "\nyour area code is " << area_pin << "\n\n";
    return 0;
}
// 2.Write a C++ program to demonstrate try, throw and catch statements.
#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw exception();
    }
    catch (...)
    {
        cout << "error";
    }
    return 0;
}
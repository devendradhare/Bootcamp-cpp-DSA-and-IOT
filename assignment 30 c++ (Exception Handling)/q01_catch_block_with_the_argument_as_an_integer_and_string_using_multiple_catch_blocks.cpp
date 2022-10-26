// 1.Write a C++ program to demonstrate the use of try, catch block with the argument
// as an integer and string using multiple catch blocks
#include <iostream>
using namespace std;

void single_digit(int number)
{
    int a, b;
    try
    {
        if (number > -10 && number < 10)
        {
            throw number;
        }
        else if (number == 11)
        {
            throw "number is ziro";
        }

        // else
        // {
        //     cout << "\n"
        //          << number;
        // }
    throw exception();
    }
    catch (int num)
    {
        cout << "\nsingle digit number (" << num << ") can't be acceptable";
    }
    catch (const char *e)
    {
        cout << "\n"
             << e;
    }
    catch (...)
    {
        cout << "\nunknown error";
    }
}

int main()
{
    single_digit(8);
    single_digit(10);
    single_digit(9);
    single_digit(11);
    single_digit(11);
    single_digit(12);
    return 0;
}
// 3.Write a C++ program to perform arithmetic operations on two numbers and throw an exception
// if the dividend is zero or does not contain an operator
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char operato;
    try
    {
      cout << "\n\nEnter first number : ";
        cin >> a;
        if (a == 0)
            throw a;

        cout << "Enter operator      : ";
        cin >> operato;
        if (operato != '+' && operato != '-' && operato != '*' && operato != '/')
            throw operato;

        cout << "Enter second number : ";
        cin >> b;

        switch (operato)
        {
        case '+':
            cout << "\n"
                 << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << "\n"
                 << a << " - " << b << " = " << a + b;
            break;
        case '*':
            cout << "\n"
                 << a << " * " << b << " = " << a + b;
            break;
        case '/':
            cout << "\n"
                 << a << " / " << b << " = " << a + b;
            if (b == 0)
                throw "Attempted to divide by zero.";
            break;
        }
    }
    catch (int n)
    {
        cout << "\nError: bad operand " << n << "\n\n";
    }
    catch (char op)
    {
        cout << "\nError: bad operator " << op << "\n\n";
    }
    catch (const char *ziro)
    {
        cout << "\nError: Attempted to divide by zero.\n\n";
    }
    return 0;
}
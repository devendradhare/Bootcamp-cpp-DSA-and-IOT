// 4.Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.
#include <iostream>
#include <string.h>
using namespace std;
int checkat(char *email)
{
    for (int i = 0; i < strlen(email); i++)
        if (email[i] == '@')
            return 0;
    return 1;
}
int main()
{
    char email[35];
    fflush(stdin);
    cout<<"\n\nEnter your email : ";
    fgets(email, 35, stdin);
    email[strlen(email) - 1] = '\0';

    try
    {
        if (checkat(email))
            throw "error: @ not found in email";
    }
    catch (const char *e)
    {
        cout << e;
    }
    return 0;
}
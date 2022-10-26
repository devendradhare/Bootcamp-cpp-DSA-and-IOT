// 8.Write a C++ program to accept a password and throw an exception 
//         - if the password has less than 6 characters 
//         - or does not contain a digit 
//         - or does not contain any special character 
//         - or does not contain any capital letter.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char password[50];
    int i;
    cout << "\n\nEnter your password : ";
    try
    {
        int fleg = 0;
        gets(password);
        if (strlen(password) < 6)
            throw "Error: less then 6 charecter";

        for (i = 0; password[i]; i++)
            if (password[i] >= '0' && password[i] <= '9')
                break;
        if (i == strlen(password))
            throw "Error: no digit found";

        for (i = 0; i < password[i]; i++)
            if ((password[i] >= 'a' && password[i] <= 'z') || (password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= '0' && password[i] <= '9'))
                continue;
            else
                break;
                
        if (i == strlen(password))
            throw "Error: no special symbol found";
    }
    catch (const char *e)
    {
        cout << "\n"
             << e;
        return 0;
    }
    cout << "\n\tcongratulations this password is valid\n\n";
    return 0;
}
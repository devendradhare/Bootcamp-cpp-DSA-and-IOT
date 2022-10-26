// 10.Write a C++ program to accept Nickname and throw an exception if it has greater than 8 characters
// or does contain a digit or specialsymbol or space.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i;
    char Nickname[20];
    cout << "\n\nEnter your Nickname : ";
    fflush(stdin);
    fgets(Nickname, 20, stdin);
    Nickname[strlen(Nickname) - 1] = '\0';
    try
    {
        if (strlen(Nickname) > 8)
            throw "Error: more then 8 charecter";
        for (int i = 0; Nickname[i]; i++)
        {
            if (Nickname[i] >= '0' && Nickname[i] <= '9')
                throw "Error: digits are not acceptable";
            if (Nickname[i] == 32)
                throw "Error: spaces are not acceptable";
        }
        for (i = 0; i < Nickname[i]; i++)
            if ((Nickname[i] >= 'a' && Nickname[i] <= 'z') || (Nickname[i] >= 'A' && Nickname[i] <= 'Z') || (Nickname[i] >= '0' && Nickname[i] <= '9'))
                continue;
            else
                break;

        if (i < strlen(Nickname))
            throw "Error: no special symbol found";
    }
    catch (const char *e)
    {
        cout << "\n"
             << e;
             return 0;
    }
    cout<<"\n\tthis Nickname is valid\n\n";
    return 0;
}
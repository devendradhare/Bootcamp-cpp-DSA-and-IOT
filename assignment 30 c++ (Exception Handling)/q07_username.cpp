// 7.Write a C++ program to accept a username if the username has less than 6 characters or does contain any digit or special symbol
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char username[10];
    int i;
    cout << "\n\nEnter your username : ";
    try
    {
        int fleg = 0;
        gets(username);
        if (strlen(username) > 6)
            throw "Error: more then 6 charecter";

        for (i = 0; username[i]; i++)
            if (username[i] >= '0' && username[i] <= '9')
                break;
        if (i == strlen(username))
            throw "Error: no digit found";

        for (i = 0; i < username[i]; i++)
            if ((username[i] >= 'a' && username[i] <= 'z') || (username[i] >= 'A' && username[i] <= 'Z') || (username[i] >= '0' && username[i] <= '9'))
                continue;
            else
                break;
                
        if (i == strlen(username))
            throw "Error: no special symbol found";
    }
    catch (const char *e)
    {
        cout << "\n"
             << e;
        return 0;
    }
    cout << "\n\tcongratulations this username is valid\n\n";
    return 0;
}
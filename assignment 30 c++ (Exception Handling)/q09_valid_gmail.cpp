// 9.Write a C++ program to accept Gmail id only and throw an exception if the id does not contain @ and gmail.com.
#include <iostream>
#include <string.h>
using namespace std;
bool valid_gmail(char *g)
{
    for (int i = 0; g[i]; i++)
    {
        if (strcmp(g + i, "@gmail.com") == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    char gmail[50];
    cout << "\n\nEnter your gmail id : ";
    cin >> gmail;
    try
    {
        if (valid_gmail(gmail))
            cout << "\n\tthis is a valid gmail id\n\n";
        else
            throw "Error: gmail id is not valid";
    }
    catch (const char *e)
    {
        cout << "\n"
             << e;
    }
    return 0;
}
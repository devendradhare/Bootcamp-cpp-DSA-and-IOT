// 5.Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char mobile_no[10];
    cout << "\n\nEnter your mobile number : ";
    fflush(stdin);
    fgets(mobile_no, 11, stdin);
    try
    {
        if (strlen(mobile_no) != 10)
            throw "Error: invalid mobile number";
    }
    catch (const char *e)
    {
        cout << e;
        exit(0);
    }
    cout << "\nyou entered : " << mobile_no << "\n\n";
    return 0;
}
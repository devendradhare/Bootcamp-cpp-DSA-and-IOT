// 6. Create a class CString to represent a string.
//     a)  Overload the + operator to concatenate two strings.
//     b)  == to compare 2 strings.
#include <iostream>
#include <string.h>
using namespace std;
class CString
{
private:
    char *string = (char *)malloc(1 * sizeof(char));

public:
    CString operator[](int size)
    {
        string = (char *)realloc(string, size);
        // string[strlen(string)] = NULL;
    }
    CString operator+(CString S)
    {
        strcpy(S.string, strcat(string, S.string));
        return S;
    }
    void operator=(char s[])
    {
        strcpy(string, s);
    }
    void operator=(CString s)
    {
        strcpy(string, s.string);
    }
    int operator==(CString S)
    {
        return strcmp(string, S.string);
    }
    void show()
    {
        cout << "\n"
             << string;
    }
};

int main()
{
    CString str1, str2, str3, str4;
    // str1[10] = "hello world";
    str1[20] = "hello";
    str2[20] = " world";
    str4[20] = "hello world";
    // str1 = "hello world"
    str1.show();
    str2.show();

    str3[20] = str1 + str2;
    str3.show();
    str4.show();

    if (str3 == str4)
        cout << "\nstr3 and str4 are defferent\n\n";
    else
        cout << "\nstr3 and str4 are same";

    return 0;
}
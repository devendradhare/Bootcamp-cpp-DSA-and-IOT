// 9. Consider the following class mystring
// Class mystring
// {
//     char str[100];
//
// public:
//     methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string(Uppercase to Lowercase and vice versa)

#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
private:
    char *Mystr = (char *)malloc(1);

public:
    MyString() {}
    MyString(char string[])
    {
        Mystr = (char *)realloc(Mystr, strlen(string) + 1);
        strcpy(Mystr, string);
    }
    MyString &operator=(char string[])
    {
        Mystr = (char *)realloc(Mystr, strlen(string) + 1);
        strcpy(Mystr, string);
        return *this;
    }
    void operator!()
    {
        for (int i = 0; i < strlen(Mystr); i++)
        {
            if (Mystr[i] >= 'A' && Mystr[i] <= 'Z')
                Mystr[i] += 32;
            else if (Mystr[i] >= 'a' && Mystr[i] <= 'z')
                Mystr[i] -= 32;
        }
    }
    void display()
    {
        cout<<Mystr;
    }

};
int main()
{
    MyString str1("hEllO"),str2;
    str2 = "WoRlD";
    str1.display();
    cout<<endl;
    str2.display();
    cout<<endl;
    cout<<endl;

    !str1;
    !str2;

    str1.display();
    cout<<endl;
    str2.display();
    cout<<endl;
    cout<<endl;
    return 0;


}
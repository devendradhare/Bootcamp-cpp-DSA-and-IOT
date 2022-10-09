#include <iostream>
using namespace std;

bool palindrome(int num)
{
    int temp = num, revers = 0;
    if (num < 0)
        return false;
    
    while (temp)
    {
        revers *= 10;
        revers += temp%10;
        temp /= 10;
    }
    return revers==num?true:false;
    
}

int main()
{
    int a = 123,b = 121,c = -121;
    palindrome(a)?cout<<"\n"<<a<<" is palindrome":cout<<"\n"<<a<<" is not palindrome";
    palindrome(b)?cout<<"\n"<<b<<" is palindrome":cout<<"\n"<<b<<" is not palindrome";
    palindrome(c)?cout<<"\n"<<c<<" is palindrome":cout<<"\n"<<c<<" is not palindrome";

    
    return 0;
}
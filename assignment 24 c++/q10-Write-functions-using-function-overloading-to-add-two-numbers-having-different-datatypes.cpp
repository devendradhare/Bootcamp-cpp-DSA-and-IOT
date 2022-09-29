// 10. Write functions using function overloading to add two numbers having different datatypes
#include<iostream>
using namespace std;

inline float add(float a, float b);
float add(float a, float b)
{
    return a+b;
}

int main()
{
    int a = 5,b = 5;
    float x = 6.5,y = 6.4;
    cout<<"\nint + int : "<<a<<" + "<<b<<" = "<<add(a,b);
    cout<<"\nint + float : "<<a<<" + "<<x<<" = "<<add(a,x);
    cout<<"\nfloat + int : "<<x<<" + "<<a<<" = "<<add(x,a);
    cout<<"\nfloat + flaot : "<<x<<" + "<<y<<" = "<<add(x,y);

}
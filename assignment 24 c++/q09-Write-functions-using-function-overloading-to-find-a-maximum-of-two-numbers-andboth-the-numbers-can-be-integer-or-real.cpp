// 9. Write functions using function overloading to find a maximum of two numbers 
// and both the numbers can be integer or real
#include<iostream>
using namespace std;

inline int max(int a,int b);
inline float max(float a,float b);
int max(int a,int b)
{
    return a>b?a:b;
}
float max(float a,float b)
{
    return a>b?a:b;
}

int main()
{
    int a = 99,b = 100;
    float c = 9.3,d = 5.5;
    cout<<"\nmax number between "<<a<<" and "<<b<<" = "<<max(a,b);
    cout<<"\nmax number between "<<c<<" and "<<d<<" = "<<max(c,d)<<"\n\n";
}
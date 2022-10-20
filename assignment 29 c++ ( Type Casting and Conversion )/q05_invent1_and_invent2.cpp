// 5.  Create two classes Invent1 and Invent2 and also add necessary constructors in it.
//     Now add functions to support Invent1 to float and Invent1 to Invent2 type.
//     Example -

//         int main()
//         {
//             Invent1 s1=(4,5);
//             Invent2 d1;
//             float tv;
//             tv=s1;
//             d1=s1;
//             return 0;
//         }
#include <iostream>
using namespace std;
class Invent1
{
private:
    float a, b;

public:
    Invent1(float a, float b)
    {
        this->a = a;
        this->b = b;
    }
    float getA()
    {
        return a; 
    }
    float getB()
    {
        return b;
    }
    void display()
    {
        cout<<"\na = "<<a<<"\nb = "<<b;
    }
    operator float()
    {
        return a+b;
    }
};
class Invent2
{
private:
    float a, b;

public:
    Invent2() {}
    Invent2(Invent1 in1) 
    {
        a = in1.getA();
        b = in1.getB();
    }
    Invent2(float a, float b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout<<"\na = "<<a<<"\nb = "<<b;
    }
};

int main()
{
    Invent1 s1(4, 5);
    Invent2 d1;
    float tv = 1.1111;
    cout<<"\ntv = "<<tv;

    tv = s1;
    cout<<"\n\ntv = s1\n\ttv = "<<tv<<"\n\ns1 = ";

    s1.display();

    cout<<"\n\nd1 = ";
    d1.display();

    cout<<"\n\n\td1 = s1\n";
    d1 = s1;
    
    cout<<"\nd1 = ";
    d1.display();
    return 0;
}
//2.Define a class Complex with appropriate instance variables and member functions.
//  One of the functions should be setData() to set the properties of the object.
//  Makesure the names of formal arguments are the same as names of instance variables

#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    void setData(int real,int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    c1.display();
    c2.display();
    return 0;
}
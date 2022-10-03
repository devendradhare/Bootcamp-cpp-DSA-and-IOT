// 3. Define a class Factorial and define an instance member function to find the Factorialof a number using class
#include<iostream>
using namespace std;
class Factorial
{
private:
    int n,facto = 1;
public:
    void setN(int a)
    {
        n = a;
        for(int i = 1;i <= a; i++)
        {
            facto *= i;
        }
    }
    int getN()
    {
        return n;
    }
    int get_factorial()
    {
        return facto;
    }
};

int main()
{
    Factorial f1;
    f1.setN(-5);
    cout<<"\nfactorial of "<<f1.getN()<<" is "<<f1.get_factorial()<<endl;
    return 0;
    
}
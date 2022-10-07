// 10.Define a class StaticCount and create a static variable. 
//    Increment this variable in a function and call this 3 times and display the result.
#include<iostream>
class StaticCount
{
public:
    static int count;
    static void increment()
    {
        count++;
    }
};

int StaticCount::count = 0;

int main()
{
    StaticCount::increment();
    StaticCount::increment();
    StaticCount::increment();
    std::cout << StaticCount::count << std::endl;
}
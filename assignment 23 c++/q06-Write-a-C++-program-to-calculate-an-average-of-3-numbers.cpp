// 6. Write a C++ program to calculate an average of 3 numbers
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,avg;
    cout<<"\n\n\t\tCalculate an avarage of 3 numbers\n\nEnter any three numbers : ";
    cin>>a>>b>>c;
    avg = (a+b+c)/3;
    cout<<"\naverage of the three number = "<<avg<<"\n\n";
    return 0;
}
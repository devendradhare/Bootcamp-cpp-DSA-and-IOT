// 5. Write a C++ program to calculate the volume of a cuboid
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,v;
    cout<<"\n\n\t\tCalculate the volume of a cuboid\nEnter length width hight : ";
    cin>>a>>b>>c;
    v = a*b*c;
    cout<<"\nvolume = "<<v<<"\n\n";
    return 0;
}
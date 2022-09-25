// 10. Write a C++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int arr[10],i;
    cout<<"\n\nadd all the numbers of an arrray of size 10\n";
    for(i = 0;i < 10 ;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nyou entered : ";
    for(i = 0; i < 10 ;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}
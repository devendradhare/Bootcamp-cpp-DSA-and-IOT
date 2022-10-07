// 9.Define a class Bill and define its member function get() to take detail of customer 
// ,calculateBill() function to calculate electricity bill using below tariff :
//         Upto 100 unit RS. 1.20 per unit
//         From 100 to 200 unit RS. 2 per unit
//         Above 200 units RS. 3 per unit

#include<iostream>
#include<string.h>
using namespace std;
class Bill
{
private:
    char n[30];
    float u,bill;
    void set_bill()
    {
        if(u<=100)
        {
            bill = u*1.20;
        }
        else if (u<=200)
        {
            bill = 100*1.20;
            bill += (u-100)*2;
        }
        else
        {
            bill = (100*1.20)+(100*2);
            bill += (u-200)*3;
        }
        
    }

public:
    Bill( ){}   
    void setData(char name[],int unit)
    {
        strcpy(n,name);
        u = unit;
        set_bill();
    }
    void set_data_by_user()
    {
        cout<<"\nEnter yout name : ";
        cin>>n;
        cout<<"Enter used electricity used by you (in unit) : ";
        cin>>u;
        set_bill();
    }
    void show_bill()
    {
        cout<<"\nname "<<n<<"\nused unit "<<u<<"\nbill (in rs.) "<<bill<<endl;
    }
};

int main()
{
    Bill user1,user2;
    user1.setData("devendra dhare",500);
    user2.set_data_by_user();
    user1.show_bill();
    user2.show_bill();
    return 0;
}
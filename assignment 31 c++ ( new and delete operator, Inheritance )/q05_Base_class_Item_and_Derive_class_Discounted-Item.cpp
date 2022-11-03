// 5.Write a C++ program to define a base class Item (item-no, name, price).
// Derive a class Discounted-Item (discount-percent).
// A customer purchases 'n' items. Display the item-wise bill and total amount using appropriateformat.
#include <iostream>
#include <string.h>
using namespace std;
class Item
{
private:
    char item_name[30];
    int item_no;
    float price;

public:
    void set_Name(char *name) { strcpy(item_name, name); }
    void set_Name()
    {
        fflush(stdin);
        fgets(item_name, 30, stdin);
        item_name[strlen(item_name)-1] = '\0';
    }

    void set_item_no(int item_no) { this->item_no = item_no; }
    void set_item_no() { cin >> item_no; }

    void set_price(float price) { this->price = price; }
    void set_price() { cin >> price; }

    char *get_item_name() { return item_name; }
    int get_item_no() { return item_no; }
    float get_price() { return price; }
};

class Discounted_Item : public Item
{
private:
    float discount;

public:
    void set_discount_percent(float discount) { this->discount = discount; }
    void set_discount_percent() { cin >> discount; }

    float get_discount_percent() { return discount; }
    float get_discount_price() { return get_price()-((get_price() * discount) / 100); }
};

int main()
{
    int n;
    float total_price = 0,total_discount = 0;
    cout << "\n\nhow many Items you want to enter? : ";
    cin >> n;

    Discounted_Item items[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Item name : ";
        items[i].set_Name();

        cout << "\nEnter Item number : ";
        items[i].set_item_no();

        cout << "\nEnter Item price : ";
        items[i].set_price();

        cout << "\nEnter discount percent : ";
        items[i].set_discount_percent();

        cout << "\n--------------------------------------------\n";
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nItem name         : " << items[i].get_item_name();
        cout << "\nItem number       : " << items[i].get_item_no();
        cout << "\nItem price        : " << items[i].get_price();
        cout << "\ndiscount percent  : " << items[i].get_discount_percent();
        cout << "\ndiscount price    : " << items[i].get_discount_price();
        cout << "\n--------------------------------------------";
    }

    for (int i = 0; i < n; i++)
    {
        total_price += items[i].get_price();
        total_discount += items[i].get_price()-items[i].get_discount_price();
    }
    cout << "\nTotal price      : " << total_price;
    cout << "\nTotal discount   : " << total_discount;
    return 0;
}
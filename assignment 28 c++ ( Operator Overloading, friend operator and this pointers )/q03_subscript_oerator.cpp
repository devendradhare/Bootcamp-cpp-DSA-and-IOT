// 3.Overload subscript operator [] that will be useful when we want to check for an indexout of bound.

#include <iostream>
using namespace std;
class Array
{
private:
    int *p = (int *)malloc(1);
    int s = 0;

public:
    Array() {}
    Array(int size)
    {
        // cout << "\npc called";
        free(p);
        p = (int *)malloc(size * sizeof(int));
        s = size;
    }

    int operator[](int i)
    {
        // cout << "\n[] operator called";
        if(i > s)
        {
            cout<<"\nILLEGAL MEMEORY ACCESS\n";
            exit(0);
        }
        return p[i];
    }

    void setArray()
    {
        int i;
        for (i = 0; i < s; i++)
        {
            cin >> p[i];
        }
    }
    friend ostream &operator<<(ostream &print, Array &arr);
};
ostream &operator<<(ostream &print, Array &arr)
{
    for (int i = 0; i < arr.s; i++)
    {
        cout << arr.p[i] << " ";
    }
    return print;
}

int main()
{
    Array arr(10);
    cout<<"\n\nenter 10 numbers in arr[10] : ";
    arr.setArray();
    cout<<"\n"<<arr[12];
    return 0;
}
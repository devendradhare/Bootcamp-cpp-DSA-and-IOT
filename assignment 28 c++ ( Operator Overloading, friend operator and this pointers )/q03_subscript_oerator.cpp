// 3.Overload subscript operator [] that will be useful when we want to check for an indexout of bound.

#include <iostream>
using namespace std;
class Array
{
private:
    int *p;
    int size = 0;

public:
    Array() {}
    Array(int array_size)
    {
        // cout << "\npc called";
        p = (int *)malloc(array_size * sizeof(int));
        size = array_size;
    }

    int operator[](int i)
    {
        cout << "\n[] operator called";
        if (i > size)
        {
            cout << "\nILLEGAL MEMEORY ACCESS\n";
            exit(0);
        }
        return p[i];
    }

    void setArray()
    {
        int i;
        for (i = 0; i < size; i++)
        {
            cin >> p[i];
        }
    }
    friend ostream &operator<<(ostream &print, Array &arr);
};
ostream &operator<<(ostream &print, Array &arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        cout << arr.p[i] << " ";
    }
    return print;
}

int main()
{
    Array arr(10);
    cout << "\n\nenter 10 numbers in arr[10] : ";
    arr.setArray();
    cout<<"\n"<<arr[12];
    return 0;
}
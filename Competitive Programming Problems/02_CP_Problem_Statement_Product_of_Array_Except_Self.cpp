#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4}, ans[4];
    int j = 0, multi = 1;
    for (int i = 0; i < 4; i++)
    {
        if (i != j)
        {
            multi *= arr[i];
        }
        if (i == 3)
        {
            ans[j] = multi;
            multi = 1;
            i = 0;
            j++;
        }
        if (j == 3)
        {
            break;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
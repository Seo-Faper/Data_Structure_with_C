#include <iostream>
#include <algorithm>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int arr[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 10);
        cout << arr[7] << endl;
    }
    return 0;
}
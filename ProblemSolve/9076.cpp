#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int arr[5];
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + 5);
        if (arr[3] - arr[1] >= 4)
        {
            cout << "KIN" << endl;
        }
        else
        {
            sum -= arr[0];
            sum -= arr[4];
            cout << sum << endl;
        }
    }
    return 0;
}
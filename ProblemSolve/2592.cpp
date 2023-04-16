#include <iostream>

using namespace std;
int arr[1001];
int main()
{
    int sum = 0;
    int q = 0;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        int n;
        cin >> n;
        sum += n;
        arr[n]++;
    }
    cout << sum / 10 << endl;
    for (int i = 10; i <= 1000; i++)
    {
        if (arr[i] > q)
        {
            q = arr[i];
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
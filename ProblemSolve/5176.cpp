#include <iostream>
#include <cstring>
using namespace std;
int T, P, K;
int arr[501];
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> P >> K;
        int ans = 0;
        for (int i = 0; i < P; i++)
        {
            int a;
            cin >> a;
            if (!arr[a])
                arr[a]++;
            else
            {
                ans++;
            }
        }
        memset(arr, 0, sizeof(arr));
        cout << ans << endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int N, M;
int arr[51];
int main()
{
    cin >> N >> M;
    if (!N)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // sort(arr, arr + N);
    int ans = 1;
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (cnt + arr[i] <= M)
        {
            cnt += arr[i];
        }
        else
        {
            cnt = arr[i];
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int N, arr[100001], X;
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> X;
    sort(arr, arr + N);
    int start = 0, end = 1;
    int ans = 0;
    while (arr[start] <= X)
    {
        for (int i = end; i < N; i++)
        {
            if (arr[start] + arr[i] >= X)
            {
                if (arr[start] + arr[i] == X)
                {
                    ans++;
                }

                break;
            }
        }
        start++;
        end = start + 1;
    }
    cout << ans << endl;
}
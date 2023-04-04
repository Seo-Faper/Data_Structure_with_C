#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
int T;
int N;
int arr[1000001];

void solution()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    long long ans = 0;
    int max = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if (arr[i] < max)
        {
            ans += max - arr[i];
        }
        else
        {
            max = arr[i];
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solution();
    }
    return 0;
}
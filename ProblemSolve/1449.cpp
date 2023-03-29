#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int N;         // 물이 새는 곳의 개수
    int L;         // 테이프의 길이
    int arr[1000]; // 물이 새는 곳의 위치
    int ans = 0;

    cin >> N >> L;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);

    int range = 0;
    for (int i = 1; i < N; i++)
    {
        range += abs(arr[i] - arr[i - 1]);
        if (L <= range)
        {
            ans++;
            range = 0;
        }
    }
    cout << ++ans << "\n";
    return 0;
}
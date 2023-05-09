#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#define T tuple<int, int, int>
using namespace std;

int dp[10001];
int main()
{
    int N, D;

    vector<T> v;
    cin >> N >> D;
    for (int i = 0; i <= D; i++)
    {
        dp[i] = i;
    }

    for (int i = 0; i < N; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(make_tuple(a, b, c));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++)
    {
        // cout << get<0>(v[i]) << "," << get<1>(v[i]) << "," << get<2>(v[i]) << endl;
        int s = get<0>(v[i]);
        int e = get<1>(v[i]);
        int g = get<2>(v[i]);
        if (e <= D) // 지름길 도착지가 최종 목적보다 크면 안된다. 지름길의 경로가 일반 길보다 길면 안된다.
        {
            dp[e] = min(dp[e], dp[s] + g + (D - e));

            cout << dp[e] << endl;
        }
    }

    return 0;
}
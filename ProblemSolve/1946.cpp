#include <iostream>
#include <vector>
#include <algorithm>
#define P pair<int, int>
using namespace std;
int T;
void solution()
{
    vector<P> v;
    int N;
    cin >> N;
    int ans = 1;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(P(a, b));
    }
    sort(v.begin(), v.end());
    int m = v[0].second;
    for (int i = 1; i < N; i++)
    {
        if (v[i].second < m)
        {
            m = v[i].second;
            ans++;
        }
    }
    cout << ans << "\n";
}
int main()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solution();
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define P pair<int, int>
int N;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    vector<P> v;
    for (int i = 0; i < N; i++)
    {
        int t, s, e;
        cin >> t >> s >> e;
        v.push_back(make_pair(s, 1));
        v.push_back(make_pair(e, -1));
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int e = 0;
    for (int i = 0; i < v.size(); i++)
    {
        e += v[i].second;
        ans = max(e, ans);
    }
    cout << ans << endl;
    return 0;
}

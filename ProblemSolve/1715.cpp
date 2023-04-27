#include <iostream>
#include <algorithm>
#include <queue>
#define G greater<int>
using namespace std;
int N;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;

    int ans = 0;
    priority_queue<int, vector<int>, G> C;
    int a;
    while (N--)
    {
        cin >> a;
        C.push(a);
    }
    if (C.size() == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int e, d;
    while (C.size() > 1)
    {
        e = C.top();
        C.pop();
        d = C.top();
        C.pop();

        C.push(e + d);
        ans += e + d;
    }
    cout << ans << endl;
    return 0;
}
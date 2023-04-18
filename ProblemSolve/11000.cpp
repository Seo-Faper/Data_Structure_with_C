#include <iostream>
#include <algorithm>
#include <queue>
#define P pair<long, long>

using namespace std;
int N;

int main()
{
    cin >> N;
    priority_queue<P> pq;
    for (int i = 0; i < N; i++)
    {
        long a, b;
        cin >> a >> b;
        pq.push(make_pair(-1 * a, -1 * b));
    }
    long start = 0;
    long end = 0;
    int ans = 0;
    while (!pq.empty())
    {
        P t = pq.top();
        cout << -1 * t.first << "," << -1 * t.second << " : " << start << "," << end << endl;

        start = -1 * t.first;
        end = -1 * t.second;

        pq.pop();
        ans++;
    }
    cout << ans << endl;
    return 0;
}
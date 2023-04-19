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
    priority_queue<int> q;
    for (int i = 0; i < N; i++)
    {
        long a, b;
        cin >> a >> b;
        pq.push(make_pair(-1 * a, -1 * b));
    }
    long start = 0;
    long end = 0;
    int ans = 0;
    q.push(pq.top().second);
    pq.pop();
    while (!pq.empty())
    {
        P t = pq.top();
        start = -1 * t.first;
        end = -1 * t.second;
        if (start >= -1 * q.top())
            q.pop();
        q.push(-1 * end);
        pq.pop();
    }
    cout << q.size() << endl;
    return 0;
}
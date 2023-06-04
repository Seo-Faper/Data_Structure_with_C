#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAXN 100002
vector<int> adj[MAXN]; // 인접 리스트
int indegree[MAXN];    // 진입 차수
vector<int> result;    // 정렬 결과

void topsort(int n)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        result.push_back(cur);
        for (int next : adj[cur])
        {
            if (--indegree[next] == 0)
            {
                q.push(next);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indegree[v]++;
    }
    topsort(n);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ' ';
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> graph[1001];
int vis[1001];
void dfs(int x)
{
    vis[x] = true;
    cout << x << " ";
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];

        if (!vis[y])
        {
            dfs(y);
        }
    }
}
void bfs(int start)
{
    queue<int> q;
    q.push(start);
    vis[start] = true;
    while (!q.empty())
    {
        int x = q.front();
        cout << x << " ";
        q.pop();

        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (!vis[y])
            {
                q.push(y);
                vis[y] = true;
            }
        }
    }
}
int main()
{
    int N, M, V;
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {

        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    cout << "\n";
    memset(vis, 0, sizeof(vis));
    bfs(V);
    cout << "\n";
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int N;
int vis[100001];
int ans[100001];
vector<int> adj[100001];
void dfs(int x)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    vis[x] = true;
    for (int i = 0; i < adj[x].size(); i++)
    {
        int next = adj[x][i];
        if (!vis[next])
        {
            ans[next] = x;
            dfs(next);
        }
    }
}
int main()
{
    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);
    for (int i = 2; i <= N; i++)
    {
        cout << ans[i] << "\n";
    }
    return 0;
}
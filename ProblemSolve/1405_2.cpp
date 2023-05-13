#include <iostream>
#include <queue>
#define P pair<int, int>
using namespace std;
int N;
double WORD[4];
int dx[4] = {1, -1, 0, 0}; // 상하좌우
int dy[4] = {0, 0, 1, -1};
int vis[101][101];

double dfs(int x, int y, int d)
{
    if (vis[x][y]) // 이미 지나간 곳아면 확률은 0이 된다.
        return 0;
    if (d == 0)
    {
        return 1;
    }
    vis[x][y] = true;
    double ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans += dfs(x + dx[i], y + dy[i], d - 1) * WORD[i];
    }
    vis[x][y] = false;
    return ans;
}
int main()
{
    cin >> N;
    for (int i = 0; i < 4; i++)
    {
        cin >> WORD[i];
        WORD[i] /= 100;
    }
    queue<P> q;
    q.push(make_pair(50, 50));
    vis[50][50] = true;
    double ans = 1.0;

    int s = q.size();
    while (s--)
    {
        P now = q.front();
        q.pop();
        int x = now.first;
        int y = now.second;
        for (int j = 0; j < 4; j++)
        {
            int nx = x + dx[j], ny = y + dy[j];
            if (vis[nx][ny])
                continue;
            q.push(make_pair(nx, ny));
            vis[nx][ny] = true;
            ans *= WORD[j];
        }
    }

    cout << ans << endl;
    return 0;
}
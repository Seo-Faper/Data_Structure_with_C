#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define P pair<int, int>
int N, M, ans;
int board[10][10];
int vis[10][10];
int dx[4] = {1, -1, 0, 0}; // 상하좌우
int dy[4] = {0, 0, 1, -1};
vector<P> B;
vector<P> V;

void dfs(int y, int x)
{

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny >= N || nx >= M || ny < 0 || nx < 0)
            continue;
        if (!vis[ny][nx] && !board[ny][nx])
        {
            vis[ny][nx] = 1;
            dfs(ny, nx);
        }
    }

    return;
}
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 0)
                B.push_back(make_pair(i, j));
            if (board[i][j] == 2)
                V.push_back(make_pair(i, j));
        }
    }
    for (int i = 0; i < B.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                board[B[i].first][B[i].second] = 1;
                board[B[j].first][B[j].second] = 1;
                board[B[k].first][B[k].second] = 1;
                for (int t = 0; t < N; t++)
                {
                    for (int q = 0; q < M; q++)
                    {
                        vis[t][q] = 0;
                    }
                }
                for (int p = 0; p < V.size(); p++)
                {
                    vis[V[p].first][V[p].second] = 1;
                    dfs(V[p].first, V[p].second);
                }
                int e = 0;
                for (int l = 0; l < N; l++)
                {
                    for (int u = 0; u < M; u++)
                    {
                        if (!board[l][u] && !vis[l][u])
                            e++;
                    }
                }
                ans = max(e, ans);
                board[B[i].first][B[i].second] = 0;
                board[B[j].first][B[j].second] = 0;
                board[B[k].first][B[k].second] = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int N, M;
int board[301][301];
int ice[301][301];
int vis[301][301];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int dfs(int x, int y)
{
    if (vis[x][y])
        return 0;
    if (0 > x || 0 > y || N < x || M < y)
        return 0;
    if (board[x][y])
    {
        vis[x][y] = 1;
        for (int i = 0; i < 4; i++)
        {
            dfs(x + dx[i], y + dy[i]);
        }
        return 1;
    }

    return 0;
}
int main()
{
    cin >> N >> M;
    int maxH = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
            maxH = max(maxH, board[i][j]);
        }
    }
    int time = 0;
    while (true)
    {
        int tmp = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (dfs(i, j))
                {
                    tmp++;
                    // cout << "---------" << endl;
                    // for (int i = 0; i < N; i++)
                    // {
                    //     for (int j = 0; j < M; j++)
                    //     {
                    //         cout << board[i][j] << " ";
                    //     }
                    //     cout << endl;
                    // }
                }
            }
        }
        // cout << tmp << endl;

        if (tmp > 1)
        {
            cout << time << endl;
            return 0;
        }
        else if (tmp == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        time++;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {

                vis[i][j] = 0;
            }
        }
        for (int i = 1; i < N; i++)
        {
            for (int j = 1; j < M; j++)
            {
                if (board[i][j])
                {
                    int e = 0;
                    for (int d = 0; d < 4; d++)
                    {
                        if (!board[i + dx[d]][j + dy[d]])
                            e++;
                    }
                    ice[i][j] = e;
                }
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                board[i][j] -= ice[i][j];
                if (board[i][j] < 0)
                    board[i][j] = 0;
            }
        }
    }
    return 0;
}
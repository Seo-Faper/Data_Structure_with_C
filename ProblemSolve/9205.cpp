#include <iostream>
#include <cmath>
#include <cstring>
#include <queue>
#include <vector>
#define P pair<int, int>
using namespace std;
int board[101][101];
int vis[101];

int T;
int N;

bool bfs()
{
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        if (tmp == N + 1)
        {
            return true;
        }
        for (int i = 0; i < N + 2; i++)
        {
            if (!vis[i])
            {
                if (board[tmp][i] == 1)
                {
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }
    }
    return false;
}
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> N;
        P pos[101];
        for (int i = 0; i < N + 2; i++)
        {
            int x, y;
            cin >> x >> y;
            pos[i] = make_pair(x, y);
        }
        for (int i = 0; i < N + 2; i++)
        {
            for (int j = i + 1; j < N + 2; j++)
            {
                int x = abs(pos[i].first - pos[j].first);
                int y = abs(pos[i].second - pos[j].second);
                if (x + y <= 1000)
                { // 거리가 1000 보다 작으면
                    board[i][j] = 1;
                    board[j][i] = 1;
                }
            }
        }
        // for (int i = 0; i < N + 2; i++)
        // {
        //     for (int j = 0; j < N + 2; j++)
        //     {
        //         cout << board[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        if (bfs())
        {
            cout << "happy" << endl;
        }
        else
        {
            cout << "sad" << endl;
        }
        for (int i = 0; i < N + 2; i++)
        {
            vis[i] = 0;
        }
        for (int i = 0; i < N + 2; i++)
        {
            for (int j = 0; j < N + 2; j++)
            {
                board[i][j] = 0;
            }
        }
    }
    return 0;
}
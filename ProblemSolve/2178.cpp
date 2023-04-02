#include <iostream>
#include <queue>
#define MAX 101
#define P pair<int, int>

using namespace std;
int N, M;
int V[MAX][MAX];
int board[MAX][MAX];
int ans[MAX][MAX];

int dir_x[4] = {-1, 1, 0, 0};
int dir_y[4] = {0, 0, -1, 1};

queue<P> q;

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        string k;
        cin >> k;
        for (int j = 0; j < M; j++)
        {
            board[i][j] = k[j] - '0';
        }
    }
    V[0][0] = true;
    q.push(make_pair(0, 0));
    ans[0][0]++;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int pos_x = x + dir_x[i];
            int pos_y = y + dir_y[i];
            if (0 <= pos_x && pos_x < N && 0 <= pos_y && pos_y < M && !V[pos_x][pos_y] && board[pos_x][pos_y] == 1)
            {
                V[pos_x][pos_y] = true;
                q.push(make_pair(pos_x, pos_y));
                ans[pos_x][pos_y] = ans[x][y] + 1;
            }
        }
    }
    cout << ans[N - 1][M - 1] << endl;

    return 0;
}
#include <iostream>
#include <queue>
#define P pair<int, int>
char board[11][11];
int v[11][11];
using namespace std;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main()
{
    int n, m;
    cin >> n >> m;
    P goal;
    P white;
    P black;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 'O')
            {
                goal = make_pair(i, j);
            }
            else if (board[i][j] == 'W')
            {
                white = make_pair(i, j);
            }
            else if (board[i][j] == 'B')
            {
                black = make_pair(i, j);
            }
        }
    }
    queue<P> wq;
    wq.push(white);

    while (!wq.empty())
    {
        P tmp = wq.front();
        int x = tmp.first;
        int y = tmp.second;
        if (goal.first == x || goal.second == y)
        {
            if (black.first != x && black.second != y)
            {
                cout << v[x][y] << endl;
            }
        }
        wq.pop();

        for (int i = 0; i < 4; i++)
        {
            if (x > 0 || x < n || y > 0 || y < m)
                continue;

            int currX = x + dx[i];
            int currY = y + dy[i];
            black.first = black.first + dx[i];
            black.second = black.second + dy[i];
            if (!v[currX][currY])
            {
                v[currX][currY] = true;
                wq.push(make_pair(currX, currY));
            }
        }
    }

    return 0;
}
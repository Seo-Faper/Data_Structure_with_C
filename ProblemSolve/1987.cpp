#include <iostream>
using namespace std;

int R, C, result = 0;
char board[21][21];
int vis[200];
void dfs(int y, int x, int ret)
{
    if (0 <= y && y < R && 0 <= x && x < C && !vis[board[y][x]])
    {
        vis[board[y][x]]++;
        ret++;
        if (ret > result)
            result = ret;
        dfs(y + 1, x, ret);
        dfs(y - 1, x, ret);
        dfs(y, x + 1, ret);
        dfs(y, x - 1, ret);
        vis[board[y][x]]--;
    }
}

int main()
{
    cin >> R >> C;
    for (int i = 0; i < R; i++)
        cin >> board[i];
    dfs(0, 0, 0);

    cout << result << endl;
    return (0);
}
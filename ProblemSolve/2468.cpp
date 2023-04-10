#include <iostream>
using namespace std;
int N, maxH;
int town[101][101];
int v[101][101];

int dfs(int x, int y)
{

    if (v[x][y])
        return 0;

    if (0 <= x && x < N && 0 <= y && y < N)
    {
        if (town[x][y])
        {
            v[x][y] = 1;
            dfs(x + 1, y);
            dfs(x - 1, y);
            dfs(x, y + 1);
            dfs(x, y - 1);
            return 1;
        }
    }
    return 0;
}
int main()
{
    cin >> N;
    maxH = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> town[i][j];
            maxH = max(town[i][j], maxH);
        }
    }
    int ans = 0;
    int t = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (dfs(i, j))
                t++;
        }
    }
    ans = max(ans, t);
    for (int T = 0; T <= maxH; T++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (town[i][j] - 1 < 0)
                    town[i][j] = 0;
                else
                    town[i][j]--;
                v[i][j] = 0;
            }
        } // 침수 완료

        int t = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (dfs(i, j))
                    t++;
            }
        }
        ans = max(ans, t);
    }
    cout << ans << endl;
    return 0;
}
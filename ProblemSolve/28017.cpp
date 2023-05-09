#include <iostream>
using namespace std;
int N, M;
int dp[501][501];
int main()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> dp[i][j];
        }
    }
    for (int i = 2; i <= N; i++)
    {

        for (int j = 1; j <= M; j++)
        {
            int e = 0xffffff;
            for (int k = 1; k <= M; k++)
            {
                if (j != k)
                {
                    e = min(e, dp[i - 1][k]);
                }
            }
            dp[i][j] += e;
        }
    }
    // cout << dp[N][M];
    int ans = 0xffffff;
    for (int i = 1; i <= M; i++)
    {
        ans = min(ans, dp[N][i]);
    }
    cout << ans << endl;

    return 0;
}
#include <iostream>
#include <cmath>
#include <vector>
#define P pair<int, int>

using namespace std;
int dp[101][100001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, W;
    cin >> N >> W;
    vector<P> inv;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        inv.push_back(P(a, b));
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            int curr_w, curr_v;
            curr_w = inv[i - 1].first;
            curr_v = inv[i - 1].second;
            if (curr_w <= j)
            {
                dp[i][j] = max(dp[i - 1][j - curr_w] + curr_v, dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[N][W] << "\n";
    return 0;
}
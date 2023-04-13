#include <iostream>
using namespace std;
int N, K;
int dp[201][201];
int main()
{
    cin >> N >> K;
    int ans = 0;
    for (int i = 0; i <= K; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= K; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                dp[i][j] += dp[i - 1][j - k];
                dp[i][j] %= 1000000000;
                ans = dp[i][j];
            }
        }
    }
    cout << ans << endl;

    return 0;
}
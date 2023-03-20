#include <iostream>
using namespace std;
int N, M, K;

int main()
{
    cin >> N >> M;
    int board[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }

    cin >> K;
    for (int a = 0; a < K; a++)
    {
        int i, j, x, y, ans = 0;
        cin >> i >> j >> x >> y;

        for (int o = i - 1; o < x; o++)
        {
            for (int t = j - 1; t < y; t++)
            {
                ans += board[o][t];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
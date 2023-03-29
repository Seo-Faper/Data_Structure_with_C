#include <iostream>
using namespace std;

int N, M;
int main()
{
    scanf("%d %d", &N, &M);
    int ans = 0;
    int bit1[N][M];
    int bit2[N][M];
    bool runnable = true;
    for (int i = 0; i < N; i++)
    {
        string k = "";
        cin >> k;
        for (int j = 0; j < M; j++)
        {
            bit1[i][j] = k[j] - '0';
        }
    }
    for (int i = 0; i < N; i++)
    {
        string k = "";
        cin >> k;
        for (int j = 0; j < M; j++)
        {
            bit2[i][j] = k[j] - '0';
        }
    }
    if (N < 3 || M < 3)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (bit1[i][j] != bit2[i][j])
                {
                    cout << "-1";
                    return 0;
                }
            }
        }
        cout << "0";
        return 0;
    }
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = 0; j < M - 2; j++)
        {
            if (bit1[i][j] != bit2[i][j])
            {
                for (int k = i; k < i + 3; k++)
                {
                    for (int q = j; q < j + 3; q++)
                        if (bit2[k][q] == 1)
                            bit2[k][q] = 0;
                        else
                            bit2[k][q] = 1;
                }
                ans++;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (bit1[i][j] != bit2[i][j])
            {
                cout << "-1";
                return 0;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
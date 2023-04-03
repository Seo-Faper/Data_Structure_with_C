#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int arr[25][25];
int v[25][25];
int t = 0;
int result[313];

int dfs(int x, int y)
{
    if (v[x][y])
        return 0;

    if (x >= 0 && x < N && y >= 0 && y < N)
    {

        if (arr[x][y])
        {

            v[x][y] = 1;
            result[t] += 1;
            dfs(x + 1, y);
            dfs(x - 1, y);
            dfs(x, y + 1);
            dfs(x, y - 1);
            // printf("dfs(%d, %d, %d) 호출됨\n", x, y, ans);
            return 1;
        }
    }
    return 0;
}
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string k;
        cin >> k;
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = k[j] - '0';
            v[i][j] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {

            if (dfs(i, j))
                t++;
        }
    }
    cout << t << endl;
    sort(result, result + t);
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << "\n";
    }

    return 0;
}
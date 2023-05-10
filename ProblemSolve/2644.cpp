#include <iostream>
#include <queue>
using namespace std;
int N, A, B;
int g[101][101];
int v[101];
int main()
{
    cin >> N;
    cin >> A >> B;
    int t;
    cin >> t;
    queue<int> q;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    q.push(A);
    // BFS 인접 행렬
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for (int i = 1; i <= N; i++)
        {
            if (!v[i] && g[tmp][i])
            {
                q.push(i);
                v[i] = v[tmp] + 1;
            }
        }
    }
    if (v[B])
        cout << v[B] << endl;
    else
        cout << -1 << endl;
    return 0;
}
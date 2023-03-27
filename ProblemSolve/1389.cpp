#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int N, M, graph[101][101];
vector<int> ans;
const int INF = 100000;
void floyed()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i != j && !graph[i][j])
                graph[i][j] = INF;
        }
    }
    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        int tmp = 0;
        for (int j = 1; j <= N; j++)
        {
            tmp += graph[i][j];
        }
        tmp--;
        ans.push_back(tmp);
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        graph[i][i] = 1;
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    floyed();
    cout << min_element(ans.begin(), ans.end()) - ans.begin() + 1 << "\n";
    return 0;
}
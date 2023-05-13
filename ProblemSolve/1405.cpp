#include <iostream>
using namespace std;
int N;
double WORD[4];
int dx[4] = {1, -1, 0, 0}; // 상하좌우
int dy[4] = {0, 0, 1, -1};
int vis[101][101];

double dfs(int x, int y, int d)
{
    if (vis[x][y]) // 이미 지나간 곳아면 실패다.
        return 0;
    if (d == 0)
    {
        return 1;
    }
    vis[x][y] = true;
    double ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans += dfs(x + dx[i], y + dy[i], d - 1) * WORD[i];
    }
    vis[x][y] = false;
    return ans;
}
int main()
{
    cin >> N;
    for (int i = 0; i < 4; i++)
    {
        cin >> WORD[i];
        WORD[i] /= 100;
    }
    printf("%.9lf\n", dfs(50, 50, N)); // 보드의 정 중앙에 로봇을 둠
    return 0;
}
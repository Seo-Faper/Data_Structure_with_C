#include <iostream>
#include <queue>
#include <tuple>
#define T tuple<int, int, int, int>
typedef struct tomato
{
    int x;
    int y;
    int z;
    int d;
} types;
using namespace std;
int M, N, H;
int box[101][101][101];
int v[101][101][101];
int dx[6] = {1, -1, 0, 0, 0, 0}; // 동 서 남 북 위 아래
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
queue<tomato> q;
int main()
{
    cin >> M >> N >> H;
    for (int k = 0; k < H; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cin >> box[i][j][k];
                if (box[i][j][k] == 1)
                {
                    tomato t;
                    t.x = i;
                    t.y = j;
                    t.z = k;
                    t.d = 0;
                    q.push(t);
                    v[i][j][k] = 1;
                }
                else if (box[i][j][k] == -1)
                    v[i][j][k] = 1;
            }
        }
    }
    if (q.empty()) // 익은 토마토가 하나도 없으면 시작 할 수가 없다.
    {
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;
    while (!q.empty())
    {
        tomato t = q.front();
        q.pop();
        ans = max(ans, t.d);
        for (int i = 0; i < 6; i++)
        {
            int cx = t.x + dx[i];
            int cy = t.y + dy[i];
            int cz = t.z + dz[i];
            int cd = t.d;
            if (0 <= cx && cx < N && 0 <= cy && cy < M && 0 <= cz && cz < H && !v[cx][cy][cz])
            {
                tomato st;
                st.x = cx;
                st.y = cy;
                st.z = cz;
                st.d = cd + 1;
                q.push(st);
                v[cx][cy][cz] = 1;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < H; k++)
            {
                if (v[i][j][k] == 0)
                    ans = -1;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
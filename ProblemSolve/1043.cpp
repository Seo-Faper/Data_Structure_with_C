#include <iostream>
using namespace std;
int N, M;
int R;

int graph[51];
int T[51];
int find(int x)
{
    if (graph[x] == x)
        return x;
    return graph[x] = find(graph[x]);
}
void union_find(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x > y)
        graph[x] = y;
    else
        graph[y] = x;
}
int main()
{
    cin >> N >> M;
    for (int i = 0; i <= N; i++)
        graph[i] = i;
    cin >> R;
    for (int i = 0; i < R; i++)
    {
        int a;
        cin >> a;

        union_find(a, 0);

    } // 진실을 아는 사람은 0을 부모로 가지는 트리에 속한다.고 하자.

    for (int i = 0; i < M; i++)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int p;
            cin >> p;
            if (find(0) != find(p))
            {
                T[p]++;
            }
        }
        else
        {
            int p;
            cin >> p;
            for (int j = 0; j < c - 1; j++)
            {
                int q;
                cin >> q;
                union_find(p, q);
                if (find(0) != find(q))
                    T[q]++;
            }
        }
    }
    int ans = 0;
    if (R == 0)
    {
        cout << M << endl;
        return 0;
    }
    for (int i = 0; i <= N; i++)
    {
        if (T[i])
        {
            if (find(0) != find(i))
                ans += T[i];
        }
    }
    cout << ans << endl;

    return 0;
}
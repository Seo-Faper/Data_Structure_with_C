#include <iostream>
using namespace std;
int N, M;
int graph[1000001];
int find_root(int x)
{
    if (graph[x] == x)
    {
        return x;
    }
    return graph[x] = find_root(graph[x]);
}
void union_find(int x, int y)
{
    x = find_root(x);
    y = find_root(y);

    if (x < y)
        graph[y] = x;
    else
        graph[x] = y;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        graph[i] = i;
    for (int i = 1; i <= M; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            if (find_root(b) != find_root(c))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            union_find(b, c);
        }
    }
    return 0;
}
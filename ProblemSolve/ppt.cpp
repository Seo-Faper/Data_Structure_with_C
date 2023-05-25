#include <iostream>

using namespace std;
int N = 6;
int INF = 999999;
int graph[6][6] = {
    {0, 2, 5, 1, INF, INF},
    {2, 0, 3, 2, INF, INF},
    {5, 3, 0, 3, 1, 5},
    {1, 2, 3, 0, 1, INF},
    {INF, INF, 1, 1, 0, 2},
    {INF, INF, 5, INF, 2, 0}};
bool vis[6];
int dist[6];

// 가장 최소 거리를 가지는 정점을 반환
int getSmallIndex()
{
    int min = INF;
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (dist[i] < min && !vis[i])
        {
            min = dist[i];
            index = i;
        }
    }
    return index;
}
void dijkstra(int start)
{
    for (int i = 0; i < N; i++)
    {
        dist[i] = graph[start][i];
    }
    vis[start] = true;
    for (int i = 0; i < N - 2; i++)
    {
        int curr = getSmallIndex();
        vis[curr] = true;
        for (int j = 0; j < N; j++)
        {
            if (!vis[j])
            {
                if (dist[curr] + graph[curr][j] < dist[j])
                {
                    dist[j] = dist[curr] + graph[curr][j];
                }
            }
        }
    }
}
int main()
{
    dijkstra(0);
    for (int i = 0; i < N; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}
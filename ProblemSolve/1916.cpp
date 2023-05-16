#include <vector>
#include <iostream>
#include <queue>

#define MAX 100001
#define INF 987654321
#define P pair<int, int>

using namespace std;
vector<P> adj[MAX];
vector<int> dist(1001, INF); // 전부 INF로 초기화
void dijkstra(int start)
{

    priority_queue<P> pq;

    dist[start] = 0;
    pq.push(make_pair(0, start)); // 시작 정점 방문

    while (!pq.empty())
    {
        int cost = -pq.top().first; // 방문한 정점의 dist 값
        int cur = pq.top().second;  // 현재 방문한 정점
        pq.pop();
        if (dist[cur] < cost)
            continue;
        for (int i = 0; i < adj[cur].size(); i++)
        {                                          // 현재 방문한 정점의 주변 정점 모두 조사
            int next = adj[cur][i].first;          // 조사할 다음 정점
            int nCost = cost + adj[cur][i].second; // 현재 방문한 정점을 거쳐서 다음 정점을 갈때의 비용
            if (nCost < dist[next])
            {                                     // 기존 비용보다 현재 방문한 정점을 거친 비용이 더 싸다면
                dist[next] = nCost;               // 갱신
                pq.push(make_pair(-nCost, next)); // pq에 저장
            }
        }
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int V, E;

    cin >> V;
    cin >> E;

    for (int i = 0; i < E; i++)
    {
        int from, to, cost;

        cin >> from >> to >> cost;
        adj[from].push_back(make_pair(to, cost)); // 양방향 그래프
    }
    int s, e;
    cin >> s >> e;
    dijkstra(s);
    cout << dist[e] << endl;
    return 0;
}

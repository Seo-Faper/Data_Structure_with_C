#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define V vector<int>
#define P pair<int, int>
#define G greater<P>
// 그래프의 정점을 표현하는 구조체
struct Vertex
{
    int index;    // 정점의 인덱스
    int weight;   // 현재까지의 최소 가중치
    int parent;   // 최소 신장 트리에서의 부모 정점 인덱스
    bool visited; // 방문 여부

    Vertex(int idx, int w, int p) : index(idx), weight(w), parent(p), visited(false) {}
};

// 그래프의 간선을 표현하는 구조체
struct Edge
{
    int source; // 출발 정점 인덱스
    int target; // 도착 정점 인덱스
    int weight; // 가중치

    Edge(int src, int tgt, int w) : source(src), target(tgt), weight(w) {}
};

// 프림 알고리즘
vector<Edge> primMST(vector<V> &graph)
{
    int numVertices = graph.size();

    // 모든 정점을 표현하는 배열 초기화
    vector<Vertex> vertices;
    for (int i = 0; i < numVertices; i++)
    {
        vertices.push_back(Vertex(i, INT_MAX, -1));
    }

    // 첫 번째 정점을 시작으로 선택
    vertices[0].weight = 0;

    // 우선순위 큐를 사용하여 가중치가 최소인 정점을 선택
    priority_queue<P, vector<P>, G> pq;
    pq.push(make_pair(0, 0));

    vector<Edge> mstEdges; // 최소 신장 트리의 간선들을 저장하는 벡터

    while (!pq.empty())
    {
        int currentVertex = pq.top().second;
        pq.pop();

        // 정점을 방문하지 않았으면 최소 신장 트리에 추가
        if (!vertices[currentVertex].visited)
        {
            vertices[currentVertex].visited = true;

            // 정점과 부모 정점을 연결하는 간선을 최소 신장 트리에 추가
            if (vertices[currentVertex].parent != -1)
            {
                mstEdges.push_back(Edge(vertices[currentVertex].parent, currentVertex, vertices[currentVertex].weight));
            }

            // 인접한 정점들을 우선순위 큐에 추가
            for (int i = 0; i < numVertices; i++)
            {
                if (graph[currentVertex][i] != 0 && !vertices[i].visited && graph[currentVertex][i] < vertices[i].weight)
                {
                    vertices[i].weight = graph[currentVertex][i];
                    vertices[i].parent = currentVertex;
                    pq.push(make_pair(vertices[i].weight, i));
                }
            }
        }
    }

    return mstEdges;
}

int main()
{
    int numVertices, numEdges;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    // 그래프 초기화
    vector<V> graph(numVertices, V(numVertices, 0));

    cout << "Enter the edges and their weights:\n";
    for (int i = 0; i < numEdges; i++)
    {
        int source, target, weight;
        cin >> source >> target >> weight;
        graph[source][target] = weight;
        graph[target][source] = weight;
    }

    vector<Edge> mst = primMST(graph);

    cout << "Minimum Spanning Tree Edges:\n";
    for (const auto &edge : mst)
    {
        cout << edge.source << " -- " << edge.target << " : " << edge.weight << "\n";
    }

    return 0;
}

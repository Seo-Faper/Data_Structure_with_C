#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#define INF std::numeric_limits<int>::max()

// Structure to represent a node in the graph
struct Node
{
    int id;
    int distance;

    Node(int _id, int _distance) : id(_id), distance(_distance) {}

    // Overloading the less-than operator for the priority queue
    bool operator<(const Node &other) const
    {
        return distance > other.distance;
    }
};

// Dijkstra's algorithm implementation
void dijkstra(const std::vector<std::vector<std::pair<int, int>>> &graph, int start, std::vector<int> &distances)
{
    int V = graph.size();
    distances.assign(V, INF);
    distances[start] = 0;

    std::priority_queue<Node> pq;
    pq.push(Node(start, 0));

    while (!pq.empty())
    {
        Node current = pq.top();
        pq.pop();

        // Skip this node if its distance has already been finalized
        if (current.distance > distances[current.id])
            continue;

        // Visit all neighboring nodes
        for (const auto &neighbor : graph[current.id])
        {
            int neighborId = neighbor.first;
            int edgeWeight = neighbor.second;

            // Relax the edge if a shorter path is found
            if (distances[current.id] + edgeWeight < distances[neighborId])
            {
                distances[neighborId] = distances[current.id] + edgeWeight;
                pq.push(Node(neighborId, distances[neighborId]));
            }
        }
    }
}

int main()
{
    int V, E;
    std::cin >> V >> E;

    int start;
    std::cin >> start;

    // Create an adjacency list to represent the graph
    std::vector<std::vector<std::pair<int, int>>> graph(V + 1); // +1 to match the 1-indexed vertices
    for (int i = 0; i < E; ++i)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back(std::make_pair(v, w));
    }

    std::vector<int> distances(V + 1);
    dijkstra(graph, start, distances);

    for (int i = 1; i <= V; ++i)
    {
        if (distances[i] == INF)
            std::cout << "INF" << std::endl;
        else
            std::cout << distances[i] << std::endl;
    }

    return 0;
}

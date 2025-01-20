#include <iostream>
#include <limits.h>  // For INT_MAX

using namespace std;

#define V 5  // Number of vertices in the graph

// Function to find the node with the minimum distance that hasn't been visited
int findMinDistance(int distance[], bool visited[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        if (!visited[v] && distance[v] <= min) {
            min = distance[v];
            min_index = v;
        }
    }
    return min_index;
}

// Dijkstra's algorithm function
void dijkstra(int graph[V][V], int start) {
    int distance[V];  // Array to hold the shortest distance from start to each node
    bool visited[V];  // Array to keep track of visited nodes

    // Initialize distances to all nodes as infinite and visited[] as false
    for (int i = 0; i < V; i++) {
        distance[i] = INT_MAX;
        visited[i] = false;
    }

    // Distance to the source node is 0
    distance[start] = 0;

    // Loop over all vertices to find the shortest path
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum distance node from the unvisited set
        int u = findMinDistance(distance, visited);

        // Mark the picked node as visited
        visited[u] = true;

        // Update the distance value of the adjacent vertices
        for (int v = 0; v < V; v++) {
            // Update distance[v] only if:
            // 1. It's not visited,
            // 2. There's an edge between u and v,
            // 3. The current known distance to v is greater than the new distance through u
            if (!visited[v] && graph[u][v] && distance[u] != INT_MAX && distance[u] + graph[u][v] < distance[v]) {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }

    // Print the result
    cout << "Shortest distances from node " << start << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << " : " << distance[i] << "\n";
    }
}

int main() {
    // Example graph (Adjacency matrix representation)
    // 0 means no direct connection
    int graph[V][V] = {
        {0, 2, 3, 1, 0},  // A
        {2, 0, 5, 0, 2},  // B
        {3, 5, 0, 6, 3},  // C
        {1, 0, 6, 0, 1},  // D
        {0, 2, 3, 1, 0}   // E
    };

    // Run Dijkstra's algorithm from node 0 (A)
    dijkstra(graph, 0);

    return 0;
}

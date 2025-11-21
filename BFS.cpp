#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, edges;
    cout << "Enter number of vertices: ";
    cin >> n;
    int adj[10][10] = {0};
    cout << "Enter number of edges: ";
    cin >> edges;
    cout << "Enter edges (u v):" << endl;
    for (int k = 0; k < edges; k++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // undirected
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    bool visited[10] = {false};
    queue<int> q;
    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int i = 0; i < n; i++) {
            if (adj[v][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    return 0;
}

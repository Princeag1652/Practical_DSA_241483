#include <iostream>
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
        adj[v][u] = 1; // for undirected graph
    }

    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

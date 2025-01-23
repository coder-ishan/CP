#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    int edges = n;
    
    while (edges--) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    auto mark_max_degree_node = [&](vector<vector<int>>& graph) {
        int max_degree = 0, max_node = -1;
        for (int i = 0; i < n; ++i) {
            if (graph[i].size() > max_degree) {
                max_degree = graph[i].size();
                max_node = i;
            }
        }

        if (max_node != -1) {
            for (int& neighbor : graph[max_node]) {
                neighbor = -1; // Mark as -1
            }
            graph[max_node].clear(); // Clear the adjacency list of max_node
        }
    };

    // Step 1: Mark the node with max degree and repeat the process
    mark_max_degree_node(adj);
    mark_max_degree_node(adj);

    // Step 2: Count connected components
    vector<bool> visited(n, false);
    function<void(int)> dfs = [&](int node) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (neighbor != -1 && !visited[neighbor]) {
                dfs(neighbor);
            }
        }
    };

    int components = 0;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i);
            components++;
        }
    }

    cout << components << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

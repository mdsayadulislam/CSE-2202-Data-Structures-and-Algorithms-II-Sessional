#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, vector<pair<int,int>>> adj;

    int n, e;
    cout << "Please Enter number of nodes and edges" << endl;
    cin >> n >> e;

    int u, v, w;
    for(int i = 0; i < e; i++) {
        cout << "Enter edge (u v w): ";
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w}); // undirected
    }

    // Min Heap (distance, node)
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> distance(n, INT_MAX);
    vector<bool> visited(n, false);

    // Source node = 0
    distance[0] = 0;
    pq.push({0,0});

    while(!pq.empty()) {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if(visited[node]) continue; // avoid reprocessing
        visited[node] = true;

        cout << node << " "; // BFS-like order of processing

        for(auto vec : adj[node]) {
            int neighbour = vec.first;
            int wt = vec.second;

            if(d != INT_MAX && d + wt < distance[neighbour]) {
                distance[neighbour] = d + wt;
                pq.push({distance[neighbour], neighbour});
            }
        }
    }

    cout << "\nShortest Distances:" << endl;
    for(int d : distance) {
        if(d == INT_MAX) cout << "INF ";
        else cout << d << " ";
    }
    cout << endl;
}

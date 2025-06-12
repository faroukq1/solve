#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void bfs (int startNode , vector<vector<int>>& adj , vector<bool>& visited) {
    queue < int > q;
    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << ' ';

        for (auto neighbor : adj[node])
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
    }
}
int main () {
   int n = 6;  // Number of nodes in the graph
    vector<vector<int>> adjList(n); // Adjacency list

    // Graph edges (undirected graph)
    adjList[0] = {1, 2};  // Node 0 is connected to 1 and 2
    adjList[1] = {0, 3, 4}; // Node 1 is connected to 0, 3, and 4
    adjList[2] = {0, 4};  // Node 2 is connected to 0 and 4
    adjList[3] = {1, 4, 5}; // Node 3 is connected to 1, 4, and 5
    adjList[4] = {1, 2, 3}; // Node 4 is connected to 1, 2, and 3
    adjList[5] = {3};     // Node 5 is connected to 3

    vector<bool> visited(n, false); // Track visited nodes

    int startNode = 0; // Starting the BFS from node 0
    cout << "BFS Traversal starting from node " << startNode << ": " << endl;
    bfs(startNode, adjList, visited);  // Call BFS function

    return 0;
}
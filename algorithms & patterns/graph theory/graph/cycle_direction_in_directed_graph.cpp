#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


bool dfs_helper(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& recStack) {
    visited[node] = true;
    recStack[node] = true;

    for (auto &neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs_helper(neighbor, adj, visited, recStack)) {
                return true; 
            }
        } else if (recStack[neighbor]) {
            return true;
        }
    }

    recStack[node] = false; 
    return false;
}

bool has_cycle_directed(int N, vector<vector<int>>& adj) {
    vector<bool> visited(N, false);
    vector<bool> recStack(N, false); 

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            if (dfs_helper(i, adj, visited, recStack)) {
                return true; 
            }
        }
    }
    return false; 
}

int main() {
    int N = 4; 
    vector<vector<int>> adj(N);

    // Example directed graph with a cycle (0 -> 1 -> 2 -> 0)
    adj[0] = {1};
    adj[1] = {2};
    adj[2] = {0};
    adj[3] = {2}; // Node 3 has no cycle

    if (has_cycle_directed(N, adj)) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}
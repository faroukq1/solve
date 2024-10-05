#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


/*
    UNDRECTED GRAPH
*/

bool dfs_helper (int node , int parent , vector<vector<int>>& adj , vector<bool>& visited) {
    visited[node] = true;

    for (auto neighbor : adj[node])
        if (!visited[neighbor])
            if (dfs_helper(neighbor , node , adj , visited))
                return true;
        else if (neighbor != parent)
            return true;

    return false;
}

bool has_cycle_undirected (int N , vector<vector<int>>& adj) {
    vector<bool> visited(N , false);
    for (int i = 0 ; i < N ; i++)
        if (!visited[i])
            if (dfs_helper(i , -1 , adj , visited))
                return true;
    return false;
}


int main() {
    int n = 5; 
    vector<vector<int>> adj(n); 

    // Example graph with a cycle (0-1-2-3-0)
    adj[0] = {1, 3};
    adj[1] = {0, 2};
    adj[2] = {1, 3};
    adj[3] = {0, 2};
    adj[4] = {}; // Node 4 is isolated (no edges)

    if (has_cycle_undirected(n, adj)) {
        cout << "cycle detected!" << endl;
    } else {
        cout << "no cycle detected." << endl;
    }

    return 0;
}
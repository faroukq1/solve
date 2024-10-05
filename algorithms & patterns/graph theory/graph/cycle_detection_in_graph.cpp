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
            if (dfs(neighbor , node , adj , visited))
                return true;
        else if (neighbor != parent)
            return true;

    return false;
}

bool has_cycle_undrected (int N , vector<vector<int>>& adj) {
    vector<bool> visited(N , false);
    for (int i = 0 ; i < N ; i++)
        if (!visited[i])
            if (dfs(i , -1 , adj , visited))
                return true;
    return false;
}
int main () {

    return 0;
}
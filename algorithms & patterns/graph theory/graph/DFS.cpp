// Depth First Search Algorithm | Graph Theory

#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void dfs (int node , vector<vector<int>>& adj , vector<bool>& visited) {
    visited[node] = true;
    cout << "visited node : " << node << endl;
    for (auto neighbor : adj[node])
        if (!visited[neighbor])
            dfs(neighbor , adj , visited);
}

int main () {
    int N = 5;
    vector<vector<int>> adj(N);

    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1};

    vector<bool> visited(N , false);

    dfs(0 , adj , visited);

    /*
    HOW DFS WORK :
        DFS plunges depth first into a graph without
        regard for wich wdge it takes next until it
        cannot go any further at which point it backtracking
        and continues.
    
    BASIC DFS :
        start DFS at node 0
        it first print out the node = 0
        the 0 connected with 1 and 2
        2 will get stocked in the stack
        print out the node = 1
        then node 3
        there is no node except 1 (already printed)
        related with node 3
        in back to node 1
        node 1 has edge with node 4
        print out the node 4
        go back to 1
        there is no unvisited node
        go back to 2
        unvisited node = 2
        print out the node 2
        printed nodes : ( 0 1 3 4 2 )
     
    USE CASES :
        1 - finding connected component (done)
        2 - detect and find cycles in a graph (done)
        3 - check if a graph is bipartite
        4 - find strongly connected compoennts
        5 - topologically sort the nodes of a graph
        6 - find bridges and articulation points
        7 - find augmenting paths in a flow network
        8 - generates mazes
        9 - compute a graph's minimum spanning tree
     */
}
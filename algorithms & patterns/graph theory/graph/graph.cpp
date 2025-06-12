#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void add_edges_on_adj_list (vector<vector<int>>& adj_list , int u , int v) {
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

void add_edges_on_adj_matrix (vector<vector<int>>& adj_matrix, int u , int v) {
    adj_matrix[u][v] = 1;
    adj_matrix[v][u] = 1;
}

void add_direct_edge_adj_list (vector<vector<int>>& adj_list , int u , int v) {
        adj_list[u].push_back(v);
}

void add_direct_edge_adj_matrix (vector<vector<int>>& adj_matrix , int u , int v) {
    adj_matrix[u][v] = 1;
}
int main () {
    // how to declare a undirective-graph
    // vector<vector< type >> adj_list( size );

    int N = 10;
    // adj list
    vector<vector<int>> adj_list(N);


    // adding edges (underected edges)
    add_edges_on_adj_list(adj_list , 1 , 2);
    add_edges_on_adj_list(adj_list , 2 , 3);
    add_edges_on_adj_list(adj_list , 3 , 2);
    /*
    this means the edge 0 is related with
    the edge 1 the also 1 is related with 0
    */

   // adj matrix

   vector<vector<int>> adj_matrix(N , vector<int>(N , 0));

    // adding edges between 0 and 1
    add_edges_on_adj_matrix(adj_matrix , 1 , 2);
    add_edges_on_adj_matrix(adj_matrix , 2 , 1);


    /*
    the directed graph is similar to the undirected graph
    but the different is the you adsd only v to adjlist[u]
    , indicating a one-way edge from u to v
     */

    vector<vector<int>> adj_list_directed(N);

    // the edge 1 can go the edge == 2 but the 2 can't
    add_direct_edge_adj_list(adj_list_directed , 1 , 2);
    
}
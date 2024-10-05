#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void dfs (int node , vector<vector<int>>& adj , vector<bool>& visited , vector<int>& single_component) {
  visited[node] = true;
  single_component.push_back(node);
  for (auto &neighbor : adj[node])
    if (!visited[neighbor])
      dfs(neighbor , adj , visited , single_component);
}

vector<vector<int>> find_connected_component (int N , vector<vector<int>>& adj) {
  vector<vector<int>> all_component;
  vector<bool> visited(N , false);

  for (int i = 0 ; i < N ; i++) {
    if (!visited[i]) {
      vector<int> single_component;
      dfs(i , adj , visited , single_component);
      all_component.push_back(single_component);
    }
  }

  return all_component;
}
int main () {
  int N = 7;
  vector<vector<int>> adj(N);
    
    adj[0] = {1};
    adj[1] = {0, 2};
    adj[2] = {1};
    adj[3] = {4};
    adj[4] = {3, 5};
    adj[5] = {4};
    adj[6] = {};  // Node 6 is isolated

    vector<vector<int>> components = find_connected_component(N , adj);

    cout << "connected component : " << endl;
    for (auto component : components) {
      for (auto node : component)
        cout << node << ' ';
    cout << endl;
    }

}


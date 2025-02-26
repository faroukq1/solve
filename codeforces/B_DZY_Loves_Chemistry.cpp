#include <bits/stdc++.h>
using namespace std;
 
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
 
map<int, vector<int>> adj;
set<int> seen;
long long res = 1;
void dfs (int node) {
    seen.insert(node);
    res *= 2;
    for (int neigh : adj[node])
        if (seen.find(neigh) == seen.end())
            dfs(neigh);
}
 
void run_case() {
    // solving
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b), adj[b].push_back(a);
    }
    for (int i = 1; i <= N; i++) {
        if (seen.find(i) == seen.end()) {
            dfs(i);
            res /= 2;
        }
    }
 
    cout << res << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif
 
    int tests = 1;
 
    while (tests-- > 0)
        run_case();
}
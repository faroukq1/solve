#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
  vector<pair<int, int>> coordinates(4);

  for (auto &a : coordinates)
    cin >> a.first >> a.second;
  set<int> x_coords, y_coords;
  for (int i = 0; i < 4; i++) {
    x_coords.insert(coordinates[i].first);
    y_coords.insert(coordinates[i].second);
  }

  int side_length = abs(*x_coords.begin() - *next(x_coords.begin()));
  cout << side_length * side_length << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}
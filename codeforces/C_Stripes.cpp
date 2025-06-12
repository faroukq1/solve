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
  vector<vector<char>> grid(8, vector<char>(8));

  // Reading the grid
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> grid[i][j];
    }
  }

  // Check rows first
  for (int i = 0; i < 8; i++) {
    bool rowComplete = true;
    for (int j = 1; j < 8; j++) {
      if (grid[i][j] != grid[i][0]) {
        rowComplete = false;
        break;
      }
    }
    if (rowComplete && grid[i][0] == 'R') {
      cout << 'R' << endl;
      return;
    }
  }

  // If no complete red row is found, check columns
  for (int i = 0; i < 8; i++) {
    bool colComplete = true;
    for (int j = 1; j < 8; j++) {
      if (grid[j][i] != grid[0][i]) {
        colComplete = false;
        break;
      }
    }
    if (colComplete && grid[0][i] == 'B') {
      cout << 'B' << endl;
      return;
    }
  }
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

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
  for (int i = 0; i < 8; i++)
    for (int j = 0; j < 8; j++)
      cin >> grid[i][j];

  int cpt = 0;
  for (int i = 0; i < 8; i++) {
    bool line = true;
    for (int j = 0; j < 8; j++)
      if (grid[i][j] == '.') {
        line = false;
        break;
      }
    if (line)
      cpt++;
  }

  for (int i = 0; i < 8; i++) {
    bool line = true;
    for (int j = 0; j < 8; j++)
      if (grid[j][i] == '.') {
        line = false;
        break;
      }
    if (line)
      cpt++;
  }

  char lastPain;
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
// R B => R
// R
// B R B R => B
// B R B R B => R